#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
struct Node {
	int count;
	char title[30];
};

int main()
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	
	node->count = 42991;
	strcpy( node->title ,"i am your father");
	
	printf("node : %d \n %s ",node->count ,node->title);
	
	return 0;
}
*/

//typedef �Ľṹ���÷�  �����滻�ṹ�� �ͽṹ��ָ�� 

typedef struct Node {
	int count;
	char title[30];
}NODE ,*PNODE;

int main()
{
	PNODE node = (PNODE)malloc(sizeof(NODE));
	
	node->count = 42991;
	strcpy( node->title ,"i am your father");
	
	printf("node : %d \n %s ",node->count ,node->title);
	
	return 0;
}

