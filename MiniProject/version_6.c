
/*
decoration
remove extra comments
case

id-->autoincrement
*/
//book management system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//create  structure of book 
//declaration of structure
typedef struct Book{
	int bookId;
	char bookName[50];
	char author[50];
	char category[50];
	double price;
	double rating;
}Book;

//function declaration
Book* createArray(int);
void addBook(Book*);
void displayAll(Book*);
int searchElement(Book*);
void display(Book*,int);
void removeBook(Book*);
void showAuthor(Book*);
void showCat(Book*);
void updateB(Book*);
void SortBook(Book*);
//globle variable declaration
//Book* book; ->can't give access of entire database to user  -->here pointer is on  global and static
int size=20;
int n=2;//to maintain the updated index(after adding the book) so next book must be add into next empty index not from start
//(initially by default zero)
int id=3;//auto increment as already 2 element was there so next id will be 3

//fill the array initially with some values
//main
void main(){
	
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
}




//function defination
Book* createArray(int n){
	
	Book* M_Book=(Book*)malloc(n*sizeof(Book));
	//fill array here
	//whenever it is pointer to array treat it as array
	M_Book[0].bookId=1;
	strcpy(M_Book[0].bookName,"Think Positive");
	strcpy(M_Book[0].author,"XYz");
	strcpy(M_Book[0].category,"Fictional");
	M_Book[0].price=450;
	M_Book[0].rating=1.3;
	
	
	M_Book[1].bookId=2;
	strcpy(M_Book[1].bookName,"BKULA");
	strcpy(M_Book[1].author,"sudha murty");
	strcpy(M_Book[1].category,"Fictional");
	M_Book[1].price=550;
	M_Book[1].rating=2.3;
	
	
	return M_Book;
}

void addBook(Book* book){
	int num;
	printf("Enter the number of books wants to enter:");
	scanf("%d",&num);
	
	//num is always less than size of array
	if(size>num+n){
		
		for(int i=n;i<(n+num);i++){
			
				printf("\n\nEnter the details of BooK:\n\n");
//				printf("Enter Book id:");
//				scanf("%d",&book[i].bookId);

				book[i].bookId=id;
				printf("Book Id:%d\n",id);
				id++;
				
				fflush(stdin);
				printf("Enter the Name:\n");
				gets(book[i].bookName);
				
				fflush(stdin);
				printf("Enter the Author:");
				gets(book[i].author);
				
				printf("Category:\n\t1.Fictional\n\t2.Non.Fictional\n");
				int cat;
				printf("Enter Category:");
				scanf("%d",&cat);
				if(cat==1){
					strcpy(book[i].category,"Fictional");
				}
				else{
					if(cat==2){
						strcpy(book[i].category,"Non-Fictional");
						}
					else{
						
						printf("\nInvalid choice\n!!");
						
						//give one more chance 
						printf("Category:\n\t1.Fictional\n\t2.Non.Fictional\n");
								int cat;
								printf("Enter Category:");
								scanf("%d",&cat);
								if(cat==1){
									strcpy(book[i].category,"Fictional");
								}
								else{
									if(cat==2){
										strcpy(book[i].category,"Non-Fictional");
										}
									else{
										strcpy(book[i].category,"Invalid choice");
										}
									}
					}
				}
				
				printf("Enter price:");
				scanf("%lf",&book[i].price);
				
				float rate;
				printf("Enter Rating:");
				scanf("%f",&rate);
				if(rate<=5.0)
					book[i].rating=rate;
				else{
					printf("Please Enter rating within 0 to 5!!");
					//give chance to put rating again
						printf("Enter Rating:");
						scanf("%f",&rate);
							if(rate<=5)
								book[i].rating=rate;
				}
				
				printf("\n");	
				
				printf("\nSuccessfully added the Book!!");	
		}
		n=n+num;//to update insert index
		
		
	}else{
		printf("Insufficient Storage!!\n\n");
	}

	
}


void displayAll(Book* book){

		
		printf("\n***************************--------All_BOOKS------***********************************\n");
		printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
		printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
		for(int i=0;i<n;i++){
			printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
			printf("|%-9d|%17s|%17s|%17s|%10.2lf|%10.1lf|\n",book[i].bookId,book[i].bookName,book[i].author,book[i].category,book[i].price,book[i].rating);
			
		}
		printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
		
	
}


void removeBook(Book* book){
//	int b_id;
//	//int flag=0;
//	printf("Enter the Book_id want to remove:");
//	scanf("%d",&b_id);
//		//int i;
//	for(i=0;i<n;i++){
//		//if book found shift ele 
//		if(book[i].bookId==b_id){
//			flag=1;
//			display(book,i);//as we get display it
//			
//			
//			//shift elements
//			for(int j=i;j<(n-1);j++){
//					book[j] = book[j+1];
//			}
//			break;
//			
//		}
//	}//after for loop

//	

	//printf("i:%d",i);
	//display(book,i); here updted book hai toh now that index containt info of next index element so as we got that element ,1st display it 
	//n=n-1;//update the last index globally
	//printf("successfully remove the book!!");


int index=searchElement(book);

if(index!=(-1) && index!=(-2)){
	//display n shift
	display(book,index);
	//shift
	for(int i=index;i<(n-1);i++)// n-1  --> to avoid access of the garbage value and shifting
	{
		book[i]=book[i+1];//shfting till n-1
	}//outside for
		n=n-1;////update the current size
		printf("successfully remove the book!!");
}else{
	if(index==(-2)){
		printf("Invalid choice!!");
	}else{
		printf("Id not found!!");
	}
	
}
	
}


int searchElement(Book* book){
	
	int flag=0;
	printf("1.search by bookId \n2.search by name:\n");
	int cho;
	printf("Enter the choice:");
	scanf("%d",&cho);
	
	if(cho==1){
		int b_id;
		printf("Enter the book id:");
		scanf("%d",&b_id);
		
		for(int i=0;i<n;i++){
			if(book[i].bookId==b_id){
				
					flag=1;
//						printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//					printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
//					printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//					
				
					//display(book,i);
					return i;
					//break;
			}
		}//end for 
		if(flag==0){
			//printf("not found!!");
			return -1;
		}
		
	}else{
		if(cho==2){
			
			fflush(stdin);
			char b_name[20];
			printf("Enter the Bookname you want to search:");
			//scanf("%s",&b_name);
			gets(b_name);
			
			for(int i=0;i<n;i++){
				if(strcasecmp(book[i].bookName,b_name)==0){
					
					flag=1;
					
//					printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//					printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
//					printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
					
					//display(book,i);
					return i;
				//	break;
					
						}
			
			}//end for
			
			if(flag==0){
					//printf("not found!!");
					return -1;
				}		
		}//if choice other than 1 and 2
		else{
		//	printf("Invalid choice!!");
		return -2;//for invalid choice
		}
		
	}
	
	
	
}

//display one element
void display(Book* b,int i){
	
//					printf("\n\nBook information %d:\n",i+1);//i start from 0 so i+1
//					printf("\n\n");
//					printf("Id Book:%d\n",b[i].bookId);
//					printf("bookname:");
//					puts(b[i].bookName);
//					printf("Author:");
//					puts(b[i].author);
//					printf("category:%s\n",b[i].category);
//					printf("price:%lf\n",b[i].price);
//					printf("rating:%lf\n",b[i].rating);
//					
//					printf("\n***************************\n");	


	
	
			printf("|%-9d|%17s|%17s|%17s|%10.2lf|%10.1lf|\n",b[i].bookId,b[i].bookName,b[i].author,b[i].category,b[i].price,b[i].rating);
			printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
}



//show book by author
void showAuthor(Book* book){
	
	fflush(stdin);
	char r_author[20];
	printf("Enter the author to see his/her books:");
	gets(r_author);
	
	int flag=0;
	
		printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
		printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
			printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
	
	for(int i=0;i<n;i++){
		if(strcmp(book[i].author,r_author)==0){
			//to show the found book
			display(book,i);
			
			flag=1;
		}
	}
	
	//if condition in for loop never true
	if(flag==0){
		printf("\nNot found!!\n");
	}
}




//show book by category
void showCat(Book* book){
	fflush(stdin);
	int flag=0;
	char R_cat[50];
	printf("following Categories are available:\n1.fictinal\n2.nonfictional\n");
	int R;
	
	printf("Enter the category(1/2):");
	scanf("%d",&R);

	
		printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
		printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
		printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
	
	
	for(int i=0;i<n;i++){
		{
				
			if(R==1){
				if(strcmp(book[i].category,"Fictional")==0){
					display(book,i);//display that element
					flag=1;	
				}		
			}
			else{
				if(R==2){
						if(strcmp(book[i].category,"Non-Fictional")==0){
							display(book,i);//display that structure element
							flag=1;	
					}
				}else{
					printf("invaild Input!!");
				}
			}
		}
	}
	
	//out of for loop
	if(flag==0){
		printf("Book Not found!!");
	}
	
}

//update
void updateB(Book* book){
	
//	int B_id;
//	printf("Enter the Book_id:");
//	scanf("%d",&B_id);
	
//	int flag=0;
	//if book_id found then only ask for the choice
//	for(int k=0;k<n;k++){
//		
//		if(book[k].bookId==B_id){
//			flag=1;
//				int c;
//				printf("Enter the choice:\n1.price\n2.ratings\n");
//				scanf("%d",&c);
//	
//				if(c==1){
//					double up_price;
//					printf("Enter the updated price:");
//					scanf("%lf",&up_price);
//					
//					//search that book by id and then update the value
//					int i;
//				
//					for(i=0;i<n;i++){
//						if(book[i].bookId==B_id){
//							book[i].price=up_price;
//						
//							break;
//						}
//					}
//				
//						printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//		printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
//			printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//					//show book after update
//					display(book,i);
//		
//		
//		
//						}else{
//							if(c==2){
//								double up_rating;
//								printf("Enter the updated rating:");
//								scanf("%lf",&up_rating);
//								//search book by id
//								int i;
//								
//								for(i=0;i<n;i++){
//									if(book[i].bookId==B_id){
//											book[i].rating=up_rating;
//											
//											break;
//									}
//									
//								}
//						
//						
//							printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//							printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
//							printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
//						
//								
//								//show updated book
//								display(book,i);
//									
//			
//								}else{
//									printf("Invalid Input!!");
//								}
//						}
//						
//		}//if id not found
//		
//	}//end outer for
//	
//	if(flag==0){
//		printf("book is not found!!");
//	}

int index=searchElement(book);
if(index!=(-1) && index!=(-2))
{
	//ask for price or rating
		int c;
		printf("Enter the choice:\n1.price\n2.ratings\n");
		scanf("%d",&c);
		
		if(c==1){
			//ask user for updated price
			double up_price;
			printf("Enter the updated price:");
			scanf("%lf",&up_price);
			
			//update price  //index contain the elemts index 
			book[index].price=up_price;
			//display updated book
			
			
					printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
					printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
					printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
				
						
						//show updated book
						display(book,index);
			
			
		}else{
			if(c==2){
				
					double up_rating;
					printf("Enter the updated rating:");
					scanf("%lf",&up_rating);
					//update ratings
					
						book[index].rating=up_rating;
						
						//display the updated book data
						
							printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
							printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
							printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
				
						
						//show updated book
						display(book,index);
						
					
					
			}else{
				printf("Invalid Input");
			}
		}
	
	
}else{
	//printf("Book not found!!");
				if(index==(-2)){
				printf("Invalid choice!!");
				}else{
				printf("Id not found!!");
				}
}

}

//sorting
void SortBook(Book* book){
	
	
		//create new array and copy all value into that
		
		Book Brr[size];
		
		for(int i=0;i<size;i++){
			Brr[i]=book[i]; //we can assign structure to same structure variable
		}
		
	
		//will opearte sorting operations on new structure array (copied)
		int choi;
		printf("Enter the choice:\t1.By price\t2.By Rating\n");
		scanf("%d",&choi);
		
		switch(choi){
			case 1:
				
				{//price
					int c;
					printf("Enter the choice:\t1.Ascending(low to high)\t2.Descending(high to low)\n");
					scanf("%d",&c);
					
					if(c==1)
					{     
						for(int i=0;i<(n-1);i++){
						
						for(int j=i+1;j<n;j++){
							
									if(Brr[i].price>Brr[j].price){
										
										//here we are shifting  only price so, have to shift entire element
										Book temp=Brr[i];//create temp variable of Book struct
										Brr[i]=Brr[j];
										Brr[j]=temp;
									
										
									}
								}//end j
						
							}//end i
							
							//after sorting
						
							int last=n-1;
							//printf("last%d\n",last);
							//printf("n:%d",n);
							printf("Lowest_price:%lf\n",Brr[0].price);
							printf("highest_price:%lf\n",Brr[last].price);
							
							
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
								printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
							
							//display_all();
							for(int i=0;i<n;i++){
								
								display(Brr,i);
							//	printf("*******************************");
							}
					}
					else{
						if(c==2){
							//descending
							for(int i=0;i<(n-1);i++){
								for(int j=i+1;j<n;j++){
									if(Brr[i].price<Brr[j].price){
											//here we are shifting  only price so, have to shift entire element
										Book temp=Brr[i];
										Brr[i]=Brr[j];
										Brr[j]=temp;
									}
								}
							}
							//after sorting 
							int last=n-1;
							printf("highest_price:%lf\n",Brr[0].price);
							printf("Lowest_price:%lf\n",Brr[last].price);
							
							
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
								printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
							
							
							for(int i=0;i<n;i++){
								display(Brr,i);
							//	printf("*******************************");
							}
							 
						}else{
							printf("Invalid Input!!");
						}
					}//if else
					
					break;//switch case
				}
			case 2:
				
				{
					//rating
					int c;
					printf("Enter the choice:\t1.Ascending(low to high)\t2.Descending(high to low)\n");
					scanf("%d",&c);
					
					if(c==1)
					{
						for(int i=0;i<n;i++){
						
						for(int j=i+1;j<n;j++){
							
									if(Brr[i].rating>Brr[j].rating){
										Book temp=Brr[i];
										Brr[i]=Brr[j];
										Brr[j]=temp;
									}
								}//end j
						
							}//end i
							
							//after  sorting
							int last=n-1;
							printf("Lowest_price:%lf\n",Brr[0].price);
							printf("highest_price:%lf\n",Brr[last].price);
							
							
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
								printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
							
							
							for(int i=0;i<n;i++){
								display(Brr,i);
								//printf("*******************************");
							}
							
							
					}
					else{
						if(c==2){
							//descending
							for(int i=0;i<n;i++){
								for(int j=i+1;j<n;j++){
									if(Brr[i].rating<Brr[j].rating){
										Book temp=Brr[i];
										Brr[i]=Brr[j];
										Brr[j]=temp;
									}
								}
								
								//after sorting
							int last=n-1;
							printf("highest_price:%lf\n",Brr[0].price);
							printf("lowest_price:%lf\n",Brr[last].price);
							
							//print sorted list
							
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
								printf("+ Book Id +    Book Name    +    Book Author  +     Category    +   Price  +  Rating  +\n");
								printf("+---------+-----------------+-----------------+-----------------+----------+----------+\n");
							
							
									for(int i=0;i<n;i++){
										display(Brr,i);
									//	printf("*******************************");
									}
							
									
							}
						}else{
							printf("\nInvalid Input in sort!!");
						}
					}//if else
					break;
			}
			default :
				{
					printf("\nInvalid Input in sort!!");
				}
		}
		
	}