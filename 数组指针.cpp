#include <stdio.h>

#define num 10

int main()
{
	int i;
	char ch[num] = "abcdefgh";
	
	printf("ch[]为:%s\n",ch) ; 
	
	printf("ch[]的地址为:0x%x\n",ch) ; 
	 
	 for (i=0;i<num;i++){
	 	printf(" ch[%d]的地址为:%x\n",i+1,&ch[i]);
	 }
	 
	 int someOne = 2;

int &refa=someOne;

printf("%p\n",refa);//打印 六位16进制的数 16fa32

printf("%p\n",&refa);//打印 六位16进制的数 16fa32

 
	return 0;
 } 
