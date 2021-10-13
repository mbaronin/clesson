#include "Wall.h"
#include<iostream>

using namespace std;

//初始化地图
void Wall::initWall()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)	gameArray[i][j] = '#';
			else													gameArray[i][j] = ' ';
		}
	}
}

//打印地图
void Wall::drawWall()
{
	system("cls");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << gameArray[i][j] << gameArray[i][j];
			//cout << map[i][j];
			if (j == COL - 1) cout << endl;//打印换行
		}
	}
}

//在这个位置添加元素
void Wall::setWall(int x, int y, char c) {
	gameArray[x][y] = c;
}

//根据索引来获取当前位置的符号
char Wall::getWall(int x, int y) {
	return gameArray[x][y];
}