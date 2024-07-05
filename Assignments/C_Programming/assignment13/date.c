//Date (date, month, year)

#include<stdio.h>
#include<string.h>
struct date{
	int day;
	int month;
	int year;
};
void main(){
	struct date d;
	
	d.day=10;
	d.month=2;
	d.year=2024;
	
	//print
	printf("%d-%d-%d",d.day,d.month,d.year);
	
	//array
	
	struct date d1[10];
	
	//
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	//
	printf("Enter date:\n\n");
	for(int i=0;i<n;i++){
		
		printf("day:");
		scanf("%d",&d1[i].day);
		
		printf("month:");
		scanf("%d",&d1[i].month);
		printf("year:");
		scanf("%d",&d1[i].year);
		printf("\n\n");
	}
	//print
	
	for(int i=0;i<n;i++){
		if(d1[i].day<=30 && d1[i].day<=31 && d1[i].month<=12)
		printf("%d-%d-%d\n\n",d1[i].day,d1[i].month,d1[i].year);
		else
		printf("incorrect input!!");
	}
	
	
}