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
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut1, pos);
}



void game(int hard)
{
	srand((unsigned int)time(NULL));
	
	Wall wall;
	wall.initWall();//初始化地图
	wall.drawWall();//打印地图

	Food food(wall);
	food.setFood();//放置食物

	Snake snake(wall, food);
	snake.InitSnake();//初始化6节蛇
	
	gotoxy( 0, wall.COL);

	bool isDead = false;
	char prekey = NULL;
	while (!isDead) {
		char key = _getch();
		while (_kbhit()) {//清空控制台的键盘缓冲区//取最后一位
			key = _getch();
		}
		//如果第一次输入左 则不开始循环
		if (prekey == NULL && key == snake.LEFT) continue;
			
		do {
			//如果输入的是 上下左右
			if (key == snake.UP || key == snake.DOWN ||
				key == snake.LEFT || key == snake.RIGHT) 
			{
				//这六行是防止反向输入
				if ((key == snake.LEFT && prekey == snake.RIGHT) ||
					(key == snake.RIGHT && prekey == snake.LEFT) ||
					(key == snake.UP && prekey == snake.DOWN) ||
					(key == snake.DOWN && prekey == snake.UP))       
					key = prekey;//如果和上一次输入相反 则按上次来
				else prekey = key;//记录上一次的输入,就这句关键,6行可以精简成这一句

			}
			else {
				key = prekey;//如果瞎输了一个字符 则按上次来
			}

			if (snake.move(key)) 		//移动
			{
				Sleep(10*(100-hard));		//挂起1秒
			}
			else {
				isDead = true;			 //大退
				break;
			}

		} while (!_kbhit());//当没有键盘输入的时候返回0 
							//无输入再执行一次
							//有输入跳出
	}
	gotoxy(wall.COL-8, wall.COL/2);
	cout << "GAME OVER" << endl;
	gotoxy(wall.COL - 8, wall.COL / 2 + 1);
	system("pause");
}
