#include"book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int size=20;
int n=2;//to maintain the updated index(after adding the book) so next book must be add into next empty index not from start
//(initially by default zero)
int id=3;//auto increment as already 2 element was there so next id will be 3

void main() {
//	int n;
//	printf("Enter the n:");
//	scanf("%d",&n);
	
	//no need to pass size of array to every function(assign n to global variable)
//	size=n;
	//store the address of malloc arry into global variable 
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
}