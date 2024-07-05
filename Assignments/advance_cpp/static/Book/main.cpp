#include <iostream>
using namespace std;
#include"Book.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Book b(101,"Prachiti",405.5,"Thakur");
	cout<<Book::getcount();
	return 0;
}