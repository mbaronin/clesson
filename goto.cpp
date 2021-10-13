#include<stdio.h>

int main(){
	int i = 5;
	
	while(i++)
	{
		if(i>10) goto A;
	}
	
A:	printf("跳转到这里输出%d\n",i);
}
