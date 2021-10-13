#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1;
	FILE *fp2;
	int ch;
	
	
	if ( (fp1 = fopen("fopen.txt","r")  ) == NULL)
	{
		printf("打开文件fopen失败\n");//if don`t have this file, cann`t open; 
		exit(1);
	} 
	
	if ( (fp2 = fopen("fopencopy.txt","w")  ) == NULL)
	{
		printf("打开文件fopencopy失败\n");//if don`t have this file, cann`t open; 
		exit(1);
	} 
	
	/*
	//print file fopen;
	while ((ch = getc(fp1)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	printf("ch : %d\n",ch);
	*/
	//copy fp1 to fp2
	
	printf("ch : %d\n",ch);
	while ((ch = getc(fp1)) != EOF)
	{
		fputc(ch,fp2);
	}
	/*
	printf("copy complete\n");
	printf("ch : %d\n",ch);
	
	
	//print file fopencopy;
	ch = 1;
	while ((ch = getc(fp1)) != EOF)
	{
		putchar(ch);
	}
	*/
	fclose(fp1);
	fclose(fp2);
	return 0;
}
