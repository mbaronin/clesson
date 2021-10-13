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

//尾插法
struct Book* addBook(struct Book* head)
{
	struct Book* book = (struct Book*)malloc(sizeof(struct Book));
	//struct Book* temp;
	static struct Book* tail;//静态变量 一直存储 
	
	//getInput(book);
	printf("请输入书名:");
	scanf("%s",book->title);
	printf("请输入价格:");
	scanf("%f",&book->price);

	if (head != NULL)
	{
		tail->next = book;
		book->next = NULL;
		printf("尾插法成功\n");
		/*
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = book;
		book->next = NULL;
		;*/                        //第一种尾插法 
		
	}else{//head == NULL
		head = book;
		book->next = NULL;
		printf("head == NULL插入\n");
	}
	tail = book; 
	return head;
} 
//链表检索
struct Book* searchBook(struct Book* head, char* target)
{
	;
 } 
//释放内存 
void release(struct Book* head){
	struct Book* temp;
	/*while (head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}*/
	
	printf("...释放内存中...\n");
	while (head != NULL){
		temp = head;
		printf("...释放内存中..temp = head;.\n");
		head = head->next;
		printf("...释放内存中..head = head->next;.\n");
		free(temp);
		printf("...释放内存中..free(temp);.\n");
	}
	printf("释放内存完成\n");
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
	 
