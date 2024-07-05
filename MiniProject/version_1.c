
/*
1.basic structure
2.create book on heap n ptr global
3.function -->search ...

*/





//book management system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//create  structure of book 
//declaration of structure
typedef struct Book{
	int bookId;
	char bookname[20];
	char author[20];
	char category[50];
	double price;
	double rating;
}Book;

//function declaration
Book* createArray(int);
void addBook();
void display_all();
void search_element();
void display(Book*,int);
void remove_book();
void show_author();
void show_cat();
void update_B();


//globle variable declaration
Book* book;
int size=10;
int n;//to maintain the updated index(after adding the book) so next book must be add into  
//(initially by default zero)


//main
void main(){
	
//	int n;
//	printf("Enter the n:");
//	scanf("%d",&n);
	
	//no need to pass size of array to every function(assign n to global variable)
//	size=n;
	//store the address of malloc arry into global variable 
	book=createArray(size);
	 int choice;
	 do{
	 	
	 	printf("\n\nwelcome to the Book Management system!!\n\n");
	 	
	 	printf("\n\n");
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
	 				addBook();
	 				break;
				}
			case 2:
				{
					remove_book();
					break;
				}
			case 3:{
				
					search_element();
					break;
					}
			case 4:{
					show_author();
					break;
					}
			case 5:
				{
					show_cat();
					break;
				}
			case 6:
				{
					update_B();
					break;
				}
			case 8:
				{
					display_all();
					break;
				}
			
		 }
	 }while(choice!=0);
}




//function defination
Book* createArray(int n){
	
	Book* M_Book=(Book*)malloc(n*sizeof(Book));
	
	return M_Book;
}

void addBook(){
	int num;
	printf("Enter the number of books wants to enter:");
	scanf("%d",&num);
	
	//num is always less than size of array
	if(size>num){
		
		for(int i=n;i<(n+num);i++){
			
				printf("\n\nEnter the details of BooK:\n\n");
				printf("Enter Book id:");
				scanf("%d",&book[i].bookId);
				
				fflush(stdin);
				printf("Enter the Name:\n");
				scanf("%s",book[i].bookname);
				
				fflush(stdin);
				printf("Enter the Author:");
				gets(book[i].author);
				
				printf("Category:\n1.Fictional\n 2.Non.Fictional\n");
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
						scanf("%lf",&rate);
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


void display_all(){
	//n -->last updated index
	for(int i=0;i<n;i++){
		
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
		
	}
}

/*

remove_Book(){
	int r_book;
	printf("Enter the bookId wants to remove:");
	scanf("%d",r_book);
	
	
}
*/

void remove_book(){
	int b_id;
	printf("Enter the Book_id want to remove:");
	scanf("%d",&b_id);
		int i;
	for(i=0;i<(n-1);i++){
		//if book found shift ele 
		if(book[i].bookId==b_id){
			
			book[i].bookId=book[i+1].bookId;
			strcpy(book[i].bookname,book[i+1].bookname);
			strcpy(book[i].author,book[i+1].author);
			strcpy(book[i].category,book[i+1].category);
			book[i].price=book[i+1].price;
			book[i].rating=book[i+1].rating;
			
			break;
			
		}
	}//after for loop
	display(book,i);
	n=n-1;//update the last index globally
	printf("successfully remove the book!!");
}


void search_element(){
	
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
					display(book,i);
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
				if(strcmp(book[i].bookname,b_name)==0){
					
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
					
					display(book,i);
					break;
					
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
					printf("bookname:%s\n",b[i].bookname);
					printf("Author:");
					puts(b[i].author);
					printf("category:%s\n",b[i].category);
					printf("price:%lf\n",b[i].price);
					printf("rating:%lf\n",b[i].rating);
					
					printf("\n***************************\n");				
}



//show book by author
void show_author(){
	
	fflush(stdin);
	char r_author[20];
	printf("Enter the author to see his/her books:");
	gets(r_author);
	
	int flag=0;
	
	for(int i=0;i<n;i++){
		printf("for loop\n");
	
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
void show_cat(){
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
void update_B(){
	
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