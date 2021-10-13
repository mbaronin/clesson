#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *pt;
	int i, n;
	pt = (int *)malloc(sizeof(int));
	
	printf("malloc申请内存测试\n请输入数字:");
	scanf("%d",pt);
	
	printf("录入申请内存空间中的值为%d\n",*pt);
	free(pt);
	printf("内存释放后的值为%d\n",*pt);
	
	printf("要申请的整数个数:");
	scanf("%d",&n); 

	pt = (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个数字:",i+1);
		scanf("%d",&pt[i]);										//两种数组的表示方法 
	}
	for(i=0;i<n;i++)	printf("第%d个数是%d\n",i+1,*(pt+i) );//两种数组的表示方法 
	
	free(pt);
	
	
	
	return 0;
}

