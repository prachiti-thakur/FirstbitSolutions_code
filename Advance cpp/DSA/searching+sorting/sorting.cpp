#include<iostream>
using namespace std;

void bubbleSort(int*,int);
void display(int*,int);
int main(){
	
	int arr[7]={20,30,45,10,5,7,40};
	int size=7;
	bubbleSort(arr,size);
	display(arr,size);
	return 0;
	
}
void display(int* arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
}
void bubbleSort(int* arr,int size){
	
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				//swap
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void selectionSort(int* arr,int size){
	int min=arr[0];
}