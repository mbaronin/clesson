#include<stdio.h>
#include<stdlib.h>

struct Book
{
	char title[128];
	float price;
	struct Book * next;

} ;
/*
//��ֵ 
void getInput(struct Book* newbook)
{
	printf("����������:");
	scanf("%s",newbook->title);
	printf("������۸�:");
	scanf("%f",&newbook->price);
} 
*/

//��ӡ�������� 
void printBook(struct Book* head)
{
	struct Book* print = head;//->next;//���next�Ƿ�����? 
	while(print){
			printf("����%s\n�۸�%.2f\n\n",print->title, print->price);
			print = print->next;
	}
}

//ͷ�巨
struct Book* addBook(struct Book* head)
{
	struct Book* book = (struct Book*)malloc(sizeof(struct Book));
	
	//getInput(book);
	printf("����������:");
	scanf("%s",book->title);
	printf("������۸�:");
	scanf("%f",&book->price);

	if (head != NULL)
	{
		book->next = head;
		head = book;
	//	temp = head;
	//	head = book;
	// 	book->next = temp;
	//  �̵̳��÷� 
	}else{
		head = book;
		book->next = NULL;
	}
	//return head
} 

void release(struct Book* head){
	struct Book* temp;
	while (head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}
}

int main()
{
	char ch;
	int count = 0; 
	struct Book* head = (struct Book*)malloc(sizeof(struct Book));
	
	head = NULL;
	
	while(1)
	{
		printf("\n�Ƿ�����鼮?(Y/N):");
		//scanf("%c",&ch) ;
		//if (ch == 'Y' || ch == 'y')  addBook(head);
		//else break;
		do {
			ch = getchar();
		}while(ch!='y' && ch!= 'n');//û�� bug�� ��¼���� 
		
		if (ch == 'y') head = addBook(head);
		else break;
	}
	
	printf("////¼����� ���ڴ�ӡ////\n\n");
	printBook(head);
	release(head);
	
	return 0;
}
	 
