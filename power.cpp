#include <stdio.h>
	int calculate_power(int base, int exponent){
	int result=1;
	for(exponent; exponent>0; exponent--){
		result = result * base;
	}
	return result;
	}
	int main()
{
	int base, exponent;
	printf("Enter a base number: ");
	scanf("%d", &base);
	printf("Enter an exponent: ");
	scanf("%d", &exponent);
	int result2 = calculate_power(base, exponent);
	printf("Answer = %d", result2);
	return 0;
}
