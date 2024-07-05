
//find area of rectangle and circle 
#include<stdio.h>
float circle_A(float);
float peri_C(float);
float Rec_A(float,float);
float Rec_peri(float,float);

void main(){
	
		float radius=5.2;
		float area_C=circle_A(radius);
		printf("\narea of circle is %f",area_C);
		float perimeter_C=peri_C(radius);
		printf("\nperimeter of circle :%f",perimeter_C);
		
		float length=5;
		float breadth=2;
		
		float area_R=Rec_A(length,breadth);
		printf("\nArea of rectangle:%f",area_R);
		
		float peri_R=Rec_peri(length,breadth);
		printf("\nPerimeter of rectangle:%f",peri_R);
		
	
}

float circle_A(float radius){
	float pie=3.14;
	float area_C=pie*radius*radius;
	return area_C;
	
}

float peri_C(float radius){
	float pie=3.14;
	float perimeter_C=2*pie*radius;
	return perimeter_C;
	
}

float Rec_A(float length,float breadth){
	float area=length*breadth;
	return area;
	
}

float Rec_peri(float length,float breadth){
	float peri=2*(length+breadth);
	return peri;
}


