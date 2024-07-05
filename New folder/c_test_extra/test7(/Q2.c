//q2
#include<stdio.h>
void rev(int*,int* ,int);
void display(int*,int);
int palindrome(int*,int*,int);
void main()
{
	int size=3;
	//int arr[5]={1,2,3,4,5};
	int arr[3]={1,2,1};
	
	int brr[size];
	rev(arr,brr,size);
	display(arr,size);
	display(brr,size);
	int i=palindrome(arr,brr,size);
	if(i){
		printf("array is palindrome!");
		
	}
	else{
		printf("array is not palindrome!!");
	}
	
	
	
}

 void rev(int* arr,int* brr,int size){
 	int j=size-1;
 	for(int i=0;i<size;i++){
 		brr[j]=arr[i];
 		j--;
	 }
	 
	

 }
 
 void display(int* arr,int size)
 {
 	printf("array:\n");
 	 for(int i=0;i<size;i++){
	 	printf("%d\t",arr[i]);
	 	
		 	 }
		 	 printf("\n");
 }
 
 int palindrome(int* arr,int* brr,int size){
 	int cnt=0;
 	for(int i=0;i<size;i++){
 		if(arr[i]==brr[i]){
 			cnt++;
		 }
	 }
	 //printf("cnt:%d",cnt);
	 //printf("size:%d",size);
	 if(cnt==size){
	 	return 1;
	 }else{
	 	return 0;
	 }
	 
	 
 }