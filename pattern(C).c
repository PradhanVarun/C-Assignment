#include<stdio.h>

main()
{
	int i,j,n, k;    // i= row; j= column
	
	printf("Enter the value n: "); //n=6  ******
	scanf("%d", &n);                    //*****
	                                    //****
	for(i=n;i>=1;i--)   //outer           ***
	                                    //**
	{                                   //*
		for(j=1;j<=i;j++)  //inner
		{
			
			printf("*", i);
			
		}
		printf("\n");
		
		
	}
}
