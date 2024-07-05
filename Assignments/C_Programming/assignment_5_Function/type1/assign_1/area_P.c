//function without parameters without returntype
//find area of rectangle and circle 
#include<stdio.h>

void cicle();
void rectangle();


void main(){
	
	
			circle();
			rectangle();
	
}

void circle(){
	
	
		float radius=3.5,pie=3.14,area_C,perimeter_C;
		area_C=pie*radius*radius;
		perimeter_C=2*pie*radius;
		printf("\narea of circle is %f",area_C);
		printf("\nperimeter of circle is %f\n",perimeter_C);
	
	
}


void rectangle(){
	
	float length=12.3,breadth=10,area_R,perimeter_R;

	area_R=length*breadth;
	perimeter_R=2*(length+breadth);

	printf("\narea of rectangle is %f",area_R);
	printf("\nperimeter of rectangle is %f",perimeter_R);
}