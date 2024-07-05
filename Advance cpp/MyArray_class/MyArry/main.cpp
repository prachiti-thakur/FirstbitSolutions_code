#include"Myarry.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	MyArry arr(5);
	int choice;
	int exit=1;
	do{
		cout<<"\n";
		cout<<"0.Exit"<<"\n";
		cout<<"1.Add"<<"\n";
		cout<<"2.search"<<"\n";
		cout<<"3.delete"<<"\n";
		cout<<"4.Display"<<"\n";
		
		cout<<"Enter the choice:\n";
		cin>>choice;
		switch(choice){
			case 0:{
				exit=0;
				break;
			}
			case 1:{
				int ele;
				cout<<"Enter the element:";
				cin>>ele;
				arr.addElement(ele);
				break;
			}
			case 2:{
				int ele;
				cout<<"Enter the element:";
				cin>>ele;
				arr.searchElement(ele);
				break;
			}
			case 3:{
				int ele;
				cout<<"Enter the element:";
				cin>>ele;
				arr.deleteElement(ele);
				break;
			}
			case 4:{
				arr.displayElements();
				break;
			}
		}
	}while(exit!=0);
	
	return 0;
}