#include<stdio.h>
float ort(int A[],int n){
	if(n==1)
		return A[n-1];
	else
		return  ((ort(A,n-1)*(n-1)+A[n-1])/n);
}

int main(){
	
	int A[]={1,2,3,4,5};
	int n=sizeof(A)/sizeof(A[0]);
	printf("%f\n",ort(A,n));
	return 0;
}
