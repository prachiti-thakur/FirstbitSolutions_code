//find area of rectangle and circle 
#include<stdio.h>
void main(){

	float a_cir=area_C();
	float a_rec=area_R();
	float peri_cir=perimeter_C();
	float peri_rec=perimeter_R();
	
	printf("\narea of rectangle is %f",a_rec);
	printf("\narea of circle is %f",a_cir);
	
	printf("\nperimeter of rectangle is %f",peri_cir);
	printf("\nperimeter of circle is %f",peri_rec);
}

float area_C(){
	float radius=3.5,pie=3.14,area_C;
	area_C=pie*radius*radius;
	return area_C;	
}

float area_R(){
	float length=12.3,breadth=10,area_R;
	area_R=length*breadth;
	return area_R;
	
}

float perimeter_R(){
	float length=12.3,breadth=10,perimeter_R;
	perimeter_R=2*(length+breadth);
	return 	perimeter_R;
	
}

float perimeter_C(){
	float length=12.3,breadth=10,perimeter_C;
	perimeter_C=2*pie*radius;
	return perimeter_C;
}