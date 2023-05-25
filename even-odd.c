//Odd-Even Number

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the integer a: \n");
	scanf("%d", &a);
	
	if(a%2==0)
	{
		printf("integer is even");
	}
	else
	{
		printf("integer is odd");
	}
}
