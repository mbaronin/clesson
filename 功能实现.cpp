#include<iostream>
#include"set.h"

using namespace std;

static int step = 0;
void menu()
{
	cout << "		******************************" << endl;
	cout << "		*********���׾�����***********" << endl;
	cout << "		******************************" << endl;
	cout << "			������ż���...		" << endl;
	cout << "			1.����Ϸ			" << endl;
	cout << "			0.��  ��			" << endl;
	cout << "		******************************" << endl;
	cout << "		******************************" << endl;
}

void initChess(char chess[ROW][COL],int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
	}
}

void printBoard(char chess[ROW][COL], int row, int col)
{
	system("cls");cout << "\n\n\n\n\n";
	int i, j;
	for (i = 0; i < row; i++)
	{
		cout << "			";
		for (j = 0; j < col; j++)
		{
			if(j != col-1)  cout << ' ' << chess[i][j] << ' ' << '|' ;
			else cout << ' ' << chess[i][j] << ' ' << endl;
		}
		if (i != row - 1) 
		{
			cout << "			";
			for (j = 0; j < col; j++) 
			{
			if (j != col - 1)  cout << "---+";
			else cout << "---" << endl;
			}
		}
	}
}

void playerPutChess(char chess[ROW][COL], int row, int col)
{
	while (1) {
		cout << "\n����������λ��1-9(�I1 �K9)";
		int position;
		cin >> position;
		cin.clear();  // ��������־
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // ����������ĵ�ǰ��
		if (position > 9 || position < 1) {
			cout << "����������" << endl;
			continue;
		}
		position = position - 1;// ��Χ0-8
		if (chess[position / col][position % row] == ' ') //����Ƿ��п�λ
		{
			chess[position / col][position % row] = '*';
			step++;
			break;
		}
		else cout << "�������� ����������" << endl;
	}
}

void computerPutChess(char chess[ROW][COL], int row, int col)
{
	int position;
	srand((unsigned int)time(NULL));
	
	while (step < 9) {
		position = rand() % 9;
		if (chess[position / col][position % row] == ' ') //����Ƿ��п�λ
		{
			chess[position / col][position % row] = '#';
			step++;
			break;
		}
		else cout << "������ѭ��" << endl;
	}
	
}

char winTesting(char chess[ROW][COL], int row, int col) 
{
	int i;
	//�м��
	for (i = 0; i < row; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][1] == chess[i][2] && chess[i][1] != ' ') 
		{
			return chess[i][1];
		}
	}
	//�м��
	for (i = 0; i < col; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[1][i] == chess[2][i] && chess[1][i] != ' ') 
		{
			return chess[0][i];
		}
	}
	//б����
	if (	chess[0][0] == chess[1][1] && chess[1][1] == chess[2][2]  || 
			chess[2][0] == chess[1][1] && chess[1][1] == chess[0][2]		) 
	{
		return chess[1][1];
	}
	if (step == 9) return 'D';//������9 ����ƽ��
	
	return 'c';
}



void game()
{
	char over;
	char chess[ROW][COL];
	initChess(chess, ROW, COL);//	��ʼ������
	printBoard(chess, ROW, COL);	//	��ӡ����
	while (1) {

		playerPutChess(chess, ROW, COL);//	�������
		printBoard(chess, ROW, COL);//	��ӡ����
		over = winTesting(chess, ROW, COL);//	ʤ�����

		if (over == '*') { cout << "\n\n\n��Ӯ��!!!\n\n\n" << endl; break; }
		else if (over == '#')	{ cout << "\n\n\n������\n\n\n" << endl; break; }
		else if (over == 'D')	{ cout << "\n\n\nƽ��\n\n\n" << endl; break; }

		computerPutChess(chess, ROW, COL);//	��������
		printBoard(chess, ROW, COL);//	��ӡ����
		over = winTesting(chess, ROW, COL);//	ʤ�����

		if (over == '*')		{ cout << "\n\n\n��Ӯ��!!!\n\n\n" << endl; break; }
		else if (over == '#')	{ cout << "\n\n\n������\n\n\n" << endl; break;}
		else if (over == 'D')	{ cout << "\n\n\nƽ��\n\n\n" << endl; break;}
		
	}
	step = 0;
	system("pause");

}