#include<stdio.h>
#include<stdlib.h>


//定义结构体类型 
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

//定义函数
struct Book getInput(struct Book book)
{
	printf("请输入书名:");
	scanf("%s",book.title);
	printf("请输入作者:");
	scanf("%s", book.auther);
	printf("请输入价格:");
	scanf("%f",&book.price);
	printf("请输入发售日期:");
	scanf("%d-%d-%d",&book.date.year,&book.date.month,&book.date.day) ;
	printf("请输入出版社:"); 
	scanf("%s", book.publisher );
	
	return book;
 } 

void printBook(struct Book book)
{
	printf("书名:");
	printf("%s\n",book.title);
	printf("作者:");
	printf("%s\n",book.auther);
	printf("价格:");
	printf("%.2f\n",book.price);
	printf("发售日期:");
	printf("%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
	printf("出版社:"); 
	printf("%s\n\n", book.publisher);
}

int main()
{
	int booknum, i;
	
	printf("请输入你有几本书:");
	scanf("%d",&booknum);
	
	struct Book book[booknum];
	
	
	for (i=0;i<booknum;i++){
		printf("\n---请录入第%d本书的信息---\n",i+1);
		book[i] = getInput(book[i]);
	}
	
	printf("\n录入完毕----打印信息中---\n\n"); 
	
	for (i=0;i<booknum;i++)   printBook(book[i]);
	
	
	return 0;
}

