#include<stdio.h>

// 3. WAP to Find Area And Circumference of Circle

// area of circle formula = pie .radius.square
//  pie value =3.14159 

// cirumference of cricle = 2.pie,radius



main()
{
	float Radius,Area=0,Circum=0 ;
	
	printf("Enter the radius of circle :");
	scanf("%f",&Radius);  //Getting radius
	
	Area = 3.14159 *Radius*Radius; // finding area of circle
	printf("Area of circle for the given radius : % f \n",Area);
	
	Circum = 2*3.14159*Radius;  //finding circumference of circle
	printf("Circumference of circle for the given radius : % f ",Circum);	
}
