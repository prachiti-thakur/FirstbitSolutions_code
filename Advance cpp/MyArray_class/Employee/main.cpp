#include"myarr.h"
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
		cout<<"4.update"<<"\n";
		cout<<"4.Display"<<"\n";
		
		cout<<"Enter the choice:\n";
		cin>>choice;
		switch(choice){
			case 0:{
				exit=0;
				break;
			}
			case 1:{
				
				cout<<"Enter the element:";
				int i;
				char name[20];
				double salary;
				cout<<"Enter the id:";
				cin>>i;
				cout<<"Enter the name:";
				cin>>name;
				cout<<"Enter the salary:";
				cin>>salary;
				Employee e(i,name,salary);
				arr.addElement(e);
				break;
			}
			case 2:{
				int id;
				cout<<"Enter the id:";
				cin>>id;
				int i=arr.searchElement(id);
				arr.displayOne(i);
				//(arr.getPtr()+i)->display();
				break;
			}
			case 3:{
				int id;
				cout<<"Enter the id:";
				cin>>id;
				arr.deleteElement(id);
				break;
			}
			case 4:{
				int id;
				cout<<"Enter the id to update:";
				cin>>id;
				arr.updateElement(id);
				break;
			}
			case 5:{
				arr.displayElements();
				break;
			}
		}
	}while(exit!=0);
	
	return 0;
}