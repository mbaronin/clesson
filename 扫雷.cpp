#include<iostream>
#include<time.h>

using namespace std;

#define ROW 30
#define COL 60

//打印数组
void printArray(char array[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j];
			if (j == col - 1) cout << endl;
		}
	}
}
//生成地雷
void addmine(char array[ROW][COL], int row, int col,int boomnum = 200) {
	for (int i = 0; i < boomnum; i++) {
		int x = rand() % ROW;
		int y = rand() % COL;
		if (array[x][y] != '@') array[x][y] = '@';
		else i--;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int num = 0;
			
			if (array[i][j] == '@') continue;

			if (i > 0 && j > 0)		if (array[i - 1][j - 1] == '@') num++;
			if (i > 0)				if (array[i - 1][j]		== '@') num++;
			if (i > 0 && j < col)	if (array[i - 1][j + 1] == '@') num++;
			if (j > 0)				if (array[i]	[j - 1]	== '@') num++;
			if (j < col)			if (array[i]	[j + 1]	== '@') num++;
			if (i < row && j > 0)	if (array[i + 1][j - 1] == '@') num++;
			if (i < row)			if (array[i + 1][j]		== '@') num++;
			if (i < row && j < col)	if (array[i + 1][j + 1] == '@') num++;
			
			 array[i][j] = '0' + num;
			 if (array[i][j] == '0') array[i][j] = ' ';
		}
	}
}


int main()
{
	char array[ROW][COL] = { 0 };
	srand((unsigned int)time(NULL));
	
	addmine(array, ROW, COL);//生成地雷
	printArray(array, ROW, COL);//打印数组

	return 0;
}