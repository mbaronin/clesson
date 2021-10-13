#include <stdio.h>
#include <string.h>

int main()
{
	struct Bitdomain
	{
		int data;
		unsigned int a:1;
		unsigned int b:2;
		unsigned int c:3;
	};
	
	struct Bitdomain bit;
	
	bit.data = 299;
	printf("bit.data = 299  %u\n",bit.data);
	int i;
	
	printf("\n1bit a\nbit.a = x  a\n");
	for(i=0;i<6;i++)
	{
		bit.a = i;
		printf("bit.a = %d  %u\n", i, bit.a);
	}
	
	printf("\n2bit b\nbit.b = x  b\n");
	for(i=0;i<6;i++)
	{
		bit.b = i;
		printf("bit.b = %d  %u\n", i, bit.b);
	}
	
	printf("\n3bit c\nbit.c = x  c\n");
	for(i=0;i<10;i++)
	{
		bit.c = i;
		printf("bit.c = %d  %u\n", i, bit.c);
	}
	
	int a = 0xF1F;
	printf("\nint a = 0xF1F\n /d表示为%d\n /X表示为%X", a, a);
	
	
	
	return 0;
} 	
