#include<iostream>
using namespace std;
int main(){
	 int size=5;   
	int arr[size]={10,20,70,50,90};
	
	int arr2[size-1];

	for(int i=0;i<size-1;i++){
		
		arr2[i]=arr[i+1]-arr[i];
	}
	
	//print the new array
	for(int i=0;i<size-1;i++){
		cout<<arr2[i]<<"\t";
	}
	return 0;
}