#include<stdio.h>
#include<conio.h>
void main()
{
	float amt, time, rate, si;
	
	printf("Enter Principal Amount: ");
	scanf("%f", &amt);
	printf("\nEnter Rate: \t\t");
	scanf("%f", &rate);
	printf("\nEnter Time: \t\t");
	scanf("%f", &time);
	
	si = (amt*rate*time)/100;
	printf("Simple Interest: %f", si);
	
	getch();
}
