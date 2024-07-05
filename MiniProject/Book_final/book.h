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
Book* addBook(Book*);
//Book* 
Book* createArray();
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
extern int size;
//int n=2;//to maintain the updated index(after adding the book) so next book must be add into next empty index not from start
//(initially by default zero)
extern int id;//auto increment as already 2 element was there so next id will be 3