#include<stdio.h>

#define NAME "������"
#define AGE 25
#define F(n) 2*n


int main()
{
	printf("����\n\n") ;
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
	
	
	printf("�洢��char�� �ַ�F��ֵ�� %c\n", a);
	printf("�洢��char�� �ַ�FF��ֵ��%c\n", b);
	printf("�洢��char�� ����9��ֵ��%c\n", g);
	printf("�洢��char�� ����10��ֵ��%c\n", h);
	printf("\nchar ��ֻ�ܴ�һ����ĸ ���� �� 0-9��һ��\n\n");
	
	printf("�洢��int�� 200��ֵ��%d\n", c);
	printf("�洢��int�� 200000000000000��ֵ��%d\n", e);
	printf("�洢��LLint�� 20000000000.....��ֵ��%d\n", ee);
	printf("�洢��signed int�� -200��ֵ��%d\n", d);
	printf("�洢��signed int�� -200000000000000��ֵ��%d\n", f);
	printf("\nint ��洢һ������5.5��֮�����\n\n");
	
	printf("�洢��float�� �е�ֵ��%.30f\n", i);
	printf("�洢��float�� 10����С�� ��ֵ��%.30f\n", ii);
	printf("�洢��float�� ǧ����С�� ��ֵ��%.30f\n", iii);
	printf("\ndouble ���洢��17λ��\n" 
	"float 0�������17λС�� ����Խ�� �洢����Խ�� 8λ��������С��\n");
	
	printf("����\n\n");
	 printf("%s��������%d\n",NAME,AGE);
	printf("����������ԡ����������������ַ����л���Ӣ�����뷨��һ���������롣\n");
	
	printf("F(3+2)��ֵ��%d\n",F(3+2));
	return 0;
}
