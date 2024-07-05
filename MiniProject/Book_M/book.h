//header_file
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
void searchElement(Book*);
void display(Book*,int);
void removeBook(Book*);
void showAuthor(Book*);
void showCat(Book*);
void updateB(Book*);
void SortBook(Book*);
//globle variable declaration
//Book* book; ->can't give access of entire database to user  -->here pointer is on  global and static
extern int size;//20
extern int n;//2