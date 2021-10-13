#pragma once
#include"Wall.h"
#include"Food.h"

class Snake
{
public:
	

	Snake(Wall& , Food& );//构造函数

	enum  {UP = 'w', DOWN = 's', LEFT = 'a', RIGHT = 'd'};
	

	struct Position
	{
		int x;int y;//数据域
		Position* next;//指针域
	};
	//初始化结点
	void InitSnake();
	//销毁结点
	void destroyPoint();
	//添加结点
	void addPoint(int x, int y);
	//移动时删除结点
	void delPoint();
	//移动操作		//返回值代表是否成功
	bool move(char key);
	Position* pHead;

	Wall& wall;

	Food& food;
};

