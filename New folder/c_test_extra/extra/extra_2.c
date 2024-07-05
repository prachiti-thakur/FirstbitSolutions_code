// i/p 1 and 5
//o/p  1  13   135  1357  13579
// base on the concept difference of 2  not odd even

#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	
	int terms;
	printf("Enter number of terms:");
	scanf("%d",&terms);
	
	int digits=0;
	
	for(int i=0;i<terms;i++){
		int res=num+(i*2);
		//digits=digits*10+res;//5       57      579     5801
		//check digits of res
		int r=res;
		int cnt=0;//have to count digit of each res
		int n=10;
		//printf("\n%d\n ",res);
		
		while(r>0){
			r=r/10;
			cnt++;
			}
		//if 1 digits then *100 if  3 digits *100   eg 5890+11 == 5801 so 58900+11==>58911 (*100 for 11(2 digits)
		//printf("%d\n",cnt);
		while(cnt){
				if(cnt>=2)
				{
					n=n*10;
				}
			cnt--;
		}
		
		digits=(digits*n) +res;
		
		printf("%d\t",digits);
	}
}