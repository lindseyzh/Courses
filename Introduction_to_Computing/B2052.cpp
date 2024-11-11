//a solution using "switch"
#include <iostream>
using namespace std;
int main(){
	int x,y;
	char c;
	cin>>x>>y>>c;
	switch(c){
		case'+':cout<<x+y<<endl;
		  break;
		case'-':cout<<x-y<<endl;
		  break;
		case'*':cout<<x*y<<endl;
		  break;
		case'/':if (y==0) cout<<"Divided by zero!"<<endl;
		  else cout<<x/y<<endl;
		  break;
		default:cout<<"Invalid operator!"<<endl;
	}
	return 0;
}


/*
#include <iostream>
using namespace std;
int main(){
	int x,y;
	char c;
	cin>>x>>y>>c;
	if (c=='+') cout<<x+y<<endl;
	  else if (c=='-') cout<<x-y<<endl;
	  else if (c=='*') cout<<x*y<<endl;
	  else if (c=='/'){
	         if (y==0) cout<<"Divided by zero!"<<endl;
	         else cout<<x/y<<endl;
	  }
	  else cout<<"Invalid operator!"<<endl;
	return 0;
}*/
