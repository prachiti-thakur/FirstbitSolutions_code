//Q5
#include<iostream>
using namespace std;
int main(){
	int k=0;
	for(int i=1;i<=5;i++){
		//spaces
		for(int j=1;j<=5-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i+k;j++){
			//cout<<j<<"   ";
			cout<<"* ";
		}
		k++;
		cout<<"\n";
	}
	return 0;
}