//book management system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int size=2;
int id=3;
int main() {
	
	Book* book;//create the ptr on stack
	book=createArray();
	//book=M_Book;
	 int choice;
	 do{
	 	
	 	printf("\n\n****************___welcome to the Book Management system___***********************\n\n");
	 	
	 	printf("\n\n");
	 	
	 	printf("0.Exit\n");
	 	printf("1.Add Book\n");
	 	printf("2.Remove Book\n");
	 	printf("3.Search Book\n");
	 	printf("4.Show Book(Author)\n");
	 	printf("5.Show Book(Category)\n");
	 	printf("6.Update Book\n");
	 	printf("7.Display Sorted\n");
	 	printf("8.Display all Books\n");
	 	
	 	printf("\n\n");
	 	printf("Enter Choice:");
	 	scanf("%d",&choice);
	 	
	 	switch(choice){
	 		case 1:
	 			{
	 				
					book=addBook(book);	//update book value with updated ptr
	 				//update the pointer value to new value otherwises for everytime it takes malloc created aray 
	 				//we want address pass to addbook is ==>just previously created /updateds
	 				//jar free karych asel tar new valur assign karychya adhi 
	 				//free(book); -->dont do it gives garbage for inital valuess
	 			
	 				//for free()-->as we dont want now malloc created value we can free it but realloc change the address only when in continution it will not get required memory 
	 				//other wise it will not change the address so if we delete the free(newbook)then it will delete the data
	 				break;
				}
			case 2:
				{
					
					removeBook(book);
					break;
				}
			case 3:{
				
				int s=searchElement(book);
						if(s!=(-1) && s!=(-2)){
									printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
									printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
									printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
					
							
							display(book,s);
						}else{
										if(s==(-2)){
										printf("Invalid choice!!");
										}else{
										printf("Id not found!!");
										}
							
						}
					break;
					}
			case 4:{
					showAuthor(book);
					break;
					}
			case 5:
				{
					showCat(book);
					break;
				}
			case 6:
				{
					updateB(book);
					break;
				}
			case 7:
				{
					SortBook(book);
					break;
				}
			case 8:
				{
					displayAll(book);
					break;
				}
			case 0:{
					printf("Thanks for visit!!");
					break;
				}
			default:
			{
				printf("Invalid Input!!Please try again!!");
				break;
			}
		 }
	 }while(choice!=0);
	
	
	return 0;
}