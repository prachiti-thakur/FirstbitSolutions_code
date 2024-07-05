#include"queue.h"
int main(){
	//create queue
	Queue q(10);
	int choice;

	do {
			cout<<"\n0.Exit\n1.push\n2.pop\n3.display\n";
			cout<<"\nEnter the choice:\n";
			cin>>choice;
		switch(choice){
			case 0:{
				cout<<"\nExit\n";
				break;
			}
			case 1:{
				int ele;
				cout<<"Enter the element to push:";
				cin>>ele;
				if(q.push(ele)){
					cout<<"Element added successfully in the queue\n";
				}
				else{
					cout<<"Element is not added";
				}
				
				break;
			}
			case 2:{
				int ele;
				if(q.pop(ele)){
					cout<<ele<<"pop is successfully done\n";
				}
				else{
					cout<<"pop operation is not done\n";
				}
				break;
			}
			case 3:{
				q.display();
				break;
			}
			default:{
				cout<<"\ninvalid Input\n";
				break;
			}
			
		}	
		
	}while(choice!=0);
	return 0;
}