#include "Wall.h"
#include<iostream>

using namespace std;

//��ʼ����ͼ
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

//��ӡ��ͼ
void Wall::drawWall()
{
	system("cls");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << gameArray[i][j] << gameArray[i][j];
			//cout << map[i][j];
			if (j == COL - 1) cout << endl;//��ӡ����
		}
	}
}

//�����λ�����Ԫ��
void Wall::setWall(int x, int y, char c) {
	gameArray[x][y] = c;
}

//������������ȡ��ǰλ�õķ���
char Wall::getWall(int x, int y) {
	return gameArray[x][y];
}