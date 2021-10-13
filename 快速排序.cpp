#include<stdio.h>

void quicksort(int a[], int left, int right)
{
	
	int i=left, j=right;
	int temp,o;
	int pivot;
	
	pivot=a[(left+right)/2];
	
	while(i<=j)
	{
		while(a[i]<pivot)i++;//�������ҵ����ڵ��ڻ�׼���Ԫ�� 
		while(a[j]>pivot)j--;//���ҵ����ҵ�С�ڵ��ڻ�׼���Ԫ��
		
		if (i <= j)//���i<=j   �򻥻�Ԫ��
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			printf("%d��%d��λ\n",i,j);
			i++;
			j--;
		} 
	}
	
	if (left<j) quicksort(a,left,j);
	if (i<right) quicksort(a,i,right);
	
}



int main(void)
{
	int a[] = {73,108,111,118,101,70,105,115,104,67,46,99,111,109};
	int i,length;
	 
	length = sizeof(a)/sizeof(a[0]);
	
	printf("����ǰ��:");
	for (i=0;i<length;i++) printf("%d ",a[i]);putchar('\n') ;
	
	quicksort(a,0,length-1);
	
	printf("�����Ľ����:");
	for (i=0;i<length;i++)  printf("%d ",a[i]);
	
 } 
