#include<stdio.h>

int main()
{
	int english, maths, science, socialstudies, sanskrit, sum;
	float per;
	int total=500;
	printf("Enter the marks of five subjects: "); //English: \nEnter the marks Maths: \nEnter the marks Science: \nEnter the marks Social Studies: \nEnter the marks Sanskrit: \n "); //, english,maths,science,socialstudies,sanskrit);
	scanf("%d %d %d %d %d", &english, &maths, & science, &socialstudies, &sanskrit);

    sum=english+maths+science+socialstudies+sanskrit;
    //printf("%d+%d+%d+%d+%d=%d\n", english, maths, science, socialstudies, sanskrit, sum);
    printf("sum: %d\n",sum);
    per=(sum/500)*100;
    printf("Percentage of Student: %f\n", per);
    
   
	if (per>75)
	{
		printf("Distinction");
	}
	else if(per>60 || per<=75)
	{
		printf("First Class");
	}
	else if(per>50 || per<=60)
	{
		printf("Second Class");
	}
	else if(per>35 || per<=50)
	{
		printf("Pass Class");
	}
    else 
        	printf("Fail");
	
    
}
