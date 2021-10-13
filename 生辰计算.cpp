#include<stdio.h>

int main()
{
	int yb,mb,db,y,m,b,count;
	int yn=2021,mn=8,dn=3;
	int b[12];
	
	printf("请输入生日(1997-03-28):");
	scanf("%d-%d-%d", &yb, &mb, &db);

    for (y=yb;y<=yn,y++){
    	0==y%400  ||  (0==y%4 && 0!=100) ? b[1]=29 : b[1]= 28;
	}
    //太难了不做了!! 
	/*
	for (i=0; putchar() !='\n';i++)
	{
		
		scanf("%c",&b[i]);
	}
	printf("%d",b);
	*/
	
	return 0;
}
