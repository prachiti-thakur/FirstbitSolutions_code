//leap year
#include <stdio.h>
void main(){
	
	
	//((year%100==0) && (year %400)) || (Year%4)// this code gives wrong output for exception only  example 1900,1700..etc
	//so 2000 will gives right ans  ex 2000,2400,1600  etc..
	
	// 1. find out it century  year or not 
	//2. if it is not century year  then --> year%4
	//3.(if it is century year) <-- this will proove ,when 1st condition gives false bcz we consider there it is not cent year 
	//   then--> year %400  bcz if cent yr %400 ==0 then it is cent leap yr  else not a lrap year 
	// yr %400 to handle above exception cases 
	int year=2000;
	int res=(( year%100 != 0)&&(year%4 == 0))||(year%400==0);
	
	 printf("if res is \"0\" then it is not a leap year ");
	 printf("\n if res is \"1\" then it is a leap year ");
	 
	 printf("\n The res is %d",res);
}
