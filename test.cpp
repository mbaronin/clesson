#include<stdio.h>

int main(){
	
	
	printf("请输入一段话:");
	int ch;
	
	while(    (  ch=getchar()  )    != '\n'    )
	{
		putchar(ch);
	}

	printf("\n结束");
	
	return 0;
}

