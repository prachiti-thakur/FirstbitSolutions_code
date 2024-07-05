//power
#include<stdio.h>
struct Power{
	int tocalculate(int a,int pow){
		int res=1;
		while(pow!=0){
			res=res*a;
			pow--;
		}
		return res;
	}
	
	float tocalculate(float f,int pow){
		float res=1;
		while(pow!=0){
			res=res*f;
			pow--;
		}
		return res;
	}
};

int main(){
	int choice;
	do{
		printf("\n\n0.Exit\n1.int(power)\n2.float(power)\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		
		Power p;
		
		switch(choice){
			case 1:{
				
				int a,power;
				printf("Enter a:");
				scanf("%d",&a);
				printf("Enter power:");
				scanf("%d",&power);
				
				int res_int=p.tocalculate(a,power);
				printf("%d to the  power %d is %d",a,power,res_int);
				
				break;
			}
			case 2:{
				
				float f;
				int power;
				printf("Enter the f:");
				scanf("%f",&f);
				printf("Enter the power:\n");
				scanf("%d",&power);
				
				float res_f;
				res_f=p.tocalculate(f,power);
				printf("%f to the power %d id %f",f,power,res_f);
					
				break;
			}
			case 0:
				{
					
					printf("Thank you for visit!!");
					break;
				}
			default:{
				printf("Invalid inputs!!");
				break;
			}
		}//end switch
		
	}while(choice!=0);
	
	
	
	return 0;
}

/*
int main(){
	Power p;
	
	int a,power;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter power:");
	scanf("%d",&power);
	
	int res_int=p.tocalculate(a,power);
	printf("%d to the  power %d is %d",a,power,res_int);
	
	float f;
	printf("Enter the f:");
	scanf("%f",&f);
	printf("Enter the power:\n");
	scanf("%d",&power);
	
	float res_f;
	res_f=p.tocalculate(f,power);
	printf("%f to the power %d id %f",f,power,res_f);
	return 0;
}*/