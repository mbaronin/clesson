#include <stdio.h>

#define num 10

int main()
{
	int i;
	char ch[num] = "abcdefgh";
	
	printf("ch[]Ϊ:%s\n",ch) ; 
	
	printf("ch[]�ĵ�ַΪ:0x%x\n",ch) ; 
	 
	 for (i=0;i<num;i++){
	 	printf(" ch[%d]�ĵ�ַΪ:%x\n",i+1,&ch[i]);
	 }
	 
	 int someOne = 2;

int &refa=someOne;

printf("%p\n",refa);//��ӡ ��λ16���Ƶ��� 16fa32

printf("%p\n",&refa);//��ӡ ��λ16���Ƶ��� 16fa32

 
	return 0;
 } 
