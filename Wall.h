#pragma once

//#include<iostream>


class Wall
{
public:

	enum {
		ROW = 35,
		COL = 35
	};

	//��ʼ��ǽ��
	void initWall();

	//����ǽ��
	void drawWall();

	//�������������� ��ά�����������	//�����ߵĲ��ֵ�ʱ�������ʳ��Ҫ��
	void setWall(int x, int y, char c);

	//������������ȡ��ǰλ�õķ���
	char getWall(int x, int y);

private:
	char gameArray[ROW][COL];
};

