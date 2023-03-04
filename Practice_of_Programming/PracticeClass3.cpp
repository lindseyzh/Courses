#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class IntegralImage{
// 在此处补充你的代码
    public:
        int h,w;
        int *p=NULL;
        int *pnow=NULL;
        IntegralImage(int hh,int ww):h(hh),w(ww){
            p=new int(h*w+2);
            pnow=p;
        };
        int * operator[](int i){
            return p+i*w;
        }
        void operator()(int * ph){
            int thisline=0;
            if(pnow<p+w) *pnow=0;
            else *pnow=*(pnow-w);
            for(int j=0;j<w;j++){
                thisline+=ph[j];
                if(pnow<p+w) *pnow=0;
                else *pnow=*(pnow-w);  
                *pnow += thisline;
                pnow++;
            }
                   if(pnow<p+w) *pnow=0;
            else *pnow=*(pnow-w);
            if(pnow<p+w) *pnow=0;
            else *pnow=*(pnow-w);
    }
};
int main(){
    int H, W;
    cin >> H >> W;
    int ** image = new int*[H];
    for(int i=0;i<H;++i){
        image[i]=new int[W];
    }
    for(int i=0;i<H;++i)
    for(int j=0;j<W;++j)
        cin >> image[i][j];
    IntegralImage it(H,W);
    for_each(image, image+H, it);
    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j)
            cout<<it[i][j]<<" ";
        cout<<endl;
    }
}
