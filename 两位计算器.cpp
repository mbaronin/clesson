#include<stdio.h>

int main()
{
	float i,j,result;
	char ch;
	
	printf("������,������ʽ��:");
	
	scanf("%f%c%f",&i,&ch,&j);
	
	if (ch == '+'){    		result=i+j;
	}else if (ch=='-'){		result=i-j;
	}else if (ch=='*'){		result=i*j;
	}else if (ch=='/'){
		if(0==j){			printf("��������Ϊ��");
		}else 				result=i/j;
	}else 					printf("��������Ч�����"); 
	
	
	printf("%.2f",result);
	
	return 0;
 } 
