//5. Movie Database: Create a program that uses structures to manage a movie 
//database with details like title, director, release year, and genre. Allow users 
//to add, search for, and update movie records

#include<stdio.h>
#include<string.h>
typedef struct movie{
	char title[50];
	char director[50];
	int release_year;
	char genre[50];
}movie;

void display_movie(int,movie*);
void display_all(movie*,int);

void main(){
	movie miv[20];
	int n=0;
	int choice;
	do{
		printf("0.Exit\n1.add\n2.search\n3.update_records\n4.display\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 0:{
				printf("Thanks for visit!!");
				break;
			}
			case 1:
				{
					int num;
					printf("Enter the number of movies wants to enters:");
					scanf("%d",&num);
					for(int i=n;i<(n+num);i++){
						printf("Enter the movie details:\n");
						fflush(stdin);
						char tit[50];
						printf("Enter the title:");
						gets(tit);
						
						strcpy(miv[i].title,tit);
						
						fflush(stdin);
						
						char dir[50];
						printf("Enter the director:");
						gets(dir);
						strcpy(miv[i].director,dir);
						
						int rel_y;
						printf("Enter the release year:");
						scanf("%d",&rel_y);
						miv[i].release_year=rel_y;
						
						fflush(stdin);
						char grn[50];
						printf("Enter the genre:");
						gets(grn);
						strcpy(miv[i].genre,grn);
						printf("\n");
					}
					//update n==>
					n=n+num;
					
					break;
				}
				case 2:
					{
						//search
						fflush(stdin);
						printf("Enter the title to search:");
						char tit_m[50];
						gets(tit_m);
						int flag=0;
						for(int i=0;i<n;i++){
							int c=strcmp(miv[i].title,tit_m);
							if(c==0){
								flag=1;
//								//display
//								printf("Title:%s\n",miv[i].title);
//								printf("Director:%s\n",miv[i].director);
//								printf("Release Year :%d\n",miv[i].release_year);
//								printf("Genre:%s\n",miv[i].genre);
								display_movie(i,miv);
								
								break;//as got stop search
							}
						}//out of for loop
						
						if(flag==0){
							printf("Moive not found!!");
						}
						
						break;
					}
				case 3:{
					//update 
					fflush(stdin);
					char t[50];
					int flag=0;
					printf("Enter the movie title wants to change:");
					gets(t);
					int i;
					for(i=0;i<n;i++){
						if(strcmp(miv[i].title,t)==0){
							flag=1;
											printf("1.title\n2.director\n3.Release Year\n4.genre\n");
												int c;
												scanf("%d",&c);
												switch(c){
													case 1:
														{	fflush(stdin);
															char title[50];
															printf("Enter the new title:");
															gets(title);
															strcpy(miv[i].title,title);
															display_movie(i,miv);
															break;
														}
													case 2:{
														fflush(stdin);
														char direct[50];
														printf("Enter the new director:");
														gets(direct);
														strcpy(miv[i].director,direct);
														display_movie(i,miv);
														break;
													}
													case 3:{
														int r_year;
														printf("Enter the new year:");
														scanf("%d",&r_year);
														miv[i].release_year=r_year;
														display_movie(i,miv);
														break;
													}
													case 4:{
														fflush(stdin);
														char g[50];
														printf("Enter the new genre:");
														gets(g);
														strcpy(miv[i].genre,g);
														display_movie(i,miv);
														break;
													}
													default:
														{
															printf("Invalid Input!!");
															break;
														}
												}
											
											//break the for loop	
											break;
						}//if in for
					}//end for
					
					//display updated movie
					
				
				if(flag==0){
					printf("Movie not found!!");
				}
					break;
				}
			case 4:{
				 display_all(miv,n);
				break;
			}
			default:{
				printf("Invalid choice!!");
				break;
			}
		}
	}while(choice!=0);
}

void display_movie(int i,movie*miv){
	
								printf("Title:%s\n",miv[i].title);
								printf("Director:%s\n",miv[i].director);
								printf("Release Year :%d\n",miv[i].release_year);
								printf("Genre:%s\n",miv[i].genre);
	}
	
	
void display_all(movie* miv,int n){
	for(int i=0;i<n;i++){
								printf("Title:%s\n",miv[i].title);
								printf("Director:%s\n",miv[i].director);
								printf("Release Year :%d\n",miv[i].release_year);
								printf("Genre:%s\n",miv[i].genre);
								printf("\n");
	}
}