//Q1
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=6;i++){
		if(i==1 || i==6){
			for(int j=1;j<=5;j++){
				cout<<"* ";
			}
			cout<<"\n";
		}
		else{
			for(int j=1;j<=5;j++){
				if(j==1 ||j==5){
					cout<<"* ";
				}
				else{
					cout<<"  ";
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}