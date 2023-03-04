#include<iostream>
using namespace std;
int main(int argc, char * argv[]){
//    cout << argv[0] << endl;
    cout << atoi(argv[1]) + atoi(argv[argc-1]) << endl;
    return 0;
}