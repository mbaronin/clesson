#include<iostream>
#include"set.h"

using namespace std;

static int step = 0;
void menu()
{
	cout << "		******************************" << endl;
	cout << "		*********离谱井字棋***********" << endl;
	cout << "		******************************" << endl;
	cout << "			输入序号继续...		" << endl;
	cout << "			1.新游戏			" << endl;
	cout << "			0.退  出			" << endl;
	cout << "		******************************" << endl;
	cout << "		******************************" << endl;
}

void initChess(char chess[ROW][COL],int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
	}
}

void printBoard(char chess[ROW][COL], int row, int col)
{
	system("cls");cout << "\n\n\n\n\n";
	int i, j;
	for (i = 0; i < row; i++)
	{
		cout << "			";
		for (j = 0; j < col; j++)
		{
			if(j != col-1)  cout << ' ' << chess[i][j] << ' ' << '|' ;
			else cout << ' ' << chess[i][j] << ' ' << endl;
		}
		if (i != row - 1) 
		{
			cout << "			";
			for (j = 0; j < col; j++) 
			{
			if (j != col - 1)  cout << "---+";
			else cout << "---" << endl;
			}
		}
	}
}

void playerPutChess(char chess[ROW][COL], int row, int col)
{
	while (1) {
		cout << "\n请输入落子位置1-9(↖1 ↘9)";
		int position;
		cin >> position;
		cin.clear();  // 清除错误标志
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // 清除缓冲区的当前行
		if (position > 9 || position < 1) {
			cout << "请重新输入" << endl;
			continue;
		}
		position = position - 1;// 范围0-8
		if (chess[position / col][position % row] == ' ') //检测是否有空位
		{
			chess[position / col][position % row] = '*';
			step++;
			break;
		}
		else cout << "已有落子 请重新输入" << endl;
	}
}

void computerPutChess(char chess[ROW][COL], int row, int col)
{
	int position;
	srand((unsigned int)time(NULL));
	
	while (step < 9) {
		position = rand() % 9;
		if (chess[position / col][position % row] == ' ') //检测是否有空位
		{
			chess[position / col][position % row] = '#';
			step++;
			break;
		}
		else cout << "电脑死循环" << endl;
	}
	
}

char winTesting(char chess[ROW][COL], int row, int col) 
{
	int i;
	//行检测
	for (i = 0; i < row; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2] && chess[i][1] != ' ') 
		{
			return chess[i][1];
		}
	}
	//列检测
	for (i = 0; i < col; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i] && chess[1][i] != ' ') 
		{
			return chess[0][i];
		}
	}
	//斜向检测
	if (	chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2]  || 
			chess[2][0] == chess[1][1] && chess[1][1] == chess[0][2]		) 
	{
		return chess[1][1];
	}
	if (step == 9) return 'D';//步数到9 返回平局
	
	return 'c';
}



void game()
{
	char over;
	char chess[ROW][COL];
	initChess(chess, ROW, COL);//	初始化棋子
	printBoard(chess, ROW, COL);	//	打印棋盘
	while (1) {

		playerPutChess(chess, ROW, COL);//	玩家落子
		printBoard(chess, ROW, COL);//	打印棋盘
		over = winTesting(chess, ROW, COL);//	胜利检测

		if (over == '*') { cout << "\n\n\n你赢了!!!\n\n\n" << endl; break; }
		else if (over == '#')	{ cout << "\n\n\n你可真菜\n\n\n" << endl; break; }
		else if (over == 'D')	{ cout << "\n\n\n平局\n\n\n" << endl; break; }

		computerPutChess(chess, ROW, COL);//	电脑落子
		printBoard(chess, ROW, COL);//	打印棋盘
		over = winTesting(chess, ROW, COL);//	胜利检测

		if (over == '*')		{ cout << "\n\n\n你赢了!!!\n\n\n" << endl; break; }
		else if (over == '#')	{ cout << "\n\n\n你可真菜\n\n\n" << endl; break;}
		else if (over == 'D')	{ cout << "\n\n\n平局\n\n\n" << endl; break;}
		
	}
	step = 0;
	system("pause");

}