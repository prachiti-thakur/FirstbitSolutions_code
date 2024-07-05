//evn_odd 
#include<stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	
	for(int i=0;i<5;i++){
		if(arr[i]%2==0)
			printf("index :%d even:%d\n",i,arr[i]);
		else
			printf("index :%d  odd:%d\n",i,arr[i]);
	}
}
