#include<iostream>

using namespace std;

void game(int);

int main()
{
	
	int input = 1;
	int hard = 80;//难度设置


	do {
		system("cls"); cout << "\n\n\n\n\n";
		//void menu()
		{
			cout << "		******************************" << endl;
			cout << "		*******离谱贪吃蛇v1.0*********" << endl;
			cout << "		******************************" << endl;
			cout << "			输入序号继续...		" << endl;
			cout << "			1.新游戏			" << endl;
			cout << "			2.设置难度			" << endl;
			cout << "			3.制作人			" << endl;
			cout << "			0.退  出			" << endl;
			cout << "		******************************" << endl;
			cout << "		******************************" << endl;
		}
		cin >> input;
		switch (input) {
		case 1:
			game(hard);
			break;
		case 2:
			cout << "选择难度:1-99" << endl;
			cin >> hard;
			if (hard > 99 || hard < 1) {
				hard = 80;
				cout << "输入错误!" << endl; system("pause");
				break;
			}
			else {
				cout << "设置完成" << endl; system("pause");
				break;
			}
			
		case 0:
			break;
		case 3:
			system("cls"); cout << "\n\n\n\n\n";
			cout << "\t\t\t企划~原作~脚本~等 : GuoYuXin" << endl;
			cout << "\t\t\tproducer : CSDN博主「阳光丿洒脱」" << endl;
			cout << "\t\t\tguidance : ZhangPengWei\n\n" << endl;
			system("pause");
			break;
		default:;
		}
	} while (input);



	return 0;
}



