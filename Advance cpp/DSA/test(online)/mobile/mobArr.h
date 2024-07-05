#include "mob.h"
class MyArryMob{
	int size;
	int index;
	mob* ptr;
	
	public:
		MyArryMob(int);
		void storeMob(mob&);
		void display();
		int search(int);
		void sortMob();
};