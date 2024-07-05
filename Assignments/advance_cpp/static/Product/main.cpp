#include"product.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Product p(101,"product",8900,90);
	double price=p.applyDis();
	cout<<"price:"<<price;
	return 0;
}