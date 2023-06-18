//W.A.P to print the fibonacci series.

#include<stdio.h>
int main()
{
	int a, i, d1=0, d2=1, d3=d1+d2;
	
	printf("Enter the number of digits: ");
	scanf("%d", &a);
	
	printf("Fibonacci Series is:\n%d\n%d\n", d1, d2);
	
	for(i=3;i<=a;i++)
	{
		printf("%d\n", d3);
		d1 = d2;
		d2 = d3;
		d3 = d1 + d2;
	}
}
