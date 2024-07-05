//Complex (real, imaginary)
#include<stdio.h>
struct complex{
	int real;
	int img;
	
};
void main(){
	
	struct complex c;
	
	c.real=10;
	c.img=45;
	
	printf("%d+%di",c.real,c.real);
	
	//array
	
	struct complex c1[10];
	
	//
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("Enter the values:\n\n");
	for(int i=0;i<n;i++){
		printf("real:");
		scanf("%d",&c1[i].real);
		printf("img:");
		scanf("%d",&c1[i].img);
		printf("\n\n");
	}
	
	printf("complex numbers:\n\n");
	
	for(int i=0;i<n;i++){
		printf("%d+%di\n\n",c1[i].real,c1[i].img);
	}
}