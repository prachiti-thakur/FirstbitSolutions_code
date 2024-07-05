//SyMarks
#include<iostream>
using namespace std;
namespace SY{
	class SYMARKS{
	int Tcom;
	int Telec;
	int Tmaths;
	
	public:
		SYMARKS();
		SYMARKS(int,int,int);
		void setTcom(int);
		void setTelec(int);
		void setTmaths(int);
		
		int getTcom();
		int getTelec();
		int getTmaths();
		
		
			
};
}
