#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include"calculator.h"
int main(int argc, char** argv) {
	calculator c;
	int a,b;
	while(1){
		
		cout<<"1.+";
		cout<<"2.-";
		cout<<"3.*";
		cout<<"4.%";
		cout<<"5./";
		
		char sign;
		cout<<"Enter the operation wants to perform";
		cin>>sign;
		cout<<sign;
		int a='+'==sign;
		cout<<a;
		try{
					if(sign!='+'&& sign!='-'&& sign!='*' && sign!='/' && sign!='%'){
						throw "Please enter the valid sign\n";
					}
					switch(sign){
						case '+':{
							int a,b;
							cout<<"Enter the a";
							cin>>a;
							cout<<"Enter the b:";
							cin>>b;
								//if a n b invalid
								try{
									if(a<0 && b<0){
										throw "Invalid number";
									}
									cout<<c.add(a,b);
								}
								catch(const char* e){
									cout<<e;
								}
							break;
						}
						case '-':{
							int a,b;
							cout<<"Enter the a";
							cin>>a;
							cout<<"Enter the b:";
							cin>>b;
								//if a n b invalid
								try{
									if(a<0 && b<0){
										throw "Invalid number";
									}
									cout<<c.sub(a,b);
								}
								catch(const char* e){
									cout<<e;
								}
							break;
						}
						case '*':{
							int a,b;
							cout<<"Enter the a";
							cin>>a;
							cout<<"Enter the b:";
							cin>>b;
								//if a n b invalid
								try{
									if(a<0 && b<0){
										throw "Invalid number";
									}
									cout<<c.mul(a,b);
								}
								catch(const char* e){
									cout<<e;
								}
							
							break;
						}
						case '/':{
							int a,b;
							cout<<"Enter the a";
							cin>>a;
							cout<<"Enter the b:";
							cin>>b;
								//if a n b invalid
								try{
									if(b==0){
										throw "Invalid number";
									}
									cout<<c.div(a,b);
								}
								catch(const char* e){
									cout<<e;
								}
							break;
						}
						case '%':{
							int a,b;
							cout<<"Enter the a";
							cin>>a;
							cout<<"Enter the b:";
							cin>>b;
								//if a n b invalid
								try{
									if(a<0 && b<0){
										throw "Invalid number";
									}
									cout<<c.mod(a,b);
								}
								catch(const char* e){
									cout<<e;
								}
							break;
						}	
						
					}//switch ends here
				
				//if switch gets execute then break the loop here
				break;
		}
		catch(const char* c){
			cout<<c;
		}
		
	}
	return 0;
}