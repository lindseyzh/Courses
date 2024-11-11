#include<iostream>
#include<cstring>
#define INF 500000;
using namespace std;
int s[5][5], d;
char a[1002], b[1002];
int aa[1002], bb[1002];
int best[1002][1002], la, lb;
bool getit[1002][1002]{ 0 };
int findit(int, int);
int main() {
	int m, n;
	cin >> m;
	for (int u = 0; u < m; u++) {
		printf("Case #%d\n", u + 1);
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				cin >> s[i][j];
		cin >> d >> n;
		getchar();
		for (int v = 0; v < n; v++) {
			cin.getline(a, 1002);
			cin.getline(b, 1002);
			la = strlen(a);
			lb = strlen(b);
			memset(getit,0,sizeof(getit));
			memset(best,0,sizeof(best));
			for (int i = 0; i < la; i++)
				switch (a[i]) {
				case 'A':
					aa[i] = 0;
					break;
				case 'G':
					aa[i] = 1;
					break;
				case 'C':
					aa[i] = 2;
					break;
				case 'T':
					aa[i] = 3;
					break;
				}
			for (int i = 0; i < lb; i++)
				switch (b[i]) {
				case 'A':
					bb[i] = 0;
					break;
				case 'G':
					bb[i] = 1;
					break;
				case 'C':
					bb[i] = 2;
					break;
				case 'T':
					bb[i] = 3;
					break;
				}
			best[la - 1][lb - 1] = s[aa[la - 1]][bb[lb - 1]];
			getit[la - 1][lb - 1] = 1;
			cout << findit(0, 0)<< endl;
		}
	}
	return 0;
}
int findit(int i, int j) {//phn=placeholder
	if (getit[i][j]) return best[i][j];
	int u, v,k, sum = 0;
	if (la-i==lb-j) {
		for (u = i, v = j; v < lb; u++, v++) {
			sum += s[aa[u]][bb[v]];
		}
		best[i][j] = sum;
		getit[i][j] = 1;
		return sum;
	}
	if (i == la&&j==lb) return 0;
	if(j==lb||i==la) return -INF;
	best[i][j] = max(findit(i + 1, j + 1)+s[aa[i]][bb[j]], max(findit(i+1,j)+d,findit(i,j+1)+d));
	getit[i][j] = 1;
	return best[i][j];
}

