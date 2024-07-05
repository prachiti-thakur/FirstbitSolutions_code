//count of elements
#include<stdio.h>
void main(){
	int arr[10]={1,2,3,4,5,2,1,1,4,2};
	int visit[10]={0};
	int n=10;
	
	for(int i=0;i<n;i++){
		
		int count=1;
		
			if(visit[i]==1){
				continue;
			}
		
			for(int j=0;j<n;j++){
				if(arr[i]==arr[j]){
					visit[i]=1;
					count++;
				}
			}
		
	}
}