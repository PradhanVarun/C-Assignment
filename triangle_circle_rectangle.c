//W.A.P to find out the area of Triangle, Circle, and rectangle using switch case.

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
	int  choice;
	float  base, height, radius, length, breath, area;
	printf("1) Area of Triangle.\n");
	printf("2) Area of Rectangle.\n");
	printf("3) Area of Circle.\n");
	printf("Enter your choice among three options as given above: ");
	scanf("%d", &choice);
	
	if(choice<1 || choice>3)
	{
		printf("Mind your eyes on the above selection, please!");
	}
	
	switch(choice)
	{
		case 1:
			{
				printf("Enter the height of triangle: \n", height);
				scanf("%f", &height);
				printf("Enter the base of triangle: \n", base);
				scanf("%f", &base);
				area = 0.5*height*base;
				printf("Area of the Triangle is: %.2lf\n", area);
				
				break;
			}
		case 2:
			{
				printf("Enter the length of rectangle: \n", length);
				scanf("%f", &length);
				printf("Enter the breath of rectangle: \n", breath);
				scanf("%f", &breath);
				area = breath * length;
				printf("Area of the rectangle is: %.2lf\n", area);
				
				break;
			}
		case 3:
		{
	            printf("Enter the radius of circle: \n", radius);
				scanf("%f", &radius);
				area = PI * radius * radius;
				printf("Area of the Circle is: %f\n", area);
				
				break;
			}	
	}
	
	
}
