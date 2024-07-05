//#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "myarr.h"
int main() {
	MyArry arr(5);
	int exit=0;
	int choice;
	do{
		cout<<"\n";
		cout<<"0.Exit\n";
		cout<<"1.Add\n";
		cout<<"2.Search\n";
		cout<<"3.delete\n";
		cout<<"4.display\n";
		
		cout<<"Enter the choice:";
		cin>>choice;
		
		switch(choice){
			case 0:{
				exit=1;
				cout<<"Exit!";
				break;
			}
			case 1:{
				//add element 
				cout<<"choice the emp:\n";
				cout<<"1.Admin\n";
				cout<<"2.hr\n";
				cout<<"3.salesManager\n";
				
				int e;
				cout<<"Enter the choice:\n";
				cin>>e;
				
					switch(e){
						case 1:{
							//admin
							int i;
							double s;
							double a;
							char nm[20];
							cout<<"Enter the id:";
							cin>>i;
							cout<<"Enter the name:";
							cin>>nm;
							cout<<"Enter the salary:";
							cin>>s;
							cout<<"Enter the allowance:";
							cin>>a;
							
							//admin al(i,nm,s,a);//block madhe obj hotoy stack vr ani heap vr adrress assign hotoy 
							//jas next ieration jaty tas stack nighun janr block ch
							//arr.addElement(&a1);
							Admin* a1=new Admin(i,nm,s,a);
							
							arr.addElement(a1);
							break;
						}
						
						case 2:{
							//Hr
							int i;
							double s;
							double c;
							char nm[20];
							cout<<"Enter the id:";
							cin>>i;
							cout<<"Enter the name:";
							cin>>nm;
							cout<<"Enter the salary:";
							cin>>s;
							cout<<"Enter the commission:";
							cin>>c;
							
							hr* h=new hr(i,nm,s,c);
							arr.addElement(h);
							break;
						}
						case 3:{
							
							int i,t;
							double s;
							double inc;
							char nm[20];
							cout<<"Enter the id:";
							cin>>i;
							cout<<"Enter the name:";
							cin>>nm;
							cout<<"Enter the salary:";
							cin>>s;
							cout<<"Enter the Incentive:";
							cin>>inc;
							cout<<"Enter the Target:";
							cin>>t;
							SalesM* sm=new SalesM(i,nm,s,inc,t);
							arr.addElement(sm);
							break;
						}
						
					}//out of switch
				
				break;
			}
			case 2:{
				cout<<"case2\n";
				int id;
				cout<<"Enter id to search:";
				cin>>id;
				int i=arr.searchElement(id);
				cout<<"index:"<<i<<"\n";//index 
				Admin* a=dynamic_cast<Admin*>(arr.getPtr()[i]);
				hr* h=dynamic_cast<hr*>(arr.getPtr()[i]);
				SalesM* sm=dynamic_cast<SalesM*>(arr.getPtr()[i]);
				if(a!=NULL){
					a->display();
				}
				else if(h!=NULL){
					h->display();
				}
				else if(sm!=NULL){
					sm->display();
				}
				break;
			}
			case 3:{
				cout<<"case3";
				int id;
				cout<<"Enter id to delete:";
				cin>>id;
				arr.deleteElement(id);
				break;
			}
			case 4:{
				cout<<"Display:\n";
				arr.displayElements();
				break;
			}
		}
	}while(exit!=1);
	return 0;
}