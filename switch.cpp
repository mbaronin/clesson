#include<stdio.h>

int main()
{
	char ch;
	
	printf("请输入评级。\n");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A' :printf("你的成绩为90分以上。\n");break;
		case 'B' :printf("你的成绩为80-90分。\n"); break;
		case 'C' :printf("你的成绩为70-80分。\n"); break;
		case 'D' :printf("你的成绩为60-70分。\n");break;
		case 'E' :printf("你的成绩为60分以XIA。\n");break;
		default: printf("请输入有效的成绩评级。\n");
	}
	
	return 0;
}
