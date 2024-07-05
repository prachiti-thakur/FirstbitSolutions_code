#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={{8,9,10},{5,4,3},{1,0,7}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	//transpose
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			int temp=arr[j][i];
			arr[j][i]=arr[i][j];
			arr[i][j]=temp;
		}
	}
	
	cout<<"transpose!!\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}