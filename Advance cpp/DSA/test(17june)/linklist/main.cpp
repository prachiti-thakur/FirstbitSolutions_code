#include"linkedlist.h"
int main(){
	int choice;
	linkedList ll;
	do{
		cout<<"0.Exit\n";
		cout<<"1.insert in ascending order:\n";
		cout<<"2.display:\n";
		cout<<"3.delete by give element:\n";
		cout<<"Enter the choice:";
		cin>>choice;
		switch(choice){
			case 1:{
				int data;
				cout<<"Enter the data:";
				cin>>data;
				ll.insertBySort(data);
				
				break;
			}
			case 2:{
				ll.display();
				break;
			}
			case 3:{
				int data;
				cout<<"Enter the data:";
				cin>>data;
				ll.deleteBYdata(data);
				break;
			}
			case 0:{
				cout<<"Exit\n";
				break;
			}
			default:{
				cout<<"Invalid input\n";
				break;
			}
		}
		
	}while(choice!=0);
	return 0; 
}