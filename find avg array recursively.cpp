#include<stdio.h>
#define MAX 100

int Total(int []);
int size;

int main(){
	int arr[MAX], max,i;
	printf("enter size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	max = Total(arr);
	printf("%d/n/n",max);
	return 0;
}
int MaxEl(int a[]){
	 int i=0,toplam;
	if(i<size){
		toplam+=a[i];
		i++;
		Total(a);
	}
	return toplam;
}
