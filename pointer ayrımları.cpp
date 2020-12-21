#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=35;
	int*iptr;
	iptr=&i;
	//i'nin degeri
	printf("i degiskenin degeri %d/n/n",i);
	printf("inin degeri %d/n",*iptr);
	//i'nin adresi
	printf("iptr nin degeri %p/n",iptr);
	printf("i'nin adresi %p/n/n",&i);
	//i'nin adresini tutan pointerın adresi
	printf("iptr nin adresi %p/n",&iptr);
	return 0;
}
