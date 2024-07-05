//Q3
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			if(j==1|| j==i){
				cout<<"1  ";
			}
			else{
				cout<<i-1<<"  ";
			}
		}
		cout<<"\n";
	}
	return 0;
}