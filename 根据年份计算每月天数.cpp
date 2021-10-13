#include<stdio.h>

int main()
{
	int y,i;
	int m[12];
	
	printf("请输入年份:");
	scanf("%d",&y);
	
	for( i=0;i<sizeof(m)/sizeof(m[0]);i++)	0==i%2 ? m[i]=30 :m[i]=31;
	
	if(0==y%400  ||  (0==y%4 && 0!=100))  
		{m[1]=29;printf("是闰年\n");}
	else {m[1]=28;printf("不是闰年\n");} 
	
	for( i=0;i<sizeof(m)/sizeof(m[0]);i++)  printf("%d月份天数%d\n",i+1,m[i]);
	
	return 0;
}
