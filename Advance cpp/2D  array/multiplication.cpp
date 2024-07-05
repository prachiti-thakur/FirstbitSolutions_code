//product of two matrix
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int brr[3][3]={1,2,3,4,5,6,7,8,9};
	int crr[3][3]={0};
	int sum=0;
	for(int k=0;k<3;k++)//row
	{
		for(int p=0;p<3;p++){//col
		int i=k;//for row
		sum=0;
		for(int j=0;j<3;j++){//verticle member in col
					//arr=>row* brr=>col
			sum=sum+(arr[i][j]*brr[j][p]);
		}
			crr[i][p]=sum;
		//	cout<<"crr["<<i<<"]["<<p<<"] :"<<crr[i][p]<<"\t";
		}
		
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<crr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}