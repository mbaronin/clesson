#include<stdio.h>

int main()
{
	char ch;
	
	printf("������������\n");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A' :printf("��ĳɼ�Ϊ90�����ϡ�\n");break;
		case 'B' :printf("��ĳɼ�Ϊ80-90�֡�\n"); break;
		case 'C' :printf("��ĳɼ�Ϊ70-80�֡�\n"); break;
		case 'D' :printf("��ĳɼ�Ϊ60-70�֡�\n");break;
		case 'E' :printf("��ĳɼ�Ϊ60����XIA��\n");break;
		default: printf("��������Ч�ĳɼ�������\n");
	}
	
	return 0;
}
