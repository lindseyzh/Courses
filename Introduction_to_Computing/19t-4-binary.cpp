#include <iostream>
using namespace std;
int main() {
	int n;
	bool s1[205], s2[205], b = 1;;
	int sum1=0, sum2=0;
	int i, j, k;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s1[i];
		sum1 += s1[i];
	}
	for (i = 0; i < n; i++) {
		cin >> s2[i];
		sum2 += s2[i];
	}
	if (sum1 != sum2) b = 0;
	int tms = 0;
	if (b) {
		for(i=0;i<n;i++)
			if (s1[i] != s2[i]) {
				j = i;
				while (s2[j] != s1[i])
					j++;
				tms += j - i;
				swap(s2[i], s2[j]);
			}
	}
	if (b) cout << tms << endl;
		else cout<<-1<<endl;
	return 0;
}
