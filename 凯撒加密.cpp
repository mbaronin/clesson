#include<stdio.h>

int main()
{
	printf("����������:");
	
	char ch;
	
	while( (ch=getchar() ) != '\n')
	{
		ch='a' + (ch - 'a' + 3) % 26;
		
		printf("%c",ch);
	} 
}
