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

//β�巨
struct Book* addBook(struct Book* head)
{
	struct Book* book = (struct Book*)malloc(sizeof(struct Book));
	//struct Book* temp;
	static struct Book* tail;//��̬���� һֱ�洢 
	
	//getInput(book);
	printf("����������:");
	scanf("%s",book->title);
	printf("������۸�:");
	scanf("%f",&book->price);

	if (head != NULL)
	{
		tail->next = book;
		book->next = NULL;
		printf("β�巨�ɹ�\n");
		/*
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = book;
		book->next = NULL;
		;*/                        //��һ��β�巨 
		
	}else{//head == NULL
		head = book;
		book->next = NULL;
		printf("head == NULL����\n");
	}
	tail = book; 
	return head;
} 
//�������
struct Book* searchBook(struct Book* head, char* target)
{
	;
 } 
//�ͷ��ڴ� 
void release(struct Book* head){
	struct Book* temp;
	/*while (head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}*/
	
	printf("...�ͷ��ڴ���...\n");
	while (head != NULL){
		temp = head;
		printf("...�ͷ��ڴ���..temp = head;.\n");
		head = head->next;
		printf("...�ͷ��ڴ���..head = head->next;.\n");
		free(temp);
		printf("...�ͷ��ڴ���..free(temp);.\n");
	}
	printf("�ͷ��ڴ����\n");
	return ; 
}

int main()
{
	char ch;
	char* target;
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
	 
