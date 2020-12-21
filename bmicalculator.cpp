#include<stdio.h>
int  body(int x){
	printf("body mass ýndex:");

	if(x<18){
		printf("zayýf");
		return 1;
	}
	else if (x<25){
	
			printf("normal");
		return 2;
	}
	else if(x<30){
				printf("kilolu");
		return 3;
	}
	
		else if(x>30){
				printf("obez");
		return 4;
	}
	
		}
	int main(){
		
		int a,b;
		printf("kilo giriniz:");
		scanf("%d",&a);
		printf("boy giriniz:");
		scanf("%d",&b);
		
		int bod= a/(b*b);
		
	
		
		printf("%d",body(bod));
		
		
		
		

	
		}
