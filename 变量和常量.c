#include<stdio.h>

#define NAME "郭雨欣"
#define AGE 25
#define F(n) 2*n


int main()
{
	printf("变量\n\n") ;
	char a = 'F';
	char b = 'FF';
	char g = '9';
	char h = '10';
	int c = 200; 
	signed int d = -200; 
	int e = 200000000000000; 
	signed int f = -200000000000000; 
	long int ee = 20000000000000000000000000000000000000000000000000; 
	float i = 0.123456789123456789123456789;
	double j = 0.123456789123456789123456789;
	float ii = 123456.6666666; 
	float iii = 12345678.666666; 
	double jj = 0.123456789123456789123456789;
	
	
	printf("存储在char里 字符F的值是 %c\n", a);
	printf("存储在char里 字符FF的值是%c\n", b);
	printf("存储在char里 数字9的值是%c\n", g);
	printf("存储在char里 数字10的值是%c\n", h);
	printf("\nchar 里只能存一个字母 符号 或 0-9的一个\n\n");
	
	printf("存储在int里 200的值是%d\n", c);
	printf("存储在int里 200000000000000的值是%d\n", e);
	printf("存储在LLint里 20000000000.....的值是%d\n", ee);
	printf("存储在signed int里 -200的值是%d\n", d);
	printf("存储在signed int里 -200000000000000的值是%d\n", f);
	printf("\nint 里存储一个正负5.5亿之间的数\n\n");
	
	printf("存储在float里 π的值是%.30f\n", i);
	printf("存储在float里 10万后接小数 的值是%.30f\n", ii);
	printf("存储在float里 千万后接小数 的值是%.30f\n", iii);
	printf("\ndouble 最多存储了17位数\n" 
	"float 0后面最多17位小数 整数越多 存储数量越少 8位整数则无小数\n");
	
	printf("常量\n\n");
	 printf("%s的年龄是%d\n",NAME,AGE);
	printf("语音输入测试。在这里输入语音字符。切换成英文输入法。一样可以输入。\n");
	
	printf("F(3+2)的值是%d\n",F(3+2));
	return 0;
}
