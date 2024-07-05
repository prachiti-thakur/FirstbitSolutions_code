//find area of rectangle and circle 
#include<stdio.h>
void main(){
	float length=12.3,breadth=10,area_R,perimeter_R;
	float radius=3.5,pie=3.14,area_C,perimeter_C;
	
	area_R=length*breadth;
	area_C=pie*radius*radius;
	
	perimeter_R=2*(length+breadth);
	perimeter_C=2*pie*radius;
	
	printf("\narea of rectangle is %f",area_R);
	printf("\narea of circle is %f",area_C);
	
	printf("\nperimeter of rectangle is %f",perimeter_R);
	printf("\nperimeter of circle is %f",perimeter_C);
}
