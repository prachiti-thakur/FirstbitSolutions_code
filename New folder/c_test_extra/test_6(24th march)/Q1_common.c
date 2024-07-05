//Q1
#include<stdio.h>
void main(){
	int arr[5]={1,2,3,1,5};
	int brr[5]={1,6,7,3,2};
	
	int cmp[5]={0};

int k=0;//to fill the cmp
for(int i=0;i<5;i++){
	//1st check it is present in cmp or not
	
	int flag=0;
	//searching one one element arr[0]=1 search 1 in entire cmp
	for(int j=0;j<5;j++){
		if(arr[i]==cmp[j]){
			flag=1;
			}
	}
	//if flag==0 ->not found then compare
	
	if(flag==0){
			for(int j=0;j<5;j++){
					if(arr[i]==brr[j]){
						cmp[k]=arr[i];
						
						printf("%d\t",cmp[k]);
						k++;//as insert increse the counter
					}
					
				}
	
	}

	
}//end for outer i
	}//end main
	
			 /*
			if(arr[i]==brr[j]){
				cmp[i]=arr[i];
				printf("%d\t",cmp[i]);
				}
			
			*/
			
			
	

//for(int i=0;i<5;i++){
//	
//	for(int j=0;j<5;j++){
//		for(int k=0;k<5;k++){
//			if(arr[])
//		}
//	}
//}//end for




/*
for(int i=0;i<6;i++){
		
		for(int j=0;j<5;j++){
			
			if(arr[i]==brr[j]){
				cmp[i]=arr[i];
				printf("%d\t",cmp[i]);
				}
			
			
			
			
	}
		}*/