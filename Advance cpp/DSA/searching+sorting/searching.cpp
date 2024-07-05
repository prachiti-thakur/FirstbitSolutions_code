#include<iostream>
using namespace std;
int linearSearch(int*,int,int);
int binarySearch(int*,int,int);
void display(int*,int);
int main()
{
	int arr[6]={10,30,45,60,50,70};
	int size=6;
	int ele;
	
	display(arr,size);
	cout<<"Enter the element wants to search::";
	cin>>ele;
	int result=linearSearch(arr,size,ele);

	if(result!=-1){
		cout<<"\n"<<ele<<"element is found at"<<result<<"index";
	}
	else{
		cout<<"Element not found!!";
	}
	
	//binary search
	
	int arr2[6]={10,20,30,40,50,60};
	
	display(arr2,size);

	cout<<"\nby binary search:\n";
	cout<<"Enter the element wants to search::";
	cin.ignore();
	cin>>ele;
	result=binarySearch(arr2,size,ele);
	if(result!=-1){
		cout<<"\n"<<ele<<"element is found at"<<result<<"index";
	}
	else{
		cout<<"Element not found!!";
	}
	
	return 0;
}

void display(int* arr,int size){
	for(int i=0;i<size;i++){
		cout<<"\n"<<arr[i]<<"\n";
	}
	
}
int linearSearch(int* arr,int size,int ele){
	
	for(int i=0;i<size;i++){//012345
		if(arr[i]==ele){
			return i;
		}
	}
	
	return -1;
	//o(n);
}

int binarySearch(int* arr,int size,int ele){
	int beg=0;
	int end=size-1;
	int mid;
	
	while(beg<=end){
	 mid=(beg+end/2);
		if(arr[mid]==ele){
			return mid;
		}
		else if(ele<arr[mid]){
			end=mid-1;//left arry
		}
		else{
			beg=mid+1;
		}
	}
	
	return -1;
	//o(log2n)
	}
	