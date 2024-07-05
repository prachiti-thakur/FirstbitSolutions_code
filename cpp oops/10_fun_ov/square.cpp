//square
#include<stdio.h>
struct Square{
	int tocalculate(int a){
		int s;
		s=a*a;
		return s;
	}
	
	float tocalculate(float f){
		float s;
		s=f*f;
		return s;
	}

	};
	
int main(){
	int choice;
do{
		printf("\n\n0.Exit\n1.Int(Square)\n2.Flaot(square)\n\n");
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	Square sq;
	
	switch(choice){
		case 1:{
			int a,result_int;
			printf("\nEnter the a:\n");
			scanf("%d",&a);
			result_int=sq.tocalculate(a);
			printf("\nSqaure of int %d:%d\n",a,result_int);
			
			break;
		}
		case 2:{
			
			float f,result_float;
			printf("\nEnter the f:\n");
			scanf("%f",&f);
			result_float=sq.tocalculate(f);
			printf("\nSqaure of float of %f:%f\n",f,result_float);
			
			break;
		}
		case 0:{
			printf("Thank you for visit!!");
			break;
		}
		default:
			{
				printf("Invalid Choice!!");
				break;
			}
		
	}
}while(choice!=0);
return 0;
}