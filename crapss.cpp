#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int craps()
{
	srand(time(NULL));
	int a,b,total,total1=0,counter=0;
	

	printf("\rDice are rolling.. \n");

	a=1+rand()%6;
	b=1+rand()%6;
	total1=a+b;
    printf("First dice: %d\nSecond dice: %d\n", a,b);
    	
	if(total1==7 || total1==11 && counter==0)
	{
		printf("\n, You Win!");
		return 0;
	}
		
else	if(total1==2 || total1==3 || total1==12 && counter==0)
	{
		printf("\nYou lose, maybe another time!");
		return 0;
	}
	else
	{
		printf("\n%d is your point, try to hit it again!\n", total1);
	}
	while(1)
	{
		printf("\nDice rolling again.  ");
	
		a=1+rand()%6;
		b=1+rand()%6;
		total=a+b;
		printf("First dice: %d\nSecond dice: %d\n", a,b);
		
		if(total==total1)
		{
			printf("Jackpot, you win!");
			return 0;
		}
			
		if(total==7)
		{
			printf("You lose, maybe another time!");
			return 0;
		}
	}	
}

int main()
{
	srand(time(NULL));
	char x,y;
	int a,b,total,total1=0,counter=0;
	
	printf("\n========================>>>> THE GAME OF CRAPS <<<<========================\n\n");
	printf("Welcome to the game. Let's start when you ready.\n\n");
	printf("Do want to learn the rules? Y/N\n");
	scanf("%c", &x);
	
	if(x=='y' || x=='Y')
	{
		printf("\nOK, here's rules:\n- You will roll two dice and sum their topface.\n");
		printf("- If your first sum equals 7 or 11, you win.\n");
		printf("- If your first sum equals to 2, 3 or 12, you lose.\n");
		printf("- If your sum isn't five of them, that number is your point.\n");
		printf("- You will roll dice again until you hit your point again.\n");
		printf("- If you hit 7 before you hit your number, you lose.\n\n");
		
	}
	
	printf("Roll the dice? Y/N\n");
	scanf(" %c", &y);
	
	if(y=='y' || y=='Y')
	{
	craps();	
	}
	
}
