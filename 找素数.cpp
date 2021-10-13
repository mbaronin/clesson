#include<stdio.h>
#include<math.h>

int main()
{
	int i, a, input;
	int n=2,num,sqnum; 
	int b=1;
	

	
	//计算素数个数
	 printf("计算n以内素数个数:");
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
			printf("%d是素数\n",i);
		}
	}
		
	 if (num<5) printf("输大一点好吗");
	 else 	printf("素数总数为:%d",n);
	
	
	
	
	
	/*
	
	//生成素数表 
	for(i=5;i<100;i++)//忽略了2和3 
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
	
	
	
	
	//判断输入是否是素数 
	printf("请输入一个整数:\n");
	scanf("%d", &input);
	
	for(a=2;a<input;a++ )
		{
			if(0==input%a)	
			{	
			printf("%d不是素数\n",input);
			break;
			} 
		}	
		
		if(input==a)
		{
			printf("%d是素数\n",input);
		}
	*/
	
	return 0;
}
