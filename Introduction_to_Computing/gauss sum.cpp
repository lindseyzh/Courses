#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i, s,n;
	cin >> n;
	i = 1;
	s = 0;
	while i <= n{
		s = s + i;
	i++;
	}
	cout << "the sum is" << s << endl;

	return 0;
}