#include<stdio.h>

main()
{
	int i,j,n;    // i= row; j= column
	
	printf("Enter the value n: "); //n=6  1
	scanf("%d", &n);                    //12
	                                    //123
	for(i=1;i<=n;i++)   //outer           1234
	                                    //12345
	{                                   //123456
		for(j=1;j<=i;j++)  //inner
		{
			printf("*", i);
			
		}
		printf("\n");
		
		
	}
	
}
