//Q4. Find odd and even among the numbers
#include<stdio.h>
void evn_odd(int*,int);
void main(){
	int arr[10]={1,2,4,3,5,6,7,8,9,10};
	int s=10;
	evn_odd(arr,s);
	
}

void evn_odd(int*arr,int s){
	for(int i=0;i<s;i++){
		if(arr[i]%2==0){
			printf("index %d Even:%d\n",i,arr[i]);
		}
		else{
			printf("index :%d odd :%d\n",i,arr[i]);
		}
	}
}