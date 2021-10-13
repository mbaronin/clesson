#pragma once
#include"Wall.h"
#include"Food.h"

class Snake
{
public:
	

	Snake(Wall& , Food& );//���캯��

	enum  {UP = 'w', DOWN = 's', LEFT = 'a', RIGHT = 'd'};
	

	struct Position
	{
		int x;int y;//������
		Position* next;//ָ����
	};
	//��ʼ�����
	void InitSnake();
	//���ٽ��
	void destroyPoint();
	//��ӽ��
	void addPoint(int x, int y);
	//�ƶ�ʱɾ�����
	void delPoint();
	//�ƶ�����		//����ֵ�����Ƿ�ɹ�
	bool move(char key);
	Position* pHead;

	Wall& wall;

	Food& food;
};

