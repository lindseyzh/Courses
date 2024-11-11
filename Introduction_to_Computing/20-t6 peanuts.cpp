#include <iostream>
#include <cmath>
using namespace std;
int t, m, n, i, j, so;
int x1, y1, x0, y0, ti, pn;
int p[22][22],s[405][3];
int main() {
	cin >> t;
	for (int k = 0; k < t; k++) {
		so = 0;
		cin >> m >> n >> k;
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++) {
				cin >> p[i][j];
				s[so][1] = i;
				s[so][2] = j;
				so++;
			}
		for(i=0;i<so-1;i++)
			for (j = 0; j < so - 1 - i; j++) {
				if (p[s[j][1]][s[j][2]] < p[s[j + 1][1]][s[j + 1][2]]) {
					swap(s[j], s[j + 1]);
				}
			}
		ti = 0;//time
		pn = 0;//peanuts
		ti += p[s[0][1]][s[0][2]];
		i = 1;
		do {
			x1 = s[i][1];
			y1 = s[i][2];
			x0 = s[i - 1][1];
			y0 = s[i - 1][2];
			ti += abs(x1 - x0) + abs(y1 - y0);
			if (ti > k) 
				break;
			pn += p[x1][y1];
			if (ti == k) 
				break;
			i++;
			if (i >= so)
				break;
		} while (1);
		cout << pn << endl;
	}

	return 0;
}
