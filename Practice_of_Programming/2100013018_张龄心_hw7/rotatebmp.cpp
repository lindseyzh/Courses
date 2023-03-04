#include<iostream>
#include<fstream>
#include<windows.h>
#include<cmath>
using namespace std;

//pixel struct
typedef struct tagIMAGEDATA{
    BYTE red;
	BYTE green;
	BYTE blue;
}IMAGEDATA;
typedef tagBITMAPFILEHEADER Header;
typedef BITMAPINFOHEADER Info;

tagBITMAPFILEHEADER srcH,dstH;
BITMAPINFOHEADER srciHead,dstiHead;

//get the difference
int Diff(Info & infor){
    int dataPerline=(infor.biWidth*infor.biBitCount+31)/8;
    dataPerline-=dataPerline%4;
    return dataPerline-infor.biWidth*infor.biBitCount/8;
}

int main(int argc,char * argv[]){
    if(argc==1){
        cerr<<"File Open Error!"<<endl;
        return 0;
    }
    ifstream fsrc(argv[1],ios::in|ios::binary);
    ofstream fdst(argv[2],ios::out|ios::binary);
    if(!fdst){
        cerr<<"File Open Error!"<<endl;
        return 0;
    }

    //input
    fsrc.read((char*)&srcH,sizeof(Header));
    fsrc.read((char*)&srciHead,sizeof(Info));
        dstH=srcH;
    dstiHead=srciHead;
    dstiHead.biWidth=srciHead.biHeight;
    dstiHead.biHeight=srciHead.biWidth;
    int height=srciHead.biHeight;
    int width=srciHead.biWidth;
    int dheight=width;
    int dwidth=height;
    IMAGEDATA * Psrc = new IMAGEDATA[height*width];
    IMAGEDATA * Pdst = new IMAGEDATA[height*width];
    int srcD=Diff(srciHead),i,j;
    for(i=0;i<height;i++){
        fsrc.read((char*)(Psrc+width*i),sizeof(IMAGEDATA)*width);
        fsrc.seekg(srcD,ios::cur);
    }

    //rotation
    //the width of the initial picture is the height of the new picture, v.v

    int dstD=Diff(dstiHead);
    char * zeros=new char[dstD+1];
    memset(zeros,0,dstD+1);

    dstiHead.biSizeImage = sizeof(IMAGEDATA)*dheight*(dwidth*sizeof(IMAGEDATA)+dstD);
    dstH.bfSize=sizeof(dstH)+sizeof(dstiHead)+dstiHead.biSizeImage;
    
    for(i=0;i<dheight;i++)
        for(j=0;j<dwidth;j++)
            *(Pdst+i*dwidth+j)=*(Psrc+j*width+dheight-1-i);//rotation
    
    //output
    fdst.write((char*)&dstH,sizeof(dstH));
    fdst.write((char*)&dstiHead,sizeof(dstiHead));

    for(i=0;i<dheight;i++){
        fdst.write((char*)(Pdst+dwidth*i),dwidth*sizeof(IMAGEDATA));
        fdst.write((char*)zeros,dstD);
    }
    
    fsrc.close();
    fdst.close();
    return 0;
}


