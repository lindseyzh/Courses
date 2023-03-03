#include<iostream>
#include <cmath>
#include<cstring>
#include<string>
#include<easyx.h>
#include<conio.h>
#include<ctime>
#include<fstream>
#pragma comment(lib,"winmm.lib")
using namespace std;

//用于交互的函数&变量
struct button {
	int x1;
	int y1;
	int h = 40;
	int w = 180;
	char name[20];
};
//用于按钮绘制和操作的结构体，记录按钮的位置、大小和文字
void homeitf();//homeinterface 主界面绘制及交互
void boarditf_human_ai();//下棋界面交互-人机对战
void boarditf_human_human();//下棋界面交互-双人对战
void drawboard();//下棋界面绘制
void drawpiece(); //用于画棋子的函数
void drawbutton(button);//画菜单上的按钮
void undoit();//悔棋
void saveit();//存档
void readit();//读档
void hintit();//提示
void resultout(int);//游戏结束时显示结果

bool justreadfile=0;
bool df = 0;
IMAGE background1, background2, bball, wball, bpiece, wpiece;
int boardsq = 60, windowswidth = 700, windowsheight = 400;
int upperleftX = 175, upperleftY = 25, lowerrightX = 525, lowerrightY = 375;
ExMessage m;


//用于决策的变量&函数
bool endgame;//游戏是否结束
int gamestate;//1-人机对战，2-人人对战
int board[8][8]{ 0 }, lastboard[200][8][8];
int piecenum[3] = { 0,2,2 }, lastpiecenum[200][3];
int roundnum;
int fakeboard[10][8][8];
int fakepiecenum[10][3]{ 0 };
int near1[9][2]={{0,0}, {1,1},{-1,-1},{-1,1},{1,-1},{1,0},{0,-1},{0,1},{-1,0} };
int near2[9][2]= { {0,0}, {1,-1},{-1,1},{0,1},{1,0},{1,1},{0,-1},{-1,-1},{-1,0} };
int jump[17][2] =  { {0,0},{2,0},{2,1},{1,-2},{2,-2},{-2,0},{-2,-1},{2,-1},{-2,1},{0,2},{-1,2},{-2,-2},{-1,-2},{0,-2},{2,2},{1,2},{-2,2} };
int jump2[17][2] = { {0,0},{-1,-2},{2,0},{2,2},{1,2},{0,2},{-1,2},{-2,2},{-2,1},{-2,0},{-2,-1},{-2,-2},{2,0},{0,-2},{1,-2},{2,-2},{2,-1} };
int ai,user;//1-黑,2-白
int sidetomove;
int legalmove[10][5000][5],movenum[10];
int startx, starty, nextx, nexty, inputstate;
int level;
bool haltit = 0;
int StartTime; 
const int TimeLimit = CLOCKS_PER_SEC * 0.85;
//算法本身卡时0.85s，本地运行中由于界面绘制会使用更长时间

void findlegalmove(int);//
int legal(int,int, int, int, int);// 返回值0表示不合法，返回值1表示移动1格，返回值2表示跳跃2格
void putpiece(int,int, int, int, int);//
void fakeputpiece(int, int);//
void walk();//
int albt(int, int, int);//
int evaluate();//

 int main() {
	 int ord,i,j;
	 bool lastgame = 0,LastUserColor=0;// 用于存盘
	 initgraph(windowswidth, windowsheight);
	 loadimage(&bball, _T("bball.jpg"));
	 loadimage(&wball, _T("wball.jpg"));
	 loadimage(&background1, _T("bacg1.png"));
	 loadimage(&background2, _T("bacg2.png"));
	 loadimage(&bpiece, _T("bpiece.png"));
	 loadimage(&wpiece, _T("wpiece.png"));
	 mciSendString("open bgm.mp3", NULL, 0, NULL);
	 mciSendString("play bgm.mp3 repeat", NULL, 0, NULL);
	//初始化
	homeitf();
	system("pause");
	return 0;
}
 //主界面
void homeitf() {
	//绘制主界面
	BeginBatchDraw();
	putimage(0, 0, &background1);
	setfillcolor(BROWN);
	solidroundrect(175, 35, 700 - 180+5, 145, 20, 20);
	setfillcolor(WHITE);
	solidroundrect(180, 40, 700-180, 140,20,20);
	settextcolor(BLACK);
	settextstyle(80, 30, "华文行楷");
	setbkmode(TRANSPARENT);
	outtextxy(200, 50, "ATAXX");

	button human_ai,human_human,readfile;
	human_ai.x1 = human_human.x1=readfile.x1=250;
	human_ai.y1 = 180;
	human_human.y1 = human_ai.y1+70;
	readfile.y1 = human_human.y1 + 70;
	strcpy_s(human_ai.name, "人 机 对 战");
	strcpy_s(human_human.name, "双 人 对 战");
	strcpy_s(readfile.name, "读 取 存 档");
	drawbutton(human_ai);
	drawbutton(human_human);
	drawbutton(readfile);
	EndBatchDraw();

	//点击按钮
	while (1) {
		m = getmessage(EM_MOUSE);
		if (m.message== WM_LBUTTONDOWN) {
			if (m.x >= human_ai.x1 && m.x <= human_ai.x1 + human_ai.w
				&& m.y >= human_ai.y1 && m.y <= human_ai.y1 + human_ai.h)
				boarditf_human_ai();
			else if (m.x > human_human.x1 && m.x < human_human.x1 + human_human.w
				&& m.y>human_human.y1 && m.y < human_human.y1 + human_human.h)
				boarditf_human_human();
			else if (m.x > readfile.x1 && m.x < readfile.x1 + readfile.w
				&& m.y>readfile.y1 && m.y < readfile.y1 + readfile.h)
				readit();
		}

	}
}

//人机对局界面 
 void boarditf_human_ai(){//人机对战界面
	 gamestate = 1;
	 endgame = 0;
	 bool firstwalk = 1;
	 if (justreadfile) {//如果在读档
		 goto LOOP2;
	 }
	 //画按钮＆选择所执棋子颜色
	 {
		 button takeblack, takewhite, mainitf;
		 takeblack.x1 = takewhite.x1 = mainitf.x1 = 250;
		 takeblack.y1 = 180;
		 takewhite.y1 = takeblack.y1 + 70;
		 mainitf.y1 = takewhite.y1 + 70;
		 strcpy_s(takeblack.name, "执 黑 先 行");
		 strcpy_s(takewhite.name, "执 白 后 行");
		 strcpy_s(mainitf.name, "     返  回");

		 BeginBatchDraw();
		 drawbutton(takeblack);
		 drawbutton(takewhite);
		 drawbutton(mainitf);
		 EndBatchDraw();

		 while (1) {
			 m = getmessage(EM_MOUSE);
			 if (m.message == WM_LBUTTONDOWN) {
				 if (m.x >= takeblack.x1 && m.x <= takeblack.x1 + takeblack.w
					 && m.y >= takeblack.y1 && m.y <= takeblack.y1 + takeblack.h) {
					 user = 1;
					 ai = 2;
					 break;
				 }
				 else if (m.x >= takewhite.x1 && m.x <= takewhite.x1 + takewhite.w
					 && m.y >= takewhite.y1 && m.y <= takewhite.y1 + takewhite.h) {
					 user = 2;
					 ai = 1;
					 break;
				 }
				 else if (m.x >= mainitf.x1 && m.x <= mainitf.x1 + mainitf.w
					 && m.y >= mainitf.y1 && m.y <= mainitf.y1 + mainitf.h) {
					 homeitf();
				 }
			 }
		 }

		 //画按钮＆选择ai难度
		 button easy, normal, diffi;
		 easy.x1 = normal.x1 = diffi.x1 = 250;
		 easy.y1 = 180;
		 normal.y1 = easy.y1 + 70;
		 diffi.y1 = normal.y1 + 70;
		 strcpy_s(easy.name, "相 当 简 单");//初级难度
		 strcpy_s(normal.name, "有 点 难 度");//中级难度
		 strcpy_s(diffi.name, "谨 慎 尝 试");//高级难度

		 BeginBatchDraw();
		 drawbutton(easy);
		 drawbutton(normal);
		 drawbutton(diffi);
		 EndBatchDraw();

		 while (1) {
			 m = getmessage(EM_MOUSE);
			 if (m.message == WM_LBUTTONDOWN) {
				 if (m.x >= easy.x1 && m.x <= easy.x1 + easy.w
					 && m.y >= easy.y1 && m.y <= easy.y1 + easy.h) {
					 level = 1;//
					 break;
				 }
				 else if (m.x >= normal.x1 && m.x <= normal.x1 + normal.w
					 && m.y >= normal.y1 && m.y <= normal.y1 + normal.h) {
					 level = 3;//
					 break;
				 }
				 else if (m.x >= diffi.x1 && m.x <= diffi.x1 + diffi.w
					 && m.y >= diffi.y1 && m.y <= diffi.y1 + diffi.h) {
					 df = 1;
					 break;
				 }
			 }
		 }
		 memset(board, 0, sizeof(board));
		 board[1][1] = board[7][7] = 1;
		 board[7][1] = board[1][7] = 2;
		 piecenum[1] = piecenum[2] = 2;
		 roundnum = 0;
	 }
 LOOP2:

	 //绘制游戏界面
	 BeginBatchDraw();
	 memcpy(lastboard[roundnum], board, sizeof(board));
	 memcpy(lastpiecenum[roundnum], piecenum, sizeof(piecenum));
	 putimage(0, 0, &background2);
	 drawboard();
	 button undo ,hint,save,exit;
	 undo.x1 = hint.x1=save.x1 = exit.x1 = 600;
	 hint.y1 = 145;
	 undo.y1 = hint.y1-70;
	 save.y1 = hint.y1 + 70;
	 exit.y1 = save.y1 + 70;
	 strcpy_s(undo.name, "悔 棋");
	 strcpy_s(hint.name, "提 示");
	 strcpy_s(save.name, "存 档");
	 strcpy_s(exit.name, "返 回");

	 drawbutton(undo);
	 drawbutton(hint);
	 drawbutton(save);
	 drawbutton(exit);


	 EndBatchDraw();
	 //
	 if (firstwalk&&ai == 1&&!justreadfile) {//如果ai执黑先行，开局先走一步
		 int textlx = 300, texth = 190;
		 settextstyle(30, 0, _T("华文行楷"));
		 setfillcolor(WHITE);
		 solidroundrect(textlx - 12, texth - 30, textlx + 230, texth + 60, 10, 10);
		 setfillcolor(TRANSPARENT);
		 outtextxy(textlx, texth, "请稍等~");
		 Sleep(100);
		 walk();
		 roundnum++;
		 memcpy(lastboard[roundnum], board, sizeof(board));
		 memcpy(lastpiecenum[roundnum], piecenum, sizeof(piecenum));
		 BeginBatchDraw();
		 drawboard();
		 EndBatchDraw();
	 }
	 firstwalk=justreadfile = 0;
	 
	 // 
	 bool chooseonepiece = 0;
	 endgame = 0;
	 while (1) {
	 LOOP1:
		 haltit = 0;
	 m = getmessage(EM_MOUSE);
	 if (m.message == WM_LBUTTONDOWN) {//如果点击鼠标

		 //判断是否点击了菜单按钮
		 if (m.x >= undo.x1 
			 && m.y >= undo.y1 && m.y <= undo.y1 + undo.h) {
			 undoit();
			 goto LOOP1;
		 }
		 else if (m.x >= hint.x1
			 && m.y >= hint.y1 && m.y <= hint.y1 + hint.h) {
			 sidetomove = user;
			 hintit();
			 goto LOOP1;
		 }
		 else if (m.x >= save.x1
			 && m.y >= save.y1 && m.y <= save.y1 + save.h) {
			 saveit();
			 goto LOOP1;
		 }
		 else if (m.x >= exit.x1
			 && m.y >= exit.y1 && m.y <= exit.y1 + exit.h) {
			 homeitf();
		 }

		 //判断是否点击了棋盘内，并进行对应走步
		 for (int i = 1; i <= 7; i++) 
			for(int j=1;j<=7;j++)
			 if (m.x > upperleftX+(i-1)*50 && m.x < upperleftX + i * 50
				 && m.y >upperleftY + (j - 1) * 50 && m.y < upperleftY + j * 50)
				 if (board[i][j] == user){
					 startx = i;
					 starty = j;
					 chooseonepiece = 1;
					}
				 else if (board[i][j] == 0 && chooseonepiece == 1) {	
					 if (legal(user, startx, starty, i, j)== 0) 
						 goto LOOP1;
					 putpiece(user, startx, starty, i, j);
					 roundnum++;
					 memcpy(lastboard[roundnum], board, sizeof(board));
					 memcpy(lastpiecenum[roundnum], piecenum, sizeof(piecenum));
					 int textlx = 300, texth = 190;
					 settextstyle(30, 0, _T("华文行楷"));
					 setfillcolor(WHITE);
					 solidroundrect(textlx - 12, texth - 30, textlx + 130, texth + 60, 10, 10);
					 setfillcolor(TRANSPARENT);
					 outtextxy(textlx, texth, "请稍等~");
					 Sleep(100);
					 walk();
					 roundnum++;
					 memcpy(lastboard[roundnum], board, sizeof(board));
					 memcpy(lastpiecenum[roundnum], piecenum, sizeof(piecenum));
					 if (piecenum[2] + piecenum[1] == 49||piecenum[user]==0
						 ||piecenum[ai]==0) endgame = 1;
					 BeginBatchDraw();
					 drawboard();

					 //
					 if (endgame) {
						 if (piecenum[user] > piecenum[ai])
							 resultout(3);
						 else if (piecenum[user] < piecenum[ai])
							 resultout(4);
						 else if (user == 1) 	 resultout(4);
						 else resultout(3);
						 EndBatchDraw();

						 //
						 while (1) {
							 m = getmessage(EM_MOUSE);
							 if (m.message == WM_LBUTTONDOWN)
								 homeitf();
						 }
					 }
					 EndBatchDraw();
					 goto LOOP1;
				 }
					
	 }
 }
	 //

 }

 //双人对局界面
 void boarditf_human_human() {
	 gamestate = 2;
	 endgame = 0;
	 if (justreadfile) {
		 //如果处于读档状态，跳过初始化
		 justreadfile = 0;
		 goto LOOP2;
	 }
	 //棋盘初始化、绘制游戏界面
	 memset(board, 0, sizeof(board));
	 piecenum[1] = piecenum[2] = 2;
	 board[1][1] = board[7][7] = 1;
	 board[7][1] = board[1][7] = 2;
	 piecenum[1] = piecenum[2] = 2;
	 roundnum = 0;
	 level = 4;
	 sidetomove = 1;

	 LOOP2:
	 BeginBatchDraw();
	 memcpy(lastboard[roundnum], board, sizeof(board));
	 memcpy(lastpiecenum[roundnum], piecenum, sizeof(piecenum));
	 putimage(0, 0, &background2);
	 drawboard();

	 button undo, hint, save, exit;
	 undo.x1 = hint.x1 = save.x1 = exit.x1 = 600;
	 hint.y1 = 145;
	 undo.y1 = hint.y1 - 70;
	 save.y1 = hint.y1 + 70;
	 exit.y1 = save.y1 + 70;
	 strcpy_s(undo.name, "悔 棋");
	 strcpy_s(hint.name, "提 示");
	 strcpy_s(save.name, "存 档");
	 strcpy_s(exit.name, "返 回");

	 drawbutton(undo);
	 drawbutton(hint);
	 drawbutton(save);
	 drawbutton(exit);

	 EndBatchDraw();

	 bool chooseonepiece = 0;
	 while (1) {
	 LOOP1:
		 m = getmessage(EM_MOUSE);
		 if (m.message == WM_LBUTTONDOWN) {//如果点击鼠标

		 //判断是否点击了菜单按钮
			 if (m.x >= undo.x1
				 && m.y >= undo.y1 && m.y <= undo.y1 + undo.h) {
				 undoit();
				 goto LOOP1;
			 }
			 else if (m.x >= hint.x1
				 && m.y >= hint.y1 && m.y <= hint.y1 + hint.h) {
				 hintit();
				 goto LOOP1;
			 }
			 else if (m.x >= save.x1
				 && m.y >= save.y1 && m.y <= save.y1 + save.h) {
				 saveit();
				 goto LOOP1;
				 break;
			 }
			 else if (m.x >= exit.x1
				 && m.y >= exit.y1 && m.y <= exit.y1 + exit.h) {
				 homeitf();
			 }

			 //判断是否点击了棋盘内，并进行对应走步
			 for (int i = 1; i <= 7; i++)
				 for (int j = 1; j <= 7; j++)
					 if (m.x > upperleftX + (i - 1) * 50 && m.x < upperleftX + i * 50
						 && m.y >upperleftY + (j - 1) * 50 && m.y < upperleftY + j * 50)
						 if (board[i][j] == sidetomove) {
							 startx = i;
							 starty = j;
							 chooseonepiece = 1;
						 }
						 else if (board[i][j] == 0 && chooseonepiece == 1) {
							 if (legal(sidetomove, startx, starty, i, j) == 0)
								 goto LOOP1;
							 putpiece(sidetomove, startx, starty, i, j);
							 roundnum++;
							 memcpy(lastboard[roundnum], board, sizeof(board));
							 sidetomove = 3 - sidetomove;
							 if (piecenum[2] + piecenum[1] == 49 || piecenum[1] == 0
								 || piecenum[2] == 0) endgame = 1;
							 BeginBatchDraw();
							 drawboard();
							 if (endgame) {
								 //如果游戏结束，显示游戏结果
								 if (piecenum[1] > piecenum[2])
									 resultout(1);
								 else if (piecenum[1] < piecenum[2])
									 resultout(2);
								 else resultout(2);
								 EndBatchDraw();
								 while (1) {
									 m = getmessage(EM_MOUSE);
									 if (m.message == WM_LBUTTONDOWN)
										 homeitf();
								 }
							 }
							 EndBatchDraw();
							 goto LOOP1;
						 }
		 }
	 }
 }

 //画棋盘
 void drawboard() {
	 setfillstyle(BS_SOLID);
	 int sx = upperleftX, sy = upperleftY, nx = lowerrightX, ny = lowerrightY, i;
	 setfillcolor(BROWN);
	 solidroundrect(sx - 13, sy - 13, nx + 13, ny + 13, 10, 10);
	 setfillcolor(WHITE);
	 setlinecolor(LIGHTGRAY);
	 solidroundrect(sx - 10, sy - 10, nx + 10, ny + 10, 10, 10);
	 drawpiece();
	 for (i = 0; i <= 7; i++) {
		 line(sx, sy + 50 * i, sx + 350, sy + 50 * i);
		 line(sx + 50 * i, sy, sx + 50 * i, sy + 350);
	 }

	 button whitenum, blacknum;
	 whitenum.x1 = blacknum.x1 = -40;
	 blacknum.h = whitenum.h = 80;
	 blacknum.y1 = 75;
	 whitenum.y1 = 400-blacknum.y1-whitenum.h;
	 sprintf_s(blacknum.name, "%d", piecenum[1]);
	 sprintf_s(whitenum.name, "%d", piecenum[2]);
	 setfillcolor(WHITE);
	 settextstyle(50, 0, _T("华文行楷"));
	 solidroundrect(whitenum.x1, whitenum.y1, whitenum.x1 + whitenum.w, whitenum.y1 + whitenum.h, 20, 20);
	 outtextxy(whitenum.x1 + 65, whitenum.y1 + 17, whitenum.name);
	 putimage(whitenum.x1 + 110, whitenum.y1 + 15,&wball);

	 solidroundrect(blacknum.x1, blacknum.y1, blacknum.x1 + blacknum.w, blacknum.y1 + blacknum.h, 20, 20);
	 outtextxy(blacknum.x1 + 65, blacknum.y1 + 17, blacknum.name);
	 putimage(blacknum.x1 + 110, blacknum.y1 + 15, &bball);
	 return;
 }

 //画棋子
 void drawpiece() {
	 int x, y;
	 for (int i = 1; i <= 7; i++)
		 for (int j = 1; j <= 7; j++) {
			 x = upperleftX + (i - 1) * 50 +1;
			 y = upperleftY + (j - 1) * 50 + 2;
			 if (board[i][j] == 1)putimage(x, y, &bball);
			 if (board[i][j] == 2) putimage(x, y, &wball);
			 if (board[i][j] == 0) solidrectangle(x+1, y+1, x + 49, y + 49);
		 }
	 return;
 }
 
 //画菜单按钮
 void drawbutton(button b) {
	 setfillcolor(BROWN);
	 solidroundrect(b.x1-3, b.y1-3, b.x1+b.w+3, b.y1+b.h+3, 20, 20);
	 setfillcolor(WHITE);
	 solidroundrect(b.x1, b.y1, b.x1 + b.w, b.y1 + b.h, 20, 20);
	 settextstyle(30, 0, _T("华文行楷"));
	 outtextxy(b.x1+20,b.y1+8,b.name);
 }

 //悔棋
 void undoit() {
	 int textlx = 240,texth=190;
	 if (roundnum <2) {
		 settextstyle(30, 0, _T("华文行楷"));
		 setfillcolor(WHITE);
		 solidroundrect(textlx - 12, texth - 30, textlx + 230, texth + 60, 10, 10);
		 outtextxy(textlx, texth, "刚开局不可以悔棋");
		 outtextxy(textlx, texth+30, "   (っ °Д °;)っ");
		 while (1) {
			 m = getmessage(EM_MOUSE);
			 if (m.message == WM_LBUTTONDOWN) {
				 BeginBatchDraw();
				 drawboard();
				 EndBatchDraw();
				 break;
			 }
		 }
		 return;
	 }
	 roundnum -= 2;
	 memcpy(board, lastboard[roundnum], sizeof(board));
	 memcpy(piecenum, lastpiecenum[roundnum], sizeof(piecenum));
	 drawboard();
 }

 //提示
 void hintit() {
	 int depth;
	 int thissidetomove = sidetomove;
		 if (piecenum[1] + piecenum[2] <= 10) depth = level - 1;
		 else depth = level;
		 findlegalmove(depth);
		 memcpy(fakeboard[depth], board, sizeof(board));
		 memcpy(fakepiecenum[depth], piecenum, sizeof(piecenum));
		 int bestmove = 1;
		 int val;
		 int alpha = -100, beta = 100;
		 findlegalmove(depth);
		 for (int i = 1; i <= movenum[depth]; i++) {
			 memcpy(fakepiecenum[depth], piecenum, sizeof(piecenum));
			 memcpy(fakeboard[depth], board, sizeof(board));
			 fakeputpiece(depth, i);
			 val = -albt(depth - 1, -beta, -alpha);
			 if (val > alpha) {
				 alpha = val;
				 bestmove = i;
			 }
			 sidetomove = thissidetomove;
		 }
		 int sx = legalmove[depth][bestmove][1], sy = legalmove[depth][bestmove][2],
			 nx = legalmove[depth][bestmove][3], ny = legalmove[depth][bestmove][4];
		 int textlx = 240, texth = 190;
		 char s[100];
		 setfillcolor(WHITE);
		 solidroundrect(textlx - 12, texth - 30, textlx + 230, texth + 60, 10, 10);
		 settextstyle(30, 0, _T("华文行楷"));
		 sprintf_s(s, "提示：(%d,%d) -> (%d,%d)", sy, sx, ny, nx);
		 outtextxy(textlx, texth, s);
		 while (1) {
			 m = getmessage(EM_MOUSE);
			 if (m.message == WM_LBUTTONDOWN) {
				 BeginBatchDraw();
				 drawboard();
				 EndBatchDraw();
				 break;
			 }
		 }
		 return;
 }
 
 //存盘
 void saveit() {
	 if (gamestate == 1) {
		 ofstream fout("boardfile_hb.txt");
		 fout << gamestate << ' ' << roundnum << ' ' << endl;
		 fout << user << ' ' << ai << endl;
		 fout << endl;
		 fout << piecenum[1] << ' ' << piecenum[2] << endl;
		 int u, i, j;
		 for (i = 1; i <= 7; i++) {
			 for (j = 1; j <= 7; j++)
				 fout << board[i][j] << ' ';
			 fout << endl;
		 }
		 fout << endl;
		 for (u = 0; u <= roundnum; u++) {
			 fout << lastpiecenum[u][1] << ' ' << lastpiecenum[u][2] << endl;
			 for (i = 1; i <= 7; i++) {
				 for (j = 1; j <= 7; j++)
					 fout << lastboard[u][i][j] << ' ';
				 fout << endl;
			 }
			 fout << endl;
		 }
	 }
	 else{
		 ofstream fout("boardfile_hh.txt");
		 fout << gamestate << ' ' << roundnum << ' ' << endl;
		 fout << sidetomove << endl;
		 fout << endl;
		 fout << piecenum[1] << ' ' << piecenum[2] << endl;
		 int u, i, j;
		 for (i = 1; i <= 7; i++) {
			 for (j = 1; j <= 7; j++)
				 fout << board[i][j] << ' ';
			 fout << endl;
		 }
		 fout << endl;
		 for (u = 0; u <= roundnum; u++) {
			 fout << lastpiecenum[u][1] << ' ' << lastpiecenum[u][2] << endl;
			 for (i = 1; i <= 7; i++) {
				 for (j = 1; j <= 7; j++)
					 fout << lastboard[u][i][j] << ' ';
				 fout << endl;
			 }
			 fout << endl;
		 }

	 }
	 int textlx = 240, texth = 190;
	 setfillcolor(WHITE);
	 solidroundrect(textlx - 12, texth - 30, textlx + 230, texth + 60, 10, 10);
	 settextstyle(30, 0, _T("华文行楷"));
	 outtextxy(textlx, texth, "存档完毕(^/ω＼^)");
	 while (1) {
		 m = getmessage(EM_MOUSE);
		 if (m.message == WM_LBUTTONDOWN) {
			 BeginBatchDraw();
			 drawboard();
			 EndBatchDraw();
			 break;
		 }
	 }
		 return;
 }

 //读盘
 void readit() {
	 //画按钮＆选择要读取的存档
		 button hb, hh, mainitf;
		 hb.x1 = hh.x1 = mainitf.x1 = 250;
		 hb.y1 = 180;
		 hh.y1 = hb.y1 + 70;
		 mainitf.y1 = hh.y1 + 70;
		 strcpy_s(hb.name, "人 机 存 档");
		 strcpy_s(hh.name, "双 人 存 档");
		 strcpy_s(mainitf.name, "     返  回");

		 BeginBatchDraw();
		 drawbutton(hh);
		 drawbutton(hb);
		 drawbutton(mainitf);
		 EndBatchDraw();

		 bool thisone;
		 while (1) {
			 m = getmessage(EM_MOUSE);
			 if (m.message == WM_LBUTTONDOWN) {
				 if (m.x >= hb.x1 && m.x <= hb.x1 + hb.w
					 && m.y >= hb.y1 && m.y <= hb.y1 + hb.h) {
					 thisone = 1;
					 break;
				 }
				 else if (m.x >= hh.x1 && m.x <= hh.x1 + hh.w
					 && m.y >= hh.y1 && m.y <= hh.y1 + hh.h) {
					 thisone = 0;
					 break;
				 }
				 else if (m.x >= mainitf.x1 && m.x <= mainitf.x1 + mainitf.w
					 && m.y >= mainitf.y1 && m.y <= mainitf.y1 + mainitf.h) {
					 homeitf();
				 }
			 }
		 }
		 if (thisone) {
			 ifstream fin("boardfile_hb.txt");
			 justreadfile = 1;
			 fin >> gamestate >> roundnum;
			 if (gamestate == 1) fin >> user >> ai;
			 else fin >> sidetomove;
			 fin >> piecenum[1] >> piecenum[2];
			 int u, i, j;
			 for (i = 1; i <= 7; i++) {
				 for (j = 1; j <= 7; j++)
					 fin >> board[i][j];
			 }
			 for (u = 0; u <= roundnum; u++) {
				 fin >> lastpiecenum[u][1] >> lastpiecenum[u][2];
				 for (i = 1; i <= 7; i++)
					 for (j = 1; j <= 7; j++)
						 fin >> lastboard[u][i][j];
			 }
		 }
		 else {
			 ifstream fin("boardfile_hh.txt");
			 justreadfile = 1;
			 fin >> gamestate >> roundnum;
			 if (gamestate == 1) fin >> user >> ai;
			 else fin >> sidetomove;
			 fin >> piecenum[1] >> piecenum[2];
			 int u, i, j;
			 for (i = 1; i <= 7; i++) {
				 for (j = 1; j <= 7; j++)
					 fin >> board[i][j];
			 }
			 for (u = 0; u <= roundnum; u++) {
				 fin >> lastpiecenum[u][1] >> lastpiecenum[u][2];
				 for (i = 1; i <= 7; i++)
					 for (j = 1; j <= 7; j++)
						 fin >> lastboard[u][i][j];
			 }
		 }
	 if (gamestate == 1) boarditf_human_ai();
	 else boarditf_human_human();
 }
 
 //对局结束，显示结果
 void resultout(int state) {
	 int textlx = 240, texth = 175;
	 setfillcolor(WHITE);
	 settextstyle(30, 0, _T("华文行楷"));
	 solidroundrect(textlx - 12, texth - 10, textlx + 230, texth + 70, 10, 10);
	 switch (state) {
	 case 1:
		 outtextxy(textlx, texth, "      黑 色 赢 了");
		 outtextxy(textlx, texth + 30, "     (~/ω＼~))");
		 break;
	 case 2:
		 outtextxy(textlx, texth, "      白 色 赢 了");
		 outtextxy(textlx, texth + 30, "     (~/ω＼~))");
		 break;
	 case 3:
		 outtextxy(textlx, texth, "         你 赢 了");
		 outtextxy(textlx, texth + 30, "     (~/ω＼~))");
		 break;
	 case 4:
		 outtextxy(textlx, texth, "        你 输 了");
		 outtextxy(textlx, texth + 30, " (っ °Д °;)っ");
		 break;
	 }
 }

 //以上是人机交互部分
 //以下进入算法部分
 
 //判断玩家输入是否合法
int legal(int player,int sx, int sy, int nx,int ny) {
	if (sx <= 0 || sy <= 0 || sx > 7 || sy > 7) return 0;
	if (nx <= 0 || ny <= 0 || nx > 7 || ny > 7) return 0;
	if (board[sx][sy] != player) return 0;
	if (board[nx][ny] != 0) return 0;
	if (abs(sx - nx) > 2 || abs(sy - ny) > 2) return 0;
	if (sx == nx && sy == ny) return 0;
	if (abs(sx - nx) <= 1 && abs(sy - ny) <= 1) return 1;
	return 2;
}

//落子并同化
void putpiece(int player,int sx, int sy, int nx, int ny) {
	board[nx][ny] = player;
	if (abs(sx - nx) > 1 || abs(sy - ny) > 1)
		board[sx][sy] = 0;
	else piecenum[player]++;
	int player2 = 3 - player;
	int xx, yy;

	//同化
	for (int i = 1; i <= 8; i++) {
		xx = nx + near1[i][0];
		yy = ny + near1[i][1];
		if (xx >= 1 && xx <= 7 && yy >= 0 && yy <= 7)
			if (board[xx][yy] == player2) {
				board[xx][yy] = player;
				piecenum[player2]--;
				piecenum[player]++;
			}
	}
	return;
}

//ai部分（alphabeta剪枝+动态层数）
void walk() {
	StartTime = clock();
	sidetomove = ai;
	if (df) {
		if (piecenum[1] + piecenum[2] >= 45) level = 8;
		else if (piecenum[1] + piecenum[2] >= 42) level = 7;
		else if (piecenum[1] + piecenum[2] >= 37) level = 6;
		else level = 5;
	}
	int depth = level - 1;
	findlegalmove(depth);
	memcpy(fakeboard[depth], board, sizeof(board));
	memcpy(fakepiecenum[depth], piecenum, sizeof(piecenum));
	int bestmove = 1;
	int val;
	int alpha = -100, beta = 100;
	findlegalmove(depth);
	for (int i = 1; i <= movenum[depth]; i++) {
		if (clock() - StartTime > TimeLimit) {
			haltit = 1;
			break;
		}
		memcpy(fakepiecenum[depth], piecenum, sizeof(piecenum));
		memcpy(fakeboard[depth], board, sizeof(board));
		fakeputpiece(depth, i);
		val = -albt(depth - 1, -beta, -alpha);
		if (val > alpha) {
			alpha = val;
			bestmove = i;
		}
		sidetomove = ai;
	}
	if (movenum[depth] == 0) endgame = 1;
	else putpiece(ai, legalmove[depth][bestmove][1], legalmove[depth][bestmove][2],
		legalmove[depth][bestmove][3],legalmove[depth][bestmove][4]);
}

//alphabeta递归函数
int albt(int depth, int alpha, int beta) {
	//如果depth小于0（搜索结束）则返回估值函数
	if (depth < 0)
		return evaluate();
	int val;

	//交换走的一方
	sidetomove = 3 - sidetomove;
	int thisside = sidetomove;

	//如果棋盘满了则判断胜负，返回一个很大或
	if (fakepiecenum[depth + 1][1] + fakepiecenum[depth + 1][2] == 49) {
		if (fakepiecenum[depth + 1][sidetomove] > fakepiecenum[depth + 1][3 - sidetomove])
			return 500;
		else return -500;
	}

	//找出所有合法棋步
	memcpy(fakeboard[depth], fakeboard[depth + 1], sizeof(fakeboard[depth + 1]));
	findlegalmove(depth);

	//如果无路可走
	if (movenum[depth] == 0) {
			//棋子多的一方为胜
			if (fakepiecenum[depth + 1][sidetomove] > fakepiecenum[depth + 1][3 - sidetomove])
				return 500;
			else if (fakepiecenum[depth + 1][sidetomove] < fakepiecenum[depth + 1][3 - sidetomove])
				return -500;
			//如果双方棋子数目相同，白方胜利
			if (sidetomove == 2) return 500;
			else return -500;
		}
	
	//按顺序搜索所有合法棋步，alphabeta剪枝
	for (int i = 1; i <= movenum[depth]; i++) {
		memcpy(fakeboard[depth], fakeboard[depth + 1], sizeof(fakeboard[depth + 1]));
		memcpy(fakepiecenum[depth], fakepiecenum[depth + 1], sizeof(fakepiecenum[depth + 1]));
		fakeputpiece(depth, i);
		val = -albt(depth - 1, -beta, -alpha);
		sidetomove = thisside;
		if (val >= beta) return beta;//alpha-beta剪枝
		if (val > alpha) alpha = val;
	}
	return alpha;
}

//寻找合法走步
void findlegalmove(int depth) {
	int i, j, u, x, y;
	int num = 0;
	for (i = 1; i <= 7; i++)
		for (j = 1; j <= 7; j++)
			if (fakeboard[depth][i][j] == 0) {
				for (u = 1; u <= 8; u++) {
					x = i + near1[u][0];
					y = j + near1[u][1];
					if (y <= 0 || x <= 0 || y > 7 || x > 7) continue;
					if (fakeboard[depth][x][y] == sidetomove) {
						num++;
						legalmove[depth][num][1] = x;//sx
						legalmove[depth][num][2] = y;//sy
						legalmove[depth][num][3] = i;//nx
						legalmove[depth][num][4] = j;//ny
						break;
					}
				}
				for (u = 1; u <= 16; u++) {
					x = i + jump[u][0];
					y = j + jump[u][1];
					if (y <= 0 || x <= 0 || y > 7 || x > 7) continue;
					if (fakeboard[depth][x][y] == sidetomove) {
						num++;
						legalmove[depth][num][1] = x;//sx
						legalmove[depth][num][2] = y;//sy
						legalmove[depth][num][3] = i;//nx
						legalmove[depth][num][4] = j;//ny
					}
				}
			}

	movenum[depth] = num;
	return;
}

//模拟落子并同化
void fakeputpiece(int depth, int u) {
	int sx, sy, nx, ny;
	sx = legalmove[depth][u][1];//sx
	sy = legalmove[depth][u][2];//sy
	nx = legalmove[depth][u][3];//nx
	ny = legalmove[depth][u][4];//ny
	fakeboard[depth][nx][ny] = sidetomove;
	if (abs(sx - nx) > 1 || abs(sy - ny) > 1)
		fakeboard[depth][sx][sy] = 0;
	else fakepiecenum[depth][sidetomove]++;

	int player2 = 3 - sidetomove;
	int xx, yy;

	//同化
	for (int i = 1; i <= 8; i++) {
		xx = nx + near1[i][0];
		yy = ny + near1[i][1];
		if (xx <= 0 || xx > 7 || yy <= 0 || yy > 7)	continue;
		if (fakeboard[depth][xx][yy] == player2) {
			fakeboard[depth][xx][yy] = sidetomove;
			fakepiecenum[depth][player2]--;
			fakepiecenum[depth][sidetomove]++;
		}
	}

	return;
}

//估值函数（贪心）
int evaluate() {
	if (fakepiecenum[0][1] + fakepiecenum[0][2] == 49) {
		if (fakepiecenum[0][sidetomove] > fakepiecenum[0][3 - sidetomove])
			return -500;
		else return 500;
	}
	return fakepiecenum[0][3 - sidetomove] - fakepiecenum[0][sidetomove];
}

//update 1:I should have use a const int sz = sizeof(board), which might save me much time.