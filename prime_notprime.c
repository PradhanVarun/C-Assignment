//w.A.P TO CHECK THE GIVEN INTEGER IS PRIME OR NOT PRIME.


#include<stdio.h>

int main()
{
	int n, i, flag = 0, m;
	
	printf("Enter the positive integer: ");   //value of n(positive integer)
	scanf("%d", &n);
	
	//if(n==0 || n==1)  // 0 and 1 are not prime numbers.
	//flag=1;
	//m=n/2;
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			printf("%d in not Prime Number.", n);
		flag = 1;
		break;
	}
	
	}
	
	if(flag==0)
	{
		printf("%d is a Prime Number.");
	}
	

}
