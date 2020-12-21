#include<stdio.h>
int main(){
int i,*iptr;
double y,*yptr;
iptr=&i;
printf("iptr adres %d\n",iptr);
iptr++;
printf("iptr adres %d\n",iptr);

yptr=&y;
printf("yptr adres %d\n",yptr);
yptr++;
printf("yptr adres %d\n",yptr);
getchar();
return 0;








}

