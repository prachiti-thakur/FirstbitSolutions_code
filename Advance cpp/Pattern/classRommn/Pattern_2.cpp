//
#include<iostream>
using namespace std;
int main(){
		int a,k=0,b=a-1;
	for(int i=1;i<=5;i++){
		 a=9-i;
		for(int j=1;j<=a;j++){
			cout<<"* ";
		}
		for(int j=1;j<=i+k;j++){
//			if(j%2==1){
//				cout<<i<<" ";
//			}
//			else{
//				cout<<"* ";
//			}
				if(j%2==0){
					cout<<"* ";
				}
				else{
					cout<<i<<" ";
				}
							
		}
		k++;
		
		for(int j=1;j<=9-i;j++){
			//j<=8-i-1;
			cout<<"* ";
		}
		cout<<"\n";
		//cout<<k;
	}
	
	return 0;
}