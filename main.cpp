#include<iostream>

using namespace std;

void game(int);

int main()
{
	
	int input = 1;
	int hard = 80;//�Ѷ�����


	do {
		system("cls"); cout << "\n\n\n\n\n";
		//void menu()
		{
			cout << "		******************************" << endl;
			cout << "		*******����̰����v1.0*********" << endl;
			cout << "		******************************" << endl;
			cout << "			������ż���...		" << endl;
			cout << "			1.����Ϸ			" << endl;
			cout << "			2.�����Ѷ�			" << endl;
			cout << "			3.������			" << endl;
			cout << "			0.��  ��			" << endl;
			cout << "		******************************" << endl;
			cout << "		******************************" << endl;
		}
		cin >> input;
		switch (input) {
		case 1:
			game(hard);
			break;
		case 2:
			cout << "ѡ���Ѷ�:1-99" << endl;
			cin >> hard;
			if (hard > 99 || hard < 1) {
				hard = 80;
				cout << "�������!" << endl; system("pause");
				break;
			}
			else {
				cout << "�������" << endl; system("pause");
				break;
			}
			
		case 0:
			break;
		case 3:
			system("cls"); cout << "\n\n\n\n\n";
			cout << "\t\t\t��~ԭ��~�ű�~�� : GuoYuXin" << endl;
			cout << "\t\t\tproducer : CSDN����������د���ѡ�" << endl;
			cout << "\t\t\tguidance : ZhangPengWei\n\n" << endl;
			system("pause");
			break;
		default:;
		}
	} while (input);



	return 0;
}



