#include<stdio.h>
#include<stdlib.h>

int main(){
	double x=20.0;
	int i=35;
	int * iptr;
	iptr=&i;
	
	printf("x in boyutu %d",sizeof(x));
	printf("i nin boyutu %d",sizeof(i));
	printf("iptr nin boyutu %d",sizeof(iptr));
	
	return 0;
	
}
