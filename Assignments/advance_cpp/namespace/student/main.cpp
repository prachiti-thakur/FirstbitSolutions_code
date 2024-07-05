#include <iostream>
using namespace std;
#include"student.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace SY;
using namespace TY;

int main() {
	SY::SYMARKS st(70,80,98);
	TYmarks t(80,70);
	
	Student s(101,"PRachit",st,t);
	cout<<s.getRnum()<<"\n";
	cout<<s.getName()<<"\n";
	SY::SYMARKS sy=s.getSYMARKS();
	cout<<sy<<"\n";//as we are referencing it must be variable if we cout<<s.getSYMARKS()  s is returning in dummy
	TY::TYmarks ty=s.getTYmarks();
	cout<<ty<<"\n";
	
	
	s.Result();
	s.display();
	return 0;
}
	