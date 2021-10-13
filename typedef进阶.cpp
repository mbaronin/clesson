#include<stdio.h>




int calc(   int (*)(int,int)	  , int , int);
int ( *select(char) )(int, int);

// π”√typedefºÚªØ 
typedef int (*PTR_TO_FUN)(int,int);
int calc(   PTR_TO_FUN			  , int , int);
PTR_TO_FUN select(char) ;

/////////////////// 

typedef int (*PTR_TO_ARRAY)[3];

int main()
{
	int array[3] = { 1, 2,3};
	PTR_TO_ARRAY parray = &array;
	
	int i;
	for(i=0;i<3;i++){
		printf("%d\n",(*parray)[i]);
	}
	
	return 0;
}
