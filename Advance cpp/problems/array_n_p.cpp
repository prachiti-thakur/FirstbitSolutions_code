//put all negative initaial all postive from backward
#include<iostream>
using namespace std;
int main(){
	int arr[9]={-1,1,2,-5,4,-5,4,-5};
	int j=0;
	int temp;
	for(int i=0;i<9;i++){
		if(arr[i]<0){
			int temp=arr[j];
			cout<<temp<<"\n";
			arr[j]=arr[i];
		}
		int t=!(temp<0);
		cout<<t<<"\n";
		if(!(temp<0)){
			arr[i]=temp;
		}
	}
	
	for(int i=0;i<9;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}