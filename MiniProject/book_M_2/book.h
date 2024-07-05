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
extern int size;
extern int n;//to maintain the updated index(after adding the book) so next book must be add into next empty index not from start
//(initially by default zero)
extern int id;//auto increment as already 2 element was there so next id will be 3