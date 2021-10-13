#include<stdio.h>

#define pi 3.14159
#define C(r) 2*pi*r
#define S(r) pi*r*r

int main(){
	
	float r;
	
	printf("请输入半径：");
	scanf("%f",&r);
	printf("半径为%.3f的圆,面积为%.3f,周长为%.3f",r,S(r),C(r));
	return 0;
}
