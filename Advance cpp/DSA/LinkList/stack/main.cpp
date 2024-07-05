#include "linklist.h"
int main(){
	linklist lls;
	int choice;
	do{
		cout<<"\n0.Exit\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.peek\n";
		cout<<"4.display\n";
		cout<<"Enter choice\n";
		cin>>choice;
		
		switch(choice){
			case 1:{
				int data;
				cout<<"Enter the data:\n";
				cin>>data;
				lls.push(data);
				break;
			}
			case 2:
				{
				lls.pop();	
				break;
				}
			case 3:{
				lls.peek();
				break;
			}
			case 4:{
				lls.display();
				break;
			}
			
		}//out of switch
		
	}while(choice!=0);
	return 0;
}