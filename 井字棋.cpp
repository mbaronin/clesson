#include<iostream>
#include"set.h"


using namespace std;






int main()
{
	//主菜单
	int input =1;
	do{
		system("cls"); cout << "\n\n\n\n\n";
		menu();
		cin >> input;
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		case 2:
			system("cls"); cout << "\n\n\n\n\n";
			cout << "\t\t\t企划~原作~脚本~等 : GuoYuXin" << endl;
			cout << "\t\t\tproducer : GuoYuXin" << endl;
			cout << "\t\t\tguidance : ZhangPengWei\n\n" << endl;
			system("pause");
			break;
		default:;
		}
	} while (input);
	

	return 0;
}