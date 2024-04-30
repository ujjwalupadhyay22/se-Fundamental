#include<stdio.h>
//9. Find circumference of Triangle formula : triangle = a + b + c
main()
{
	int sidea,sideb,sidec,area;
	
	printf("Enter the sideA of Traingle : ");
	scanf("%d",&sidea);
	printf("Enter the sideB of Traingle : ");
	scanf("%d",&sideb);
	printf("Enter the sideC of Traingle : ");
	scanf("%d",&sidec);
	
	area=sidea*sideb*sidec;
	printf("Area of Traingle %d",area);
}
