#include<stdio.h>

//6. Find area of Triangle Formula : A = 1/2 × b × h


main()
{
	float b,h,area=0;
	
	printf("Enter the breath of Traingle : ");
	scanf("%f",&b);
	printf("Enter the Height of Traingle : ");
	scanf("%f",&h);
	area = 0.5*b*h;
	printf("Area of traingle %f",area);
}
