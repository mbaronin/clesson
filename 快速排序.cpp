#include<stdio.h>

void quicksort(int a[], int left, int right)
{
	
	int i=left, j=right;
	int temp,o;
	int pivot;
	
	pivot=a[(left+right)/2];
	
	while(i<=j)
	{
		while(a[i]<pivot)i++;//从左到右找到大于等于基准点的元素 
		while(a[j]>pivot)j--;//从右到左找到小于等于基准点的元素
		
		if (i <= j)//如果i<=j   则互换元素
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			printf("%d和%d换位\n",i,j);
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
	
	printf("排序前是:");
	for (i=0;i<length;i++) printf("%d ",a[i]);putchar('\n') ;
	
	quicksort(a,0,length-1);
	
	printf("排序后的结果是:");
	for (i=0;i<length;i++)  printf("%d ",a[i]);
	
 } 
