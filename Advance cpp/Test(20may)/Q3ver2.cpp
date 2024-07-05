//pattern
#include<iostream>
using namespace std;
int main(){
	int n=8;
	int k=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
					if(i==1||i==n||j==1||j==n){
						cout<<"4 ";//for 1st row last col //OUTER 4 square
					}
					else{
						//cout<<"  ";
						if(i==2||i==(n-1)||j==2||j==(n-1)){
							cout<<"3 ";//2nd inner 3 square
						}
						else{
							//cout<<"  ";
							if(i==3||i==(n-2)||j==3||j==(n-2)){
								cout<<"2 ";//3rd inner 2 square
							}
							else{
								cout<<"1 ";//middle
							}
						}
						
					}
			}
			k++;
			cout<<"\n";
		}
		
	
	
	return 0;
	
}