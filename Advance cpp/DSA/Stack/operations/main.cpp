#include"stack.h"
int main(){
	
	Stack str(10);
	str.push(10);
	str.push(20);
	cout<<"Peek:"<<str.peek()<<"\n";
	str.display();
	
	return 0;
}