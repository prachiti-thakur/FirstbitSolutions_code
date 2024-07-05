#include <stdio.h>
#include <stdlib.h>
#include"book.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		Book* book;//create the ptr of malloc on stack
	book=createArray(size);
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
	 				addBook(book);
	 				break;
				}
			case 2:
				{
					removeBook(book);
					break;
				}
			case 3:{
				
					searchElement(book);
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