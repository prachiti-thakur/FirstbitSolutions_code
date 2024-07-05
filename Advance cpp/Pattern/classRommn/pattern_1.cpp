#include<iostream>
using namespace std;
int main1(){
	int a=0;
	for(int i=1;i<=6;i++){
		for(int j=1;j<=5-a;j++){
			cout<<"* ";
		}
		for(int k=1;k<=a;k++){
			cout<<"O ";
		}
		a++;
		cout<<"\n";
	}
	return 0;
}
int main2(){
	for(int i=10;i<=15;i++){
		for(int j=i;j>=7;j--){
		cout<<j<<" ";
			}
	cout<<"\n";
	}
	return 0;
}