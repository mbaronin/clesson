#include<stdio.h>

#define pi 3.14159
#define C(r) 2*pi*r
#define S(r) pi*r*r

int main(){
	
	float r;
	
	printf("������뾶��");
	scanf("%f",&r);
	printf("�뾶Ϊ%.3f��Բ,���Ϊ%.3f,�ܳ�Ϊ%.3f",r,S(r),C(r));
	return 0;
}
