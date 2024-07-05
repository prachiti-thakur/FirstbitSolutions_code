#include<iostream>
using namespace std;
int main(){
	int k=100,x,y;
	for(int i=0;i<=4;i++){
		y=k;
		for(int p=1;p<=10;p++){
			cout<<y<<"\t";
			y--;
		}
		k=k-20;
		x=k+1;
		cout<<"\n";
		for(int p=1;p<=10;p++){
			cout<<x<<"\t";
			x++;
		}
			cout<<"\n";
	}
	return 0;
}