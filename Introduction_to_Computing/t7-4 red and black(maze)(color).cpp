#include <iostream>
using namespace std;
void black(int,int);
char s[23][23];
bool b[23][23];//bij=1:have been here
int w,h,n=0,x0,y0;
int main(){
	int i,j;
	while(1){
		cin>>w>>h;//h-y axis,w-x axis
		if(w==0&&h==0) break;
		for(i=0;i<h;i++)
			for(j=0;j<w;j++){
				cin>>s[i][j];//i-y,j=x
				b[i][j]=0;
				if(s[i][j]=='@') {
					y0=i;
					x0=j;
				}
			}
//		cout<<x0<<' '<<y0<<endl;
		black(y0,x0);
		n=0;
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
				if(b[i][j]) n++;
		cout<<n<<endl;
	}
	
	return 0;
}

void black(int y,int x){
	if(y>=h||y<0) return;
	if(x>=w||x<0) return;
	if(b[y][x]) return;//have been here
	if(s[y][x]=='#') return;//red
	b[y][x]=1;
	black(y,x+1);
	black(y+1,x);
	black(y-1,x);
	black(y,x-1);
	return;
}
