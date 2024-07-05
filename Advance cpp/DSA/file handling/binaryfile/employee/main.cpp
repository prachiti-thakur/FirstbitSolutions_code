#include "emp.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<fstream>
int main(){
	int choice;
	do{
		cout<<"1.write\n";
		cout<<"2.Read\n";
		cout<<"3.delete\n";
		cout<<"4.update\n";
		cout<<"0.Exit\n";
		cout<<"Enter the choice:";
		cin>>choice;
		
		switch(choice){
			
			case 1:{
				//write
				ofstream out("MyEmp.bin",ios_base::binary|ios_base::app);
				int id;
				char name[20];
				double salary;
				cout<<"Enter the id:";
				cin>>id;
				cin.ignore();
				cout<<"Enter the name:";
				cin.getline(name,20);
				cout<<"Enter the salary:";
				cin>>salary;
				
				Emp e(id,name,salary);
				out.write((char*)&e,sizeof(e));
				out.close();
				break;
			}
			case 2:{
				ifstream in("MyEmp.bin",ios_base::binary);
				Emp e;
				while(!in.eof()){
					in.read((char*)&e,sizeof(e));
					if(in.eof()){
						break;
					}
					e.display();
				}
				
				
				
				break;
			}
			case 3:{
				//delete
				ifstream in("MyEmp.bin",ios_base::binary);
				int count=0;
				Emp e;
				bool found=false;
				while(!in.eof()){
					in.read((char*)&e,sizeof(e));
					if(in.eof()){
						break;
					}
					count++;
				}
				in.close();
				
				
				Emp allEmp[count];
				int eid;
				cout<<"Enter the id:";
				cin>>eid;
				
				
				ifstream in1("MyEmp.bin",ios_base::binary);
				int i=0;
				while(!in1.eof()){
					in1.read((char*)&e,sizeof(e));
					if(in1.eof()){
						break;
					}
					else{
						if(e.getid()!=eid)
							{
							allEmp[i]=e;
							i++;
							}
						else{
							found=true;
						}
					
						
					}
					
				}
				in1.close();
				/*
				for(int i=0;i<count;i++){
					allEmp[i].display();
				}*/
				
				
				if(found==true){
					ofstream out("MyEmp.bin",ios_base::binary);
					out.write((char*)allEmp,sizeof(allEmp)-sizeof(e));
					out.close();
				}
				
				
				break;
			}
			case 4:{
				//update the record
				int count=0;
				ifstream in("MyEmp.bin",ios_base::binary);
				Emp e;
				while(!in.eof())
				{
					in.read((char*)&e,sizeof(e));
					if(in.eof())
					{
						break;
					}
					
					count++;
								
				}
				
				in.close();
				
				int i=0;
				Emp allEmp[count];
				int eid;
				cout<<"Enter the eid:";
				cin>>eid;
				bool found=false;
				ifstream in1("MyEmp.bin",ios_base::binary);
				while(!in1.eof()){
					in1.read((char*)&e,sizeof(e));
					if(in1.eof()){
						break;
					}
					if(eid==e.getid()){
						
						found=true;
						double salary;
						cout<<"Enter the updated salary:";
						cin>>salary;
						e.setSalary(salary);
						
						allEmp[i]=e;
						i++;
					}
					else{
						allEmp[i]=e;
						i++;
					}
					
				}//out of while	
				
				//overWrite
				if(found==true){
					ofstream out("MyEmp.bin",ios_base::binary);
					out.write((char*)allEmp,sizeof(allEmp));
					out.close();
				}
				
				break;
			}
		}//out of switch
		
	}while(choice!=0);
	return 0;
}