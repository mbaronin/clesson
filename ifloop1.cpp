#include<stdio.h>


int main()
{
	
	int i;
	
	printf("���������(0-100):");
	scanf("%d",&i);
	
	if (i > 90)
	{
		printf("����Ϊa��\n");
	} else if(i >=80 && i <= 90) {
		printf("����Ϊb��\n");
	} else if(i>=70 && i < 80){
		printf("����Ϊc��\n");
	}else{
		printf("����Ϊd��\n");
	}
		
	return 0;
}
