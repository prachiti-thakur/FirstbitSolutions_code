//pattern
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
					if(i==1||i==7||j==1||j==7){
						cout<<"4 ";//for 1st row last col //OUTER 4 square
					}
					else{
						//cout<<"  ";
						if(i==2||i==6||j==2||j==6){
							cout<<"3 ";//2nd inner 3 square
						}
						else{
							//cout<<"  ";
							if(i==3||i==5||j==3||j==5){
								cout<<"2 ";//3rd inner 2 square
							}
							else{
								cout<<"1 ";//middle
							}
						}
						
					}
			}
			
			cout<<"\n";
		}
		
	
	
	return 0;
	
}