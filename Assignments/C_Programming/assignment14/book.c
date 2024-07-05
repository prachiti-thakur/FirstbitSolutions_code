//q1
//1. Create a structure Book with data members as bname, id, author, price. Accept the 
//values of all these members from user and display them.
#include<stdio.h>
typedef struct Book{
	int id;
	char name[20];
	char author[20];
	double price;
	
}Book;
void main(){
	Book b;
	
	printf("Entert the details of book:\n");
	printf("Id:");
	scanf("%d",&b.id);
	fflush(stdin);
	printf("Name:");
	gets(b.name);
	printf("Author:");
	gets(b.author);
	printf("Price:");
	scanf("%lf",&b.price);
	
	printf("Book details:\n");
	printf("id:%d\n",b.id);
	printf("Name:");
	puts(b.name);
	printf("Author");
	puts(b.author);
	printf("price:%lf\n",b.price);

}