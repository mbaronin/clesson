#include<stdio.h>
#include<stdlib.h>


//����ṹ������ 
struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[128];
	char auther[40];
	float price;
	struct Date date;
	char publisher[40];
} ;

//���庯��
struct Book getInput(struct Book book)
{
	printf("����������:");
	scanf("%s",book.title);
	printf("����������:");
	scanf("%s", book.auther);
	printf("������۸�:");
	scanf("%f",&book.price);
	printf("�����뷢������:");
	scanf("%d-%d-%d",&book.date.year,&book.date.month,&book.date.day) ;
	printf("�����������:"); 
	scanf("%s", book.publisher );
	
	return book;
 } 

void printBook(struct Book book)
{
	printf("����:");
	printf("%s\n",book.title);
	printf("����:");
	printf("%s\n",book.auther);
	printf("�۸�:");
	printf("%.2f\n",book.price);
	printf("��������:");
	printf("%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
	printf("������:"); 
	printf("%s\n\n", book.publisher);
}

int main()
{
	int booknum, i;
	
	printf("���������м�����:");
	scanf("%d",&booknum);
	
	struct Book book[booknum];
	
	
	for (i=0;i<booknum;i++){
		printf("\n---��¼���%d�������Ϣ---\n",i+1);
		book[i] = getInput(book[i]);
	}
	
	printf("\n¼�����----��ӡ��Ϣ��---\n\n"); 
	
	for (i=0;i<booknum;i++)   printBook(book[i]);
	
	
	return 0;
}

