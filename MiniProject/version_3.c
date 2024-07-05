
/*

search fun-->with return i
*/

//book management system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//create  structure of book 
//declaration of structure
typedef struct Book{
	int bookId;
	char bookname[50];
	char author[50];
	char category[50];
	double price;
	double rating;
}Book;

//function declaration
Book* createArray(int);
void addBook();
void display_all();
int search_element();
void display(Book*,int);
void remove_book();
void show_author();
void show_cat();
void update_B();
void Sort_book();

//globle variable declaration
//Book* book; ->can't give access of entire database to user  -->here pointer is on  global and static
int size=20;
int n=4;//to maintain the updated index(after adding the book) so next book must be add into next empty index not from start
//(initially by default zero)

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
	 	
	 	printf("\n\nwelcome to the Book Management system!!\n\n");
	 	
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
					remove_book(book);
					break;
				}
			case 3:{
				
					int index=search_element(book);
					break;
					}
			case 4:{
					show_author(book);
					break;
					}
			case 5:
				{
					show_cat(book);
					break;
				}
			case 6:
				{
					update_B(book);
					break;
				}
			case 7:
				{
					Sort_book(book);
					break;
				}
			case 8:
				{
					display_all(book);
					break;
				}
			case 0:{
					printf("Thanks for visit!!");
					break;
				}
			default:
			{
				printf("Invalid Input in switch!!");
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
	strcpy(M_Book[0].bookname,"Think Positive");
	strcpy(M_Book[0].author,"XYz");
	strcpy(M_Book[0].category,"Fictional");
	M_Book[0].price=450;
	M_Book[0].rating=1.3;
	
	
	M_Book[1].bookId=2;
	strcpy(M_Book[1].bookname,"BKULA");
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
				printf("Enter Book id:");
				scanf("%d",&book[i].bookId);
				
				fflush(stdin);
				printf("Enter the Name:\n");
				gets(book[i].bookname);
				
				fflush(stdin);
				printf("Enter the Author:");
				gets(book[i].author);
				
				printf("Category:\n\t1.Fictional\n\t2.Non.Fictional\n");
				int cat;
				printf("Enter Category:");
				scanf("%d",&cat);
				if(cat==1){
					strcpy(book[i].category,"Frictional");
				}
				else{
					strcpy(book[i].category,"Non-Frictional");
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
		n=n+num;
		
		
	}else{
		printf("Insufficient Storage!!\n\n");
	}

	
}


void display_all(Book* book){
	//n -->last updated index
		printf("\n****************All_BOOKS********************\n");
	for(int i=0;i<n;i++){
		
	
		printf("\n\nBook information %d:\n",i+1);
		printf("\n\n");
		printf("Book Id:%d\n",book[i].bookId);
		printf("bookname:");
		puts(book[i].bookname);
		printf("Author:");
		puts(book[i].author);
		printf("category:%s\n",book[i].category);
		printf("price:Rs.%lf\n",book[i].price);
		printf("rating:%lf\n",book[i].rating);
		
		printf("\n***************************\n");
		
	}
}

/*

remove_Book(){
	int r_book;
	printf("Enter the bookId wants to remove:");
	scanf("%d",r_book);
	
	
}
*/

void remove_book(Book* book){
	int b_id;
	printf("Enter the Book_id want to remove:");
	scanf("%d",&b_id);
	
	int i=search_element(book);
	
	
	//shift elem from that i]
	for(int k=i;k<(n-1);k++){
		book[k]=book[k+1];
	}
	
	
	
//		int i;
//	for(i=0;i<n;i++){  //while checking check entire
//		//if book found shift ele 
//		if(book[i].bookId==b_id){
//			for(int j=i;j<(n-1);j++){  //while shifting check n-1 bcz we are accessing next index
//					book[j] = book[j+1];
//			}
		
//			book[i].bookId=book[i+1].bookId;
//			strcpy(book[i].bookname,book[i+1].bookname);
//			strcpy(book[i].author,book[i+1].author);          //here shift only one ele --need to shift entire array until n
//			strcpy(book[i].category,book[i+1].category);
//			book[i].price=book[i+1].price;
//			book[i].rating=book[i+1].rating;   
//break 
//			}
//	}//after for loop
	display(book,i);
	n=n-1;//update the last index globally
	printf("successfully remove the book!!");
}


int search_element(Book* book){
	
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
					/*
					printf("\n\nBook information %d:\n",i+1);
					printf("\n\n");
					printf("Add Book:%d\n",book[i].bookId);
					printf("bookname:%s\n",book[i].bookname);
					printf("Author:");
					puts(book[i].author);
					printf("category:%s\n",book[i].category);
					printf("price:%lf\n",book[i].price);
					printf("rating:%lf\n",book[i].rating);
					
					printf("\n***************************\n");
					*/
					//display(book,i);
					//return that index so can to search ele we can this function in any other function
					return i;
					break;
			}
		}//end for 
		if(flag==0){
			printf("not found!!");
		}
		
	}else{
		if(cho==2){
			
			fflush(stdin);
			char b_name[20];
			printf("Enter the Bookname you want to search:");
			//scanf("%s",&b_name);
			gets(b_name);
			
			for(int i=0;i<n;i++){
				if(strcasecmp(book[i].bookname,b_name)==0){
					
					flag=1;
					/*
					printf("\n\nBook information %d:\n",i+1);
					printf("\n\n");
					printf("Add Book:%d\n",book[i].bookId);
					printf("bookname:%s\n",book[i].bookname);
					printf("Author:");
					puts(book[i].author);
					printf("category:%s\n",book[i].category);
					printf("price:%lf\n",book[i].price);
					printf("rating:%lf\n",book[i].rating);
					
					printf("\n***************************\n");
					*/
					
					//display(book,i);  
					
				//	break;  -->display all book of that name
					
				//	-->return i here i will the index of 1st occurance
			
					return i;
						}
			
			}//end for
			
			if(flag==0){
					printf("not found!!");
				}		
		}//if choice other than 1 and 2
		else{
			printf("Invalid choice!!");
		}
		
	}
	
	
	
}

//display one element
void display(Book* b,int i){
	
					printf("\n\nBook information %d:\n",i+1);//i start from 0 so i+1
					printf("\n\n");
					printf("Id Book:%d\n",b[i].bookId);
					printf("bookname:");
					puts(b[i].bookname);
					printf("Author:");
					puts(b[i].author);
					printf("category:%s\n",b[i].category);
					printf("price:%lf\n",b[i].price);
					printf("rating:%lf\n",b[i].rating);
					
					printf("\n***************************\n");				
}



//show book by author
void show_author(Book* book){
	
	fflush(stdin);
	char r_author[20];
	printf("Enter the author to see his/her books:");
	gets(r_author);
	
	int flag=0;
	
	for(int i=0;i<n;i++){
	//	printf("for loop\n");
	
		if(strcasecmp(book[i].author,r_author)==0){
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
void show_cat(Book* book){
	fflush(stdin);
	int flag=0;
	char R_cat[50];
	printf("following Categories are available:\n1.fictinal\n2.nonfictional\n");
	int R;
	
	printf("Enter the category(1/2):");
	scanf("%d",&R);
	//scanf("%s",&R_cat);
	//gets(R_cat);
	
	
	for(int i=0;i<n;i++){
		{
				
			if(R==1){
				if(strcmp(book[i].category,"Frictional")==0){
					display(book,i);//display that element
					flag=1;	
				}		
			}
			else{
				if(R==2){
						if(strcmp(book[i].category,"Non-Frictional")==0){
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
		printf("Not found!!");
	}
	
}

//update
void update_B(Book* book){
	
	int B_id;
	printf("Enter the Book_id:");
	scanf("%d",&B_id);
	
	int c;
	printf("Enter the choice:\n1.price\n2.ratings\n");
	scanf("%d",&c);
	
	if(c==1){
		double up_price;
		printf("Enter the updated price:");
		scanf("%lf",&up_price);
		
		book[B_id].price=up_price;
		
		//show book after update
		display(book,B_id);
		
		
		
	}else{
		if(c==2){
			double up_rating;
			printf("Enter the updated rating:");
			scanf("%lf",&up_rating);
			
			book[B_id].rating=up_rating;
			
			//show updated book
			display(book,B_id);
				
			
		}else{
			printf("Invalid Input!!");
		}
	}
	
}

//sorting
void Sort_book(Book* book){
	
	
		//create new array and copy all value into that
		
		Book Brr[size];
		
		for(int i=0;i<size;i++){
			Brr[i]=book[i]; //we can assign structure to same structure variable
		}
		
		/*
		printf("Brr:\n");
		for(int i=0;i<n;i++){
			printf("id:%d\n",Brr[i].bookId);
			printf("name:%s\n",Brr[i].bookname);
			printf("author:%s\n",Brr[i].author);
			printf("category:%s\n",Brr[i].category);
			printf("Price:%lf\n",Brr[i].price);
			printf("Rating:%lf\n",Brr[i].rating);
		}
		*/
		//will opearte sorting operations on new structure array (copied)
		int choi;
		printf("Enter the choice:\t1.By price\t2.By Rating\n");
		scanf("%d",&choi);
		
		switch(choi){
			case 1:
				
				{//price
					int c;
					printf("Enter the choice:\t1.Ascending\t2.Descending\n");
					scanf("%d",&c);
					
					if(c==1)
					{     
						for(int i=0;i<(n-1);i++){
						
						for(int j=i+1;j<n;j++){
							
									if(Brr[i].price>Brr[j].price){
										/*
										double temp=book[i].price;
										book[i].price=book[j].price;
										book[j].price=temp;
										*/
										//here we are shifting  only price so, have to shift entire element
										Book temp=Brr[i];//create temp variable of Book struct
										Brr[i]=Brr[j];
										Brr[j]=temp;
//										p++;
//										printf("p:%d",p);
										//show result after ech swapping
										
									}
								}//end j
						
							}//end i
							
							//after sorting
						
							int last=n-1;
							printf("last%d\n",last);
							printf("n:%d",n);
							printf("Lowest_price:%lf\n",Brr[0].price);
							printf("highest_price:%lf\n",Brr[last].price);
							
							
							//display_all();
							for(int i=0;i<n;i++){
								display(Brr,i);
								printf("*******************************");
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
							
							for(int i=0;i<n;i++){
								display(Brr,i);
								printf("*******************************");
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
					printf("Enter the choice:\t1.Ascending\t2.Descending\n");
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
							
							
							for(int i=0;i<n;i++){
								display(Brr,i);
								printf("*******************************");
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
									for(int i=0;i<n;i++){
										display(Brr,i);
										printf("*******************************");
									}
							
									
							}
						}else{
							printf("\nInvalid Input in sort!!");
						}
					}//if else
					
			}
			default :
				{
					printf("\nInvalid Input in sort!!");
				}
		}
		
	}