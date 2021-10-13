#include<iostream>
#include<Windows.h>
#include<conio.h>
#include"Wall.h"
#include"Snake.h"
#include"Food.h"

using namespace std;



void gotoxy(int x, int y, HANDLE hOut1 = GetStdHandle(STD_OUTPUT_HANDLE))
{
	COORD pos;
	pos.X = x; //������
	pos.Y = y; //������
	SetConsoleCursorPosition(hOut1, pos);
}



void game(int hard)
{
	srand((unsigned int)time(NULL));
	
	Wall wall;
	wall.initWall();//��ʼ����ͼ
	wall.drawWall();//��ӡ��ͼ

	Food food(wall);
	food.setFood();//����ʳ��

	Snake snake(wall, food);
	snake.InitSnake();//��ʼ��6����
	
	gotoxy( 0, wall.COL);

	bool isDead = false;
	char prekey = NULL;
	while (!isDead) {
		char key = _getch();
		while (_kbhit()) {//��տ���̨�ļ��̻�����//ȡ���һλ
			key = _getch();
		}
		//�����һ�������� �򲻿�ʼѭ��
		if (prekey == NULL && key == snake.LEFT) continue;
			
		do {
			//���������� ��������
			if (key == snake.UP || key == snake.DOWN ||
				key == snake.LEFT || key == snake.RIGHT) 
			{
				//�������Ƿ�ֹ��������
				if ((key == snake.LEFT && prekey == snake.RIGHT) ||
					(key == snake.RIGHT && prekey == snake.LEFT) ||
					(key == snake.UP && prekey == snake.DOWN) ||
					(key == snake.DOWN && prekey == snake.UP))       
					key = prekey;//�������һ�������෴ ���ϴ���
				else prekey = key;//��¼��һ�ε�����,�����ؼ�,6�п��Ծ������һ��

			}
			else {
				key = prekey;//���Ϲ����һ���ַ� ���ϴ���
			}

			if (snake.move(key)) 		//�ƶ�
			{
				Sleep(10*(100-hard));		//����1��
			}
			else {
				isDead = true;			 //����
				break;
			}

		} while (!_kbhit());//��û�м��������ʱ�򷵻�0 
							//��������ִ��һ��
							//����������
	}
	gotoxy(wall.COL-8, wall.COL/2);
	cout << "GAME OVER" << endl;
	gotoxy(wall.COL - 8, wall.COL / 2 + 1);
	system("pause");
}
