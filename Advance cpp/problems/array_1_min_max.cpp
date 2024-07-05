#include<iostream>
using namespace std;
int main(){9;
	int arr[9]={9,3,4,8,6,2,1,5,7};
	

	int k=0,index=0;
	for(int i=0;i<9;){
		cout<<i<<endl;
		//for max
		int max=arr[k];
		for(int j=k;j<9;j++){
			if(arr[j]>max){
				max=arr[j];
				index=j;
			}
		}
		arr[index]=arr[k];
		arr[k]=max;
		
//		cout<<k<<endl;
		cout<<"max="<<max<<endl;
		k++;
		if(k>=9){
			i=k;
			continue;
		}
		//for min
		int min=arr[k];
//		cout<<"min"<<min<<"\n";
		for(int j=k;j<9;j++){
			if(arr[j]<min){
				min=arr[j];
				index=j;
			}
		}
		arr[index]=arr[k];
		arr[k]=min;
		cout<<"min="<<min<<endl;
//		cout<<k<<endl;
		k++;
		i=k;
//		cout<<"k:"<<i<<"\n";
	}//out of for loop
	
	//display
	for(int i=0;i<9;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}