// W.A.P to print the integers in the revese order.

#include<stdio.h>
int main()
{
	int a, reverse = 0, rem;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	while(a!=0)
	{
		rem = a % 10;
		reverse = reverse * 10 + rem;
		a = a/10;
		
	}
	printf(" Reversed number is %d", reverse);
	
}
