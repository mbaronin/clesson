#include<stdio.h>
#include<stdlib.h>

struct Book
{
	char title[128];
	float price;
	struct Book * next;

} ;
/*
//赋值 
void getInput(struct Book* newbook)
{
	printf("请输入书名:");
	scanf("%s",newbook->title);
	printf("请输入价格:");
	scanf("%f",&newbook->price);
} 
*/

//打印整个链表 
void printBook(struct Book* head)
{
	struct Book* print = head;//->next;//这个next是否有用? 
	while(print){
			printf("书名%s\n价格%.2f\n\n",print->title, print->price);
			print = print->next;
	}
}

//头插法
struct Book* addBook(struct Book* head)
{
	struct Book* book = (struct Book*)malloc(sizeof(struct Book));
	
	//getInput(book);
	printf("请输入书名:");
	scanf("%s",book->title);
	printf("请输入价格:");
	scanf("%f",&book->price);

	if (head != NULL)
	{
		book->next = head;
		head = book;
	//	temp = head;
	//	head = book;
	// 	book->next = temp;
	//  教程的用法 
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
		printf("\n是否添加书籍?(Y/N):");
		//scanf("%c",&ch) ;
		//if (ch == 'Y' || ch == 'y')  addBook(head);
		//else break;
		do {
			ch = getchar();
		}while(ch!='y' && ch!= 'n');//没有 bug的 记录输入 
		
		if (ch == 'y') head = addBook(head);
		else break;
	}
	
	printf("////录入完毕 正在打印////\n\n");
	printBook(head);
	release(head);
	
	return 0;
}
	 
