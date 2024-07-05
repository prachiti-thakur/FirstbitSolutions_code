//declarations

//struct Date{
class Date{

	int day;
	int mon;
	int year;
	
	public:
	//setter
	void setday(int);
	void setmon(int);
	void setyear(int);
	
	void display();
	
	int getDay();
	int getMon();
	int getyear();
	//constructor
	Date();
	//parameterised constructor
	Date(int,int,int);
	
};