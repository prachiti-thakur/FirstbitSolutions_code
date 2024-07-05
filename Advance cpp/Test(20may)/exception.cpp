//Q1
#include<math.h>
#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int division(int a,int b){
	return a/b;
	
}
int mul(int a,int b)
{
	return a*b;
}
int power(int a,int b){
	int r=pow(a,b);
	return r;
}
int main(){
	
	int choice;

	do{
	cout<<"1.Add\n";
	cout<<"2.sub\n";
	cout<<"3.mul\n";
	cout<<"4.div\n";
	cout<<"5.pow\n";
	cout<<"0.Exit\n";
	
	cout<<"Enter the choice";
	cin>>choice;
	
	switch(choice){
		case 1:{
			int a,b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b";
			cin>>b;
			
			 int r=add(a,b);
			 cout<<"Sum is :"<<r<<"\n";
			 
			break;
		}
		case 2:{
			int a,b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b";
			cin>>b;
			
			 int r=sub(a,b);
			 cout<<"Sub is :"<<r<<"\n";
			break;
		}
		case 3:{
			int a,b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b";
			cin>>b;
			
			 int r=mul(a,b);
			 cout<<"Mul is :"<<r<<"\n";
			break;
		}
		case 4:{
			int a,b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b";
			cin>>b;
			
			 try{
			 	if(b<=0){
			 		throw " Base must be greater than zero";
				 }
			 	//if exception not get throw then this  code will execute
			 	int r=division(a,b);
			 	cout<<"Div:"<<r<<"\n";
			 }catch(const char* e){
			 	cout<<e<<"\n";
			 	
			 }
			break;
		}
		case 5:{
			
			int a,b;
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b";
			cin>>b;
			
			 try{
			 	if(b<=0){
			 		throw " Base must be greater than zero";
				 }
			 	//if exception not get throw then this  code will execute
			 	int r=power(a,b);
			 	cout<<"Power:"<<r<<"\n";
			 }catch(const char* e){
			 	cout<<e<<"\n";
			 	
			 }
			break;
		}
		case 0:{
			
			cout<<"Exit!!";
			break;
		}
		default:{
			cout<<"invalid inputs!!";
			break;
		}
		
		
	}//out of switch
	}while(choice!=0);
	
	return 0;
}
