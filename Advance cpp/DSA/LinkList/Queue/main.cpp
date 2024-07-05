#include"linklinst.h"
int main()
{
	linklist llq;
	int choice;
	do{
		
		cout<<"\n0.Exit\n";
		cout<<"\n1.enqueue\n";
		cout<<"2.dequeue\n";
		cout<<"3.display\n";
	cout<<"Enter the choice:";
	cin>>choice;
	switch(choice){
		case 1:{
			int data;
			cout<<"Enter the data:";
			cin>>data;
			llq.enqueue(data);
			break;
		}
		case 2:{
			llq.dequeue();
			break;
		}
		case 3:{
			llq.display();
			break;
		}
	}//out of switch
	}while(choice!=0);
	return 0;
}