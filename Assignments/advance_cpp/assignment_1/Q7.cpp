//Q7
#include<iostream>
using namespace std;
int main(){
	int k=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5-i;j++){
			cout<<"  ";
		}
		char ch ='A';
		for(int j=1;j<=i+k;j++){
			cout<<ch<<" ";
			ch++;
		}
		k++;
		cout<<"\n";
	}
	return 0;
}
