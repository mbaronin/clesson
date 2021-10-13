#include "Snake.h"
#include"Wall.h"
#include<iostream>
#include<Windows.h>

using namespace std;

void gotoxy1(int x, int y, HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE))
{
	COORD pos;
	pos.X = x; //������
	pos.Y = y; //������
	SetConsoleCursorPosition(hOut1, pos);
}




//��Snake ���ӵ� Wall �� Food    ������Snake�ڵ���wall��food�ĺ��� ��Ա
Snake::Snake(Wall& tempWall, Food& tempFood) : wall(tempWall), food(tempFood)
{
	pHead = nullptr; //��ͷָ��
	//isRool = false;//ѭ���ı�ʶ false
}



//���ٽ��
void Snake::destroyPoint() {
	Position* p = pHead;
	while (pHead != NULL) {
		p = pHead->next;
		delete pHead;
		pHead = p;
	}
}

//��ӽ��
void Snake::addPoint(int x, int y) {
	//�����½��
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

//��ʼ�����
void Snake::InitSnake() {
	destroyPoint();
	addPoint(9, 3);
	addPoint(9, 4);
	addPoint(9, 5);
	addPoint(9, 6);
	addPoint(9, 7);
	addPoint(9, 8);

}

//�ƶ�ʱɾ��  tail���
void Snake::delPoint() {

	//�������� �ҵ�����βtail�͵����ڶ���
	Position* current = pHead->next;
	Position* previous = pHead;
	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}

	//����β λ�ô�ӡ�ո�
	wall.setWall(current->x, current->y, ' ');
	gotoxy1(current->y * 2, current->x);
	cout << "  ";

	//ɾ������β
	delete current;
	current = nullptr;

	//�����ڶ���nextָ���
	previous->next = nullptr;

}
//�ƶ�����		//����ֵ�����Ƿ�ɹ�

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
	

	//�������� �ҵ�����βtail�͵����ڶ���
	Position* current = pHead->next;
	Position* previous = pHead;
	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}//������ɺ� current �� tail


	//��β���ѭ��  ��ֹ����
	if (current->x == x && current->y == y) {}
	//����λ��
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
	
	
	return true;//�����Ƿ�����ƶ�
}





