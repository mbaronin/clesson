#include "Food.h"
#include<Windows.h>

void gotoxy2( int x, int y, HANDLE hOut2= GetStdHandle(STD_OUTPUT_HANDLE))
{
	COORD pos;
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(hOut2, pos);
}

Food::Food(Wall& tempwall):wall(tempwall){}

void Food::setFood()
{
	while (1) {
		FoodX = rand() % (Wall::ROW - 2) + 1;
		FoodY = rand() % (Wall::COL - 2) + 1;
		if (wall.getWall(FoodX, FoodY) == ' ') {

			wall.setWall(FoodX, FoodY, '2');

			gotoxy2(FoodY * 2, FoodX); cout << "00";  //在是空格的位置生成00
			
			break;
		}

	}
	
	
	


}
