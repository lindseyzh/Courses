


//program 1: 
/*
#include<iostream>
using namespace std;
int bitManipulation1(int n, int m, int i) {
	return (m & (1 << i)) + (n & ~(1 << i));
}

int main() {
	int n, m, i, t;
	cin >> t;
	while (t--) { 
		cin >> n >> m >> i;
		cout << bitManipulation1(n, m, i) << endl;
	}
	return 0;
}*/


/*
//program 2: 
#include <iostream>
using namespace std;

int bitManipulation2(int n, int i) {
    return n ^ (1 << i);
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation2(n, i) << endl;
	}
	return 0;
}
*/

/*
//program 3:
#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
//    return i != 32? n ^ (((1 << i) -1) << (32 - i)) : (~ n);
    return n ^ (-1 << (32 - i));
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation3(n, i) << endl;
	}
	return 0;
}
*/