#include <stdio.h>

int main()
{
       

		int ch;
		
		printf("������һ��Ӣ��:");
		
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
        //������ĸת�� 
		char ch;
     
		printf("����һ����ĸ:");
		scanf("%c",&ch);
		
		//�����Сд��ɴ�д
		if(ch>='a')
		{
			ch -= 32;
		} else if(ch<='Z'){
			ch += 32;
		} 
		 
		printf("��ĸ:%c",ch);
		 */ 
		 
        return 0;
}
