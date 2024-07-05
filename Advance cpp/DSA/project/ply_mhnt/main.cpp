#include"linklist.cpp"
int main(){
	LinkedList<Player> llp;
	int choice;
	do{
		cout<<"\n***********************Welcome******************************\n";
		cout<<"\n----------------Player Management System---------------------\n";
		cout<<"\t0.Exit\n";
		cout<<"\t1.insertBeg\n";
		cout<<"\t2.insertEnd\n";
		cout<<"\t3.insertAtPos\n";
		cout<<"\t4.DeleteBeg:\n";
		cout<<"\t5.deleteEnd:\n";
		cout<<"\t6.deleteAtPos\n";
		cout<<"\t7.deleteByData\n";
		/////////////////////////////////////////
		cout<<"\t8.search player by jersy No\n";
		cout<<"\t9.search player by jersyName\n";
		cout<<"\t10.update player details\n";
		cout<<"\t11.delete player\n";
		cout<<"\t12.sort the playes\n";
		cout<<"\t20.display\n";
		cout<<"#############################################################";
		cout<<"\n\nEnter the choice:";
		cin>>choice;
		switch(choice){
			case 0:{
				cout<<"exit!!\n";
				cout<<"Thanks for visit\n";
				
				break;
			}
			case 1:{
			
					int jersyNo;
					char name[20];
					int noRuns;
					int noWickets;
					int noMatches;
					
					cout<<"Enter the jersy no:";
					cin>>jersyNo;
					cout<<"Enter the name:";
					cin.ignore();
					cin.getline(name,20);
					cout<<"Enter the runs:";
					cin>>noRuns;
					cout<<"Enter the Wickets:";
					cin>>noWickets;
					cout<<"Enter the matches:";
					cin>>noMatches;
					
				Player ply(jersyNo,name,noRuns,noWickets,noMatches);
				
				llp.insertBeg(ply);
				break;
			}
			case 2:{
				
					int jersyNo;
					char name[20];
					int noRuns;
					int noWickets;
					int noMatches;
					
					cout<<"Enter the jersy no:";
					cin>>jersyNo;
					cout<<"Enter the name:";
					cin.ignore();
					cin.getline(name,20);
					cout<<"Enter the runs:";
					cin>>noRuns;
					cout<<"Enter the Wickets:";
					cin>>noWickets;
					cout<<"Enter the matches:";
					cin>>noMatches;
					
				Player ply(jersyNo,name,noRuns,noWickets,noMatches);
				
				llp.insertEnd(ply);
				
				break;
			}
			case 3:{int jersyNo;
					char name[20];
					int noRuns;
					int noWickets;
					int noMatches;
					int pos;
					cout<<"Enter the position:\n";
					cin>>pos;
					cout<<"Enter the jersy no:";
					cin>>jersyNo;
					cout<<"Enter the name:";
					cin.ignore();
					cin.getline(name,20);
					cout<<"Enter the runs:";
					cin>>noRuns;
					cout<<"Enter the Wickets:";
					cin>>noWickets;
					cout<<"Enter the matches:";
					cin>>noMatches;
					
				Player ply(jersyNo,name,noRuns,noWickets,noMatches);
				
				llp.insertAtPos(ply,pos);
				
				break;
			}
			case 4:{
				llp.deleteBeg();
				break;
			}
			case 5:{
				llp.deleteEnd();
				break;
			}
			case 6:{
				int pos;
				cout<<"Enter the positon to delete:";
				cin>>pos;
				llp.deleteAtPos(pos);
				break;
			}
			case 7:{
				int id;
				cout<<"Enter the jersynumber:";
				cin>>id;
				llp.deleteByData(id);
				break;
			}
			//////////////////////////
			case 8:{
				int id;
				cout<<"Enter the jersynumber:";
				cin>>id;
				Node<Player>* nodeAdd=llp.searchByJersy(id);
			
				if(nodeAdd!=NULL){
					cout<<"|_Jersy NO__|______Name_____|__Runs__|Wickets_|Matches_|\n";
					nodeAdd->getPly().display();
				}
				else{
					cout<<"player not found!!\n";
				}
				break;
			}
			case 9:{
				char name[20];
				cout<<"Enter the name wants to search:";
				cin.ignore();
				cin.getline(name,20);//to accept the space
				Node<Player>* nodeAdd=llp.searchByName(name);
				if(nodeAdd!=NULL){
					cout<<"|_Jersy NO__|______Name_____|__Runs__|Wickets_|Matches_|\n";
					nodeAdd->getPly().display();
				}
				else{
					cout<<"Player not found!!\n";
				}
				
				break;
			}
			case 10:{
				llp.update();
				break;
			}
			case 11:{
				int jrno;
				cout<<"Enter jersy number to delete:";
				cin>>jrno;
				llp.deleteById(jrno);
				break;
			}
			case 12:{
				llp.sort();
				break;
			}
			case 20:{
				//printf("%10d|%15s|%5d|%5d|%5d");
				cout<<"|______________________Players_________________________|\n";
				cout<<"|_Jersy NO__|______Name_____|__Runs__|Wickets_|Matches_|\n";
				cout<<"|___________|_______________|________|________|________|\n";
				llp.display();
				break;
			}
		}
		
	}while(choice!=0);
	return 0;
}