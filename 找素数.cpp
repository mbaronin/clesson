#include<stdio.h>
#include<math.h>

int main()
{
	int i, a, input;
	int n=2,num,sqnum; 
	int b=1;
	

	
	//������������
	 printf("����n������������:");
	 scanf("%d",&num);
	 
	 for(i=5;i<=num;i++)
	{
		sqnum=(int)sqrt(i);
		b=1;
		
		for(a=2;a<=sqnum;a++)
		{
			if (0==i%a) {
				b=0;
				break;
			}
		} 	
		
		if(b) {
			n+=1;
			printf("%d������\n",i);
		}
	}
		
	 if (num<5) printf("���һ�����");
	 else 	printf("��������Ϊ:%d",n);
	
	
	
	
	
	/*
	
	//���������� 
	for(i=5;i<100;i++)//������2��3 
	{
		for(a=2;a<i/2;a++)
		{
			if (0==i%a) break;
		} 
		
		if(a>=i/2)
		{
			printf("%d\n",i);
		}
		
	}
	
	
	
	
	//�ж������Ƿ������� 
	printf("������һ������:\n");
	scanf("%d", &input);
	
	for(a=2;a<input;a++ )
		{
			if(0==input%a)	
			{	
			printf("%d��������\n",input);
			break;
			} 
		}	
		
		if(input==a)
		{
			printf("%d������\n",input);
		}
	*/
	
	return 0;
}
