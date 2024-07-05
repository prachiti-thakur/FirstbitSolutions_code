#include"linklist.h"
int main(){
	
	LinkList link;//create the ojb of linklist 
	int choice;
	do{
		cout<<"\n\t0.Exit\n\t1.InsertBeg\n\t2.InsertEnd\n\t3.insert at position:\n\t4.Delete from begning\n\t5.delete from End\n\t6.delete from position\n\t7.Delete data by data\n\t8.reverse linklist\n\t10.display\n";
		cout<<"Enter the choice";
		cin>>choice;
		switch(choice)
		{
			case 0:{
				cout<<"Exit!";
				break;
			}
			case 1:{
				int data;
				cout<<"Enter the data :";
				cin>>data;
				link.insertBeg(data);
				break;
			}
			
			case 2:{
				int data;
				cout<<"Enter the data :";
				cin>>data;
				link.insertEnd(data);
				break;
			}
			case 3:{
				int data,pos;
				cout<<"Enter the data";
				cin>>data;
				cout<<"Enter the position:";
				cin>>pos;
				link.insertAtPos(data,pos);
				
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
				cout<<"Enter the position:";
				cin>>pos;
				link.deleteAtPos(pos);
				break;
			}
			case 7:{
				int data;
				cout<<"Enter the data:";
				cin>>data;
				link.deleteBydata(data);
				break;
			}
			case 8:{
				link.reverse();
				break;
			}
			case 10:{
				link.display();
				break;
			}
			default:{
				cout<<"Invalid Input\n";
				break;
			}
		}
	}while(choice!=0);
	
	return 0;
}