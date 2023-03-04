#include<iostream>
using namespace std;
int a[102], n;
int comp(const void * p1, const void * p2){
    int * x = (int *) p1;
    int * y = (int *) p2;
    if (* x < * y) return 1;
    return -1;
}
int main(){
    int i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    qsort(a, n, sizeof(int),comp);
    for(i = 0; i < n; i++)
        cout << ' ' << a[i];
    cout << endl;

    return 0;
}