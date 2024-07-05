#include<iostream>
using namespace std;
int main(){
	int k=0;
	char ch='A';
	for(int i=1;i<=5;i++){
		char alpha=ch;
		for(int j=1;j<=5-k;j++){
			cout<<alpha;
			alpha++;
		}
		cout<<"\n";
		ch++;
		k++;
	}
	ch='D';
	for(int i=1;i<=4;i++){
		char beta=ch;
		for(int j=1;j<=i+1;j++){
			cout<<beta;
			beta++;
			
		}
		cout<<"\n";
		ch--;
	}
	
	return 0;
}