#include "player.h"
class PlayerArr{
	int size;
	int index;
	Player* ptr;
	
	public:
		
	Player* getPtr();
	PlayerArr(PlayerArr&);//copy constructor
	PlayerArr(int);
	bool isFull();
	bool isEmpty();
	bool addPly(Player&);
	int searchPlyJn(int);
	int searchPlyName(char*);
	void deletePly(int);
	void updatePly(int);
	void displayPly();
	void sort();
};
