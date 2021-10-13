#include<stdio.h>


int main()
{
	
	int i;
	
	printf("请输入分数(0-100):");
	scanf("%d",&i);
	
	if (i > 90)
	{
		printf("评级为a。\n");
	} else if(i >=80 && i <= 90) {
		printf("评级为b。\n");
	} else if(i>=70 && i < 80){
		printf("评级为c。\n");
	}else{
		printf("评级为d。\n");
	}
		
	return 0;
}
