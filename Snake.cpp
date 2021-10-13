#include "Snake.h"
#include"Wall.h"
#include<iostream>
#include<Windows.h>

using namespace std;

void gotoxy1(int x, int y, HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE))
{
	COORD pos;
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut1, pos);
}




//将Snake 链接到 Wall 和 Food    可以在Snake内调用wall和food的函数 成员
Snake::Snake(Wall& tempWall, Food& tempFood) : wall(tempWall), food(tempFood)
{
	pHead = nullptr; //蛇头指针
	//isRool = false;//循环的标识 false
}



//销毁结点
void Snake::destroyPoint() {
	Position* p = pHead;
	while (pHead != NULL) {
		p = pHead->next;
		delete pHead;
		pHead = p;
	}
}

//添加结点
void Snake::addPoint(int x, int y) {
	//创建新结点
	Position* newposition = new Position;
	newposition->x = x;
	newposition->y = y;
	newposition->next = nullptr;

	

	if (pHead != nullptr) {
		gotoxy1(pHead->y * 2, pHead->x);
		cout << "[]";
		newposition->next = pHead;
	}
		
	pHead = newposition;

	wall.setWall(pHead->x, pHead->y, '1');
	gotoxy1(pHead->y * 2, pHead->x);
	cout << "88";
	


}

//初始化结点
void Snake::InitSnake() {
	destroyPoint();
	addPoint(9, 3);
	addPoint(9, 4);
	addPoint(9, 5);
	addPoint(9, 6);
	addPoint(9, 7);
	addPoint(9, 8);

}

//移动时删除  tail结点
void Snake::delPoint() {

	//遍历链表 找到链表尾tail和倒数第二节
	Position* current = pHead->next;
	Position* previous = pHead;
	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}

	//链表尾 位置打印空格
	wall.setWall(current->x, current->y, ' ');
	gotoxy1(current->y * 2, current->x);
	cout << "  ";

	//删除链表尾
	delete current;
	current = nullptr;

	//倒数第二节next指向空
	previous->next = nullptr;

}
//移动操作		//返回值代表是否成功

bool Snake::move(char key) {

	

	int x = pHead->x;
	int y = pHead->y;

	switch (key)
	{
	case UP:	x--;	break;
	case DOWN:	x++;	break;
	case LEFT:	y--;	break;
	case RIGHT:	y++;	break;
	default:			break;
	}
	

	//遍历链表 找到链表尾tail和倒数第二节
	Position* current = pHead->next;
	Position* previous = pHead;
	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}//遍历完成后 current 即 tail


	//首尾相接循环  防止死亡
	if (current->x == x && current->y == y) {}
	//死亡位置
	else if (wall.getWall(x, y) == '#' || wall.getWall(x, y) == '1')
	{
		addPoint(x, y);
		delPoint();
						gotoxy1(0, wall.COL);
		cout << "GAME OVER" << endl; 
		return false;
	}

	if (wall.getWall(x, y) == '2')
	{
		addPoint(x, y);
		
		food.setFood();
						gotoxy1(0, wall.COL);
	}
	else {
		addPoint(x, y);
		delPoint();
		gotoxy1(pHead->y * 2, pHead->x);
		cout << "88";
						gotoxy1(0, wall.COL);
	}
	
	
	return true;//返回是否可以移动
}





