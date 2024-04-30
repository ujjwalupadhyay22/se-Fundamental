#include<stdio.h>
//  10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
main()
{
	int w,l,h,area;
	printf("Enter the Lenght of Traingle : ");
	scanf("%d",&w);
	printf("Enter the Width of Traingle : ");
	scanf("%d",&l);
	printf("Enter the Height of Traingle : ");
	scanf("%d",&h);
	// circum of rectangle
	area = 2*(w+l+h);
	printf("Area of Rectangle of prism  %d:", area);
}
