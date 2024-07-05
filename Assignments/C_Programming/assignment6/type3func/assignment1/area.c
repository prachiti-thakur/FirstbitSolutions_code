//find area of rectangle and circle 
#include<stdio.h>
void circle_area(float*);
void rec_area(float*,float*);
void rec_perimeter(float*,float*);
void cir_perimeter(float*);

void main(){
	float length=12.3,breadth=10;
	float radius=3.5;
	
	circle_area(&radius);//call
	rec_area(&length,&breadth);
	rec_perimeter(&length,&breadth);
	cir_perimeter(&radius);
	
			
}

//function defination

void circle_area(float* radius){
	float pie=3.14;
	float area_C=pie*(*radius)*(*radius);
	printf("\narea of circle is %f",area_C);
	
}

void rec_area(float* length,float* breadth){
	float area_R=(*length)*(*breadth);
	printf("\narea of rectangle is %f",area_R);
}

void rec_perimeter(float* length,float* breadth){
	float perimeter_R=2*((*length)+(*breadth));
	printf("\nperimeter of rectangle is %f",perimeter_R);
	
}

void cir_perimeter(float* radius){
	float pie=3.14;
	float perimeter_C=2*pie*(*radius);
	printf("\nperimeter of circle is %f",perimeter_C);
	
}

