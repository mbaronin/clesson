#include<stdio.h>

int main()
{
	float i,j,result;
	char ch;
	
	printf("计算器,请输入式子:");
	
	scanf("%f%c%f",&i,&ch,&j);
	
	if (ch == '+'){    		result=i+j;
	}else if (ch=='-'){		result=i-j;
	}else if (ch=='*'){		result=i*j;
	}else if (ch=='/'){
		if(0==j){			printf("除数不能为零");
		}else 				result=i/j;
	}else 					printf("请输入有效计算符"); 
	
	
	printf("%.2f",result);
	
	return 0;
 } 
