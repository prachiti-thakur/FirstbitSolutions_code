//menu driven for array
#include<stdio.h>
#include<stdlib.h>
//make it golbal so everyfunction call or block of code can access it 
int* arr;
int num;
//declarations
int* create_array(int);
void store_arry(int*,int);
void display(int*, int);
void reverse(int*,int);
void search(int*,int);
void min_array(int*,int);
void max_array(int*,int);


void main(){
	int choice;
	do{
	printf("\n\n1.create Array\n2.fill array\n3.display arry\n4.Reverse array\n5.search index\n6.search min\n7.search max\n0.Exit\n");
		
	//int choice;
	printf("\nEnter the choice:\n");
	scanf("%d",&choice);
	if(choice==1){
		
	printf("Enter the size:");
	scanf("%d",&num);
	
		arr=create_array(num);
	}else{
		if(choice==2){
			store_arry(arr,num);
		}else{
			if(choice==3){
				display(arr,num);
			}else{
				if(choice==4){
					reverse(arr,num);
				}else{
					if(choice==5){
						search(arr,num);
					}else{
						if(choice==6){
							min_array(arr,num);
						}else{
							if(choice==7){
								max_array(arr,num);
							}else{
							printf("Thank you!!");
						}
						}
					}
				}
			}
		}
	}
	}while(choice!=0);
	/*
	if(choice==0){
		printf("Thank you!!");
	}*/
}


//function definations

int* create_array(int num){
	
	int* arr=(int*)malloc(num*sizeof(int));
	printf("successfully created array of size:%d !!\n\n",num);
	return arr;
}

void store_arry(int* arr, int num){
	printf("Enter values:\n");
	
	for(int i=0;i<num;i++){
		printf("index %d:",i);
		scanf("%d",&arr[i]);
	}
			
			
}

void display(int* arr, int num){
	printf("values are:\n");
	
	for(int i=0;i<num;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
}

/*void delete_n(){
	int n;
	printf("Enter the index")
}
*/

void reverse(int*arr,int num){
	int temp;
	int j=num-1;
	for(int i=0;i<=(num/2);i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}	
	
	printf("\nYour array is successfully Reverse!!\n");
}
void search(int* arr,int num){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(int i=0;i<num;i++){
		if(arr[i]==n){
			printf("\n%d is at index:%d\n\n",arr[i],i);
		}
	}
}

void min_array(int* arr,int num){
	int min=arr[0];
	for(int i=0;i<num;i++){
	
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("\nmin:%d\n",min);
}

void max_array(int* arr,int num)
{
	int max=arr[0];
	for(int i=0;i<num;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}//end
	printf("\nMax:%d\n",max);
}