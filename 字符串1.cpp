#include<stdio.h>

int main()
{
	
	//�ַ�����
	 
	
	
	char a[] = {'a','b','v', 'd','t','\0'};
	
	printf("%s\n",a);
	printf("��ĩβ���\\0��\n");
	
	
	char b[]={"abcdefghijklmn"};
	printf("�����Զ������ַ�����%s\n",b);
	
	//�������
	
	printf("�������%d\n",1+2.0);
	printf("ǿ��ת�� �������%d\n",1+(int)2.1);
	printf("���������%f\n",1+2.0);
	
	//��·��ְ��
	
	int c,d;
	
	(c=0)&&(d=123);
	printf("a=%d\n,b=%d\n",c,d);
	
	(c=1)||(d=123);
	printf("a=%d\n,b=%d\n",c,d);
	
	
	//ASCII�� 
	
	printf("��ӡ����ַ���%c %c %c %c %c\n", 70, 105, 115, 104, 67);
        printf("ǰ���� ��䣺%10d\n", 2015);
        printf("ǰ����0��䣺%010d\n", 2015);
        printf("�Ҷ��룬����2λ��%10.2f\n", 3.1416);
        printf("����룬����3λ��%-10.3f\n", 3.1416);
        printf("�Ҷ��룬ָ����ʽ��%10e\n", 520000.0);
        printf("����룬ָ����ʽ��%-10E\n", 520000.0);
	
	return 0;
}
