#include<iostream>
using namespace std;

char dr[5] ="NESW";//direction
int p,x,y,xs,ys,xt,yt,m,n;
char mz[100][100];
bool reach = 0;

void walk();
int mov[5][2] = { {1,0},{0,1},{-1,0},{0,-1},{0,0} };//+1:right turn;-1:left turn
int main() {
	int i, j;
	char c;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			cin >> mz[i][j];
			if (mz[i][j] == 'S') xs = j, ys = i;
			if (mz[i][j] == 'T') xt = j, yt = i;
		}//x-j-column,y-i-row
	cin >> c;
	for (i = 0; i < 4; i++)
		if (c == dr[i]) p = i;
	cout << p << endl;
	x = xs;
	y = ys;
	walk();
	while (1) {
		if (mz[y][x] == 'S') break;
		if (mz[y][x] == 'T') {
			reach = 1;
			break;
		}
		walk();
	}

	if (!reach)cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}

void walk(){
	p--;//left turn
	if (p == -1)p = 4;
	while (mz[y + mov[p][0]][x + mov[p][1] ]== '#') {
		p++;
		if (p == 4) p = 0;
	}
	y += mov[p][0];
	x += mov[p][1];
	p++;
	return;
}
/*
8 10
##########
#...T....#
#.####...#
#.#..#.#.#
#.#....#.#
#.####.#.#
#......#S#
##########
N
*/
