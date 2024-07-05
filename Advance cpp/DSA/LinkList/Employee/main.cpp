#include"linkedlist.h"
int main(){
	LinkedList link;
	int choice;
	do {
		cout<<"Employee Linkedlist\n";
		cout<<"\n\t1.InsertAtBeg:\n";
		cout<<"\n\t2.InsertAtEnd\n";
		cout<<"\n\t3.InsertAtPos\n";
		cout<<"\n\t4.deleteBeg\n";
		cout<<"\n\t5.deleteEnd\n";
		cout<<"\n\t6.deleteByPos\n";
		cout<<"\n\t7.deleteByData\n";
		cout<<"\n\t10.display:\n";
		
		cout<<"Enter the choice";
		cin>>choice;
		
		switch(choice){
			case 1:{
				int id;
				char name[20];
				double salary;
				cout<<"Enter the id:";
				cin>>id;
				cout<<"Enter the name:";
				cin>>name;
				cout<<"Enter the salary";
				cin>>salary;
				Employee e(id,name,salary);
				link.insertBeg(e);
				break;
			}
			case 2:{
				
				int id;
				char name[20];
				double salary;
				cout<<"Enter the id:";
				cin>>id;
				cout<<"Enter the name:";
				cin>>name;
				cout<<"Enter the salary";
				cin>>salary;
				Employee e(id,name,salary);
				link.insertEnd(e);
				break;
			}
			case 3:{
				int id;
				char name[20];
				double salary;
				cout<<"Enter the id:";
				cin>>id;
				cout<<"Enter the name:";
				cin>>name;
				cout<<"Enter the salary";
				cin>>salary;
				Employee e(id,name,salary);
				int pos;
				cout<<"Enter the position:\n";
				cin>>pos;
				link.insertPos(e,pos);
				break;
			}
			case 4:{
				link.deleteBeg();
				
				break;
			}
			case 5:{
				link.deleteEnd();
				break;
			}
			case 6:{
				int pos;
				cout<<"Enter the position\n";
				cin>>pos;
				link.deleteByPos(pos);
				break;
			}
			case 7:{
				int id;
				cout<<"Enter the id:";
				cin>>id;
				link.deleteByData(id);
				break;
			}
			case 10:{
				link.display();
				break;
			}
		}
	}while(choice!=0);
	return 0;
}