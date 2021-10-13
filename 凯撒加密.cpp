#include<stdio.h>

int main()
{
	printf("«Î ‰»Î√‹Œƒ:");
	
	char ch;
	
	while( (ch=getchar() ) != '\n')
	{
		ch='a' + (ch - 'a' + 3) % 26;
		
		printf("%c",ch);
	} 
}
