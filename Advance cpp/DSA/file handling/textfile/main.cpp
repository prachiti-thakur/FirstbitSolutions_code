#include<iostream>
#include<fstream>
using namespace std;
int main(){
		int choice;
	do{
		cout<<"0.Exit\n";
		cout<<"1.write emp\n";
		cout<<"2.read emp\n";
		cout<<"3.delete emp\n";
		cout<<"4.update emp\n";
		cout<<"enter the choice:";
	
		cin>>choice;
		switch(choice){
			case 1:{
				ofstream out("myemp.txt",ios::app);
				int no;
				cout<<"Enter the no of emp wants to enters:";
				cin>>no;
				int i=1;
				
				int id;
				char name[20];
				double salary;
				
				while(i<=no){
				cout<<"Enter id:";
				cin>>id;
				cout<<"Enter name:";
				cin.ignore();
				cin.getline(name,20);
				cout<<"Enter salary:";
				cin>>salary;
				
				out<<id<<"\n";
				out<<name<<"\n";
				out<<salary<<"\n";
				i++;
				}
				
				out.close();
				break;
			}
				case 2:{
					ifstream in("myemp.txt");
				int id;
				char name[20];
				double salary;
				
					
					while(!in.eof()){
						in>>id;
						in.ignore();
						in.getline(name,20);
						in>>salary;
						
						if(!in.eof()){
							cout<<id<<"\n";
						cout<<name<<"\n";
						cout<<salary<<"\n";
						cout<<"Read successfully\n\n";
						}
					}
					break;
				
			}
			case 3:{
				//delete
				ifstream in("myemp.txt");
				ofstream out("mynewEmp.txt");
				
				int id;
				char name[20];
				double salary;
				int i;
				cout<<"Enter the id wants to delete:";
				cin>>i;
				while(!in.eof())
				{
					//read from myemp
					in>>id;
					in.ignore();
					in.getline(name,20);
					in>>salary;
					
					//write into mynew emp by skipng the match id
					if(!in.eof()){
						if(i!=id){
							out<<id<<"\n";
							out<<name<<"\n";
							out<<salary<<"\n";
							cout<<"Wrote successfully\n\n";
						}	
					}
				}
				out.close();
				in.close();
				//copy mynewemp into myemp
				ifstream inEmp("mynewEmp.txt");
				ofstream outEmp("myemp.txt");
				while(!inEmp.eof()){
					inEmp>>id;
					inEmp.getline(name,20);
					inEmp>>salary;
					
					
					if(!inEmp.eof()){
						outEmp<<id<<"\n";
						outEmp<<name<<"\n";
						outEmp<<salary<<"\n";
						cout<<"Written successfully\n\n";
					}
				}
				cout<<"Deleted successfully\n\n";
				outEmp.close();
				inEmp.close();
				
				break;
			}
			case 4:{
				
				break;
			}
		}
	}while(choice !=0);
	return 0;
}

int mainEmp(){
	int id;
	char name[20];
	double salary;
	int i=1;
	ofstream out("mydata.txt");
	while(i<4){
		cout<<"enter id:";
		cin>>id;
		cin.ignore();
		cout<<"Enter the name:";
		cin.getline(name,20);
		cout<<"Enter the salary:";
		cin>>salary;
		
		
		out<<id<<"\n"<<name<<"\n"<<salary<<"\n";
		i++;
	}
	out.close();
	ifstream in("mydata.txt");
	while(!in.eof()){
		in>>id;
		in.ignore();
		in.getline(name,20);
		in>>salary;
		if(!in.eof()){
			cout<<id<<"\n";
			cout<<name<<"\n";
			cout<<salary<<"\n";
		}
	}

		
	return 0;
}
int maindata(){
	ofstream out("mydata.txt");
	char data[20];
	do{
		cout<<"press $ to stop\n";
		cout<<"Enter the data :";
		cin.getline(data,20);
		//cout<<data[0]<<"\n";
		if(data[0]=='$'){
			break;
		}
		else{
			out<<data<<"\n";
		}
		
	}while(data[0]!='$');
	out.close();
	
	ifstream in("mydata.txt");
	while(!in.eof()){
		in.getline(data,20);
		cout<<data<<"\n";
	}
	
	return 0;
}
int mainreadWrite(){
	int x=10;
	char name[20]="prachiti";
	double data=56.89;
	ofstream out("mytext.txt");
	out<<x<<" "<<name<<" "<<data;
	out.close();
	ifstream in("mytext.txt");
	in>>x>>name>>data;
	in.close();
	cout<<x<<" "<<name<<" "<<data;
	return 0;
}
int mainwrite(){
	ofstream out("mytext.txt");
	out<<"hello everyone!!\n";
	out<<"lets learn file handling!!\n";
	out.close();
	return 0;
	
}