#include<stdio.h>

int main()
{
	
	//字符串。
	 
	
	
	char a[] = {'a','b','v', 'd','t','\0'};
	
	printf("%s\n",a);
	printf("在末尾添加\\0。\n");
	
	
	char b[]={"abcdefghijklmn"};
	printf("这样自动生成字符串。%s\n",b);
	
	//运算符。
	
	printf("整形输出%d\n",1+2.0);
	printf("强制转换 整形输出%d\n",1+(int)2.1);
	printf("浮点型输出%f\n",1+2.0);
	
	//短路求职。
	
	int c,d;
	
	(c=0)&&(d=123);
	printf("a=%d\n,b=%d\n",c,d);
	
	(c=1)||(d=123);
	printf("a=%d\n,b=%d\n",c,d);
	
	
	//ASCII码 
	
	printf("打印五个字符：%c %c %c %c %c\n", 70, 105, 115, 104, 67);
        printf("前边用 填充：%10d\n", 2015);
        printf("前边用0填充：%010d\n", 2015);
        printf("右对齐，保留2位：%10.2f\n", 3.1416);
        printf("左对齐，保留3位：%-10.3f\n", 3.1416);
        printf("右对齐，指数形式：%10e\n", 520000.0);
        printf("左对齐，指数形式：%-10E\n", 520000.0);
	
	return 0;
}
