#include<stdio.h>
#include <math.h>

int main()
{
	int i,sum;
	int fb,fb_1,n;
	
	
	
	sum=0;
	for(i=1;i<=1000;i++)
	{
		if (i%5||i%3)sum=sum+i;
	}
	printf("1000����3��5����֮��Ϊ%d\n\n",sum);
	
	
	
	
	
	fb=2;
	fb_1=1;
	sum=0;
	
	printf("쳲���������:");
	while(fb<4000000)
	{
		n=fb;
		fb=fb+fb_1;
		fb_1=n;
		printf("%d ",fb);
		if(0==fb%2){
			sum+=fb;
		}
	}
		printf("\n\n4000000����쳲�����ż���ĺ�Ϊ%d\n\n",sum);
	
	long long int i;
	
	i=600851475143;
	printf("%d",i);
	
	
	return 0;
 } 
