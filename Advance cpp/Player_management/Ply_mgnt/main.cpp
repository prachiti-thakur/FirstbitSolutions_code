#include"PlayerArr.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	PlayerArr Ply(10);
	Ply.displayPly();
	int choice;
	do{
		cout<<"\n\n===========================================================\n\n";
		cout<<"========Welcome to the Player management sytem=============\n";
		cout<<"0.Exit\n";
		cout<<"1.AddPlayer:\n";
		cout<<"2.Search Player:\n";
		cout<<"3.Delete Player:\n";
		cout<<"4.Update Player:\n";
		cout<<"5.Sort Players;\n";
		cout<<"6.Display All Player:\n";
		
		cout<<"Enter the choice:\n";
		cin>>choice;
		
		switch(choice){
			case 0:{
				cout<<"Thanks for visiting!!\n";
				break;
			}
			case 1:{
				int jn;
				char pname[20];
				int run;
				int wickets;
				int matches;
				cout<<"\nEnter the details of Players:\n";
				cout<<"Enter the jersy number:\n";
				cin>>jn;
				cout<<"Enter the name of player:\n";
				cin>>pname;
				cout<<"Enter the number of runs:\n";
				cin>>run;
				cout<<"Enter the number of wickets:\n";
				cin>>wickets;
				cout<<"Enter the number of matches:\n";
				cin>>matches;
				
				Player p(jn,pname,run,wickets,matches);
				Ply.addPly(p);
				break;
			}
			case 2:{
				int ch;
				cout<<"Enter the choice:";
				cin>>ch;
				switch(ch){
					case 1:{
							int jn;
							cout<<"Enter the jersy number:\n";
							cin>>jn;
							int i=Ply.searchPlyJn(jn);
							Ply.getPtr()[i].display();
						break;
					}
					case 2:{
						char name[20];
						cout<<"Enter the name:";
						cin>>name;
						int i=Ply.searchPlyName(name);
						Ply.getPtr()[i].display();
						break;
					}
					case 0:{
						cout<<"Exit";
						break;
					}
					default:{
						cout<<"Invalid Input\n";
						break;
					}
				}
				
				break;
			}
			case 3:{
				int jn;
				cout<<"Enter the jersy number:\n";
				cin>>jn;
				Ply.deletePly(jn);
				
				break;
			}
			case 4:{
				int jn;
				cout<<"Enter the jersy number:\n";
				cin>>jn;
				Ply.updatePly(jn);
				break;
			}
			case 5:{
				Ply.sort();
				break;
			}
			case 6:
			{
				Ply.displayPly();
				break;
			}
		}
		
	}while(choice!=0);
	return 0;
}