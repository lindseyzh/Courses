#include<bits/stdc++.h>
using namespace std;

//1. O(n^2)
//1.1.1 Naive Straight Insert Sort
void StraightInsertSort(int * a, int n){
    for(int i=1;i<n;i++)
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
            else break;
        }
}

//1.1.2 Improved1: Less swap
void ImprovedInsertionSort(int * a, int n){
    int tmp;
    for(int i=1;i<n;i++){
        tmp=a[i];
        int j=i-1;
        while(j>=0 && tmp<a[j+1]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
    }
}

//1.1.3 Improved 2: Binary Search
void BinaryInsertionSort(int * a, int n){
    for(int i=1;i<n;i++){
        int tmp=a[i];
        int lf=0, rt=i-1;
        while(lf<=rt){
            int md = (lf+rt)/2;
            if(tmp<a[md]) rt=md-1;
            else lf=md+1; 
        }
        for(int j=i-1;j>=lf;j--)
            a[j+1]=a[j];
        a[lf]=tmp;
    }
}


//1.2 bubble sorting
void BubbleSort(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

//1.3 StraightSelectSorting
void StraightSelectSorting(int a[], int n){
    for(int i=0;i<n-1;i++){
        int minp=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[minp])
                minp=j;
        swap(a[i],a[minp]);
    }
}


//2. Shell Sorting
//2.1 delta=2
void Modi(int *,int,int);
void ShellSorting(int a[], int n){
    for(int d=n/2;d>0;d/=2)
        for(int j=0;j<d;j++)
            Modi(a+j,n-j,d);
}
void Modi(int a[], int n, int d){
    for(int i=d;i<n;i+=d)
        for(int j=i;j>0;j-=d){
            if(a[j]<a[j-d])
                swap(a[j],a[j-d]);
            else break;
        }
}

//3. quick sorting
int a[100];
void qqsort(int lf, int rt){
    if(lf>=rt) return;
    int tmp=a[lf],i=lf,j=rt;
    while(i<j){
        while(i<j&&a[j]>=tmp) j--;//this should be put in first
        while(i<j&&a[i]<=tmp) i++;
        swap(a[i],a[j]);
    }
    a[lf]=a[i];
    a[i]=tmp;
    qqsort(lf,i-1);
    qqsort(i+1,rt);
}



//4. Merge Sorting
int tmp[100];
void Merge(int lf, int rt, int md);
void MergeSort(int lf, int rt){
    if(lf>=rt) return;
    int md=(lf+rt)/2;
    MergeSort(lf, md);
    MergeSort(md+1, rt);;
    Merge(lf, rt, md);
}
void Merge(int lf, int rt, int md){
    for(int i=lf;i<=rt;i++)
        tmp[i]=a[i];
    int idx1=lf;
    int idx2=md+1;
    int i=lf;
    while(idx1<=md && idx2<=rt){
        if(tmp[idx1]<=tmp[idx2])
            a[i++]=tmp[idx1++];
        else a[i++]=tmp[idx2++];
    }
    //Note: The two loops are conflict
    while(idx1<=md)
        a[i++]=tmp[idx1++];
    while(idx2<=rt)
        a[i++]=tmp[idx2++];
}




//bucket sort
template<class T>
void BuckedSort(T Array[], int n, int m){
    int * tmpArray = new T[n];
    int * count = new int[m];
    int i;
    //Initialization
    for(int i=0;i<n;i++){
        tmpArray[i] = Array[i];
        count[i]=0;
    }
    //counting
    for(int i=0;i<n;i++)
        count[Array[i]]++;
    for(int i=1;i<n;i++)    
        count[i]+=count[i-1];
    //fetch
    for(int i=n-1;i;i--){
        Array[--count[tmpArray[i]]]= tmpArray[i];
    }
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    MergeSort(0, n-1);
    for(int i=0;i<n;i++)
        cout << a[i] << ' ';
    return 0;
}



/*

Case 1:
5 1 4 7 3 8

Case 2:
10 4 6 2 7 8 4 6 8 11 0
*/