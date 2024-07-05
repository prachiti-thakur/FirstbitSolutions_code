//greater no among 4 nums
#include<stdio.h>
void main(){
	int a=10,b=20,c=30,d=40;
	if(a>b){
			if(a>c){
					if(a>d){
						printf("a is greater");
					}
					else{
						printf("b is greater");
					}
			}
			else{
					if(c>d){
						printf(" c is greater");
					}
					else{
						printf(" d is greater");
					}
			}
	}
	else{
		if(b>c){
				if(b>d){
					printf("b is greater");
				}
				else{
					printf(" d is greater");
				}
		}
		else{
				if(c>d){
					printf("c is greater");
				}
				else{
					printf("d is greater");
				}
		}
	}
}