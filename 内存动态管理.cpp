#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *pt;
	int i, n;
	pt = (int *)malloc(sizeof(int));
	
	printf("malloc�����ڴ����\n����������:");
	scanf("%d",pt);
	
	printf("¼�������ڴ�ռ��е�ֵΪ%d\n",*pt);
	free(pt);
	printf("�ڴ��ͷź��ֵΪ%d\n",*pt);
	
	printf("Ҫ�������������:");
	scanf("%d",&n); 

	pt = (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("�������%d������:",i+1);
		scanf("%d",&pt[i]);										//��������ı�ʾ���� 
	}
	for(i=0;i<n;i++)	printf("��%d������%d\n",i+1,*(pt+i) );//��������ı�ʾ���� 
	
	free(pt);
	
	
	
	return 0;
}

