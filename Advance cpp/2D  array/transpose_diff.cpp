//transpose 3*4 into ==>4*3 matrix
#include<iostream>
using namespace std;
int main(){
	int arr[3][4]={{1,2,3,4},{11,12,13,14},{21,22,23,24}};
	int brr[4][3]={0};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
	
	//transpose
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			brr[j][i]=arr[i][j];
		}
	}
	
	//
	cout<<"after transpose!!\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<brr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}