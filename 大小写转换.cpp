#include <stdio.h>

int main()
{
       

		int ch;
		
		printf("请输入一段英文:");
		
		while(    (  ch=getchar()  )     != '\n')
		{
			if(ch>='a'&&ch<='z')
			{
				ch -= 32;
			} 
			else if(ch>='A'&&ch<='Z')
			{
				ch += 32;
			} 
			
			putchar(ch);
			
			
		} 
		
		putchar('\n');	
	
		
		
		/*
        //单个字母转换 
		char ch;
     
		printf("输入一个字母:");
		scanf("%c",&ch);
		
		//如果是小写变成大写
		if(ch>='a')
		{
			ch -= 32;
		} else if(ch<='Z'){
			ch += 32;
		} 
		 
		printf("字母:%c",ch);
		 */ 
		 
        return 0;
}
