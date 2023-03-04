#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<list> 
using namespace std;
typedef map<int,list<int>,less<int>> mlst;
mlst lst;
void op(list<int>& l){
//Notice:There's a space at the end of each line
	list<int>::iterator i=l.begin();
//	i++;
//	cout<<*l.begin();
	for(;i!=l.end();i++)
		cout<<*i<<' ';
	cout<<endl;
}
int main(){
	string s;
	int id,a,id1,id2,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s=="new"){
			cin>>id;
			lst[id];
		}
		else if(s=="add"){
			cin>>id>>a;
			lst[id].push_back(a);
			lst[id].sort();
		}
		else if(s=="merge"){
			cin>>id1>>id2;
			if(id1==id2) continue;
			if(lst.count(id1)==0){
				lst[id1]=lst[id2];
				lst.erase(id2);
				continue;
			}
			if(lst.count(id2)==0) continue;
			list<int> & l1=lst[id1];
			list<int> & l2=lst[id2];
			l1.merge(l2);
			l1.sort();
			lst.erase(id2);
		}
		else if(s=="unique"){
			cin>>id;
			lst[id].unique();
		}
		else if(s=="out"){
			cin>>id;
			if(lst.count(id)==0) {
				cout<<endl;
				continue;
			}
			op(lst[id]);
		}
	}
	
	return 0;
} 