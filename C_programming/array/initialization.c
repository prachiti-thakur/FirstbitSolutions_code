//array 
#include<stdio.h>
void main(){
	//int arr[];//	[Error] array size missing in 'arr'
	int arr[5]={8,1,2,5};
	int arr5[5];
	//by default = garbage value
	int size=5;
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}//81250
	printf("\n\n\n");
	int arr1[]={1,2,4,5};
	for(int i=0;i<4;i++)
	{
		printf("%d",arr1[i]);
	}//1245
	///////////////////////////////////////////////
	int arr2[2];
	for(int i=0;i<2;i++)
	{
		printf("%d\n",arr2[i]);
	}//prints garbage values
	
	
	//scanning
	int arr3[4];
	for(int i=0;i<4;i++)
	{	
		printf("enter %d :",i);
		scanf("%d",&arr3[i]);
	}
	
	//printing
	for(int i=0;i<4;i++)
	{
		printf("%d\n",arr3[i]);
	}
	int brr[10];
	printf("size is:%d",sizeof(brr[10]));
	
	
}
