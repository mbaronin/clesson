#include<stdio.h>

int main()
{
	int y,i;
	int m[12];
	
	printf("���������:");
	scanf("%d",&y);
	
	for( i=0;i<sizeof(m)/sizeof(m[0]);i++)	0==i%2 ? m[i]=30 :m[i]=31;
	
	if(0==y%400  ||  (0==y%4 && 0!=100))  
		{m[1]=29;printf("������\n");}
	else {m[1]=28;printf("��������\n");} 
	
	for( i=0;i<sizeof(m)/sizeof(m[0]);i++)  printf("%d�·�����%d\n",i+1,m[i]);
	
	return 0;
}
