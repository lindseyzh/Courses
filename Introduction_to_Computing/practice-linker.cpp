#include<iostream>
#include<cstdlib>
using namespace std;
struct linker{
	int id;
	float score;
	linker* next;
};
linker *head=new linker,*tail=head;
int main(){
	head->id=1;
	head->score=90;
	head->next=NULL;
	int i,n;
	cin>>n;
	for(i=2;i<=n;i++){
		tail->next=new linker;
		tail=tail->next;
		tail->id=i;
		tail->score=rand();		
	}
	linker*l=head;
	for(i=1;i<=n;i++){
		cout<<l->id<<' '<<l->score<<endl;
		l=l->next;
	}
	return 0;
	
}
