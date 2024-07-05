#include"node.cpp"
template<class T>
class LinkedList{
	Node<T>* start;
	public:
	LinkedList();
	void insertBeg(T&);
	void insertEnd(T&);
	void insertAtPos(T&,int);
	void deleteBeg();
	void deleteEnd();
	void deleteAtPos(int);
	int searchNode(int);
	void deleteByData(int);
	void display();
	/////////////////////////
	LinkedList(LinkedList&);
	Node<T>* searchByJersy(int);
	Node<T>* searchByName(char*);
	void update();
	Node<T>* searchForDelete(int);
	void deleteById(int);
	void sort();
	void plySort();
	~LinkedList();
	
	
};