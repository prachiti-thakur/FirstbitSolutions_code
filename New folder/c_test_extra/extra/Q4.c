//date is valid or not//by me
#include<stdio.h>
void main(){
	int date=29;
	int month=2;
	int year=1900;
	
	if(year%100!=0){
		//not century year
		//year %4
				if(year%4==0){
				
						//leap year
						if(month%2==0){
							
							//even months 2, 4 .. feb april
								if(month==2 && date<=29){
									printf("valid");
								}
								else{
									printf("Invalid");
								}
								
						}
						else{
							
							//odd months 1,3...jan march 
									if(date<=31){
										printf("valid");
									}
									else{
										printf("invalid");
									}
						}
				
		
				}
				else{
					//not leap year
					
								if(month%2==0){
									//even months 2 , 4 ... feb april
											if(month==2 && date<=28){
												printf("valid");
											}
											else{
												printf("invalid");
											}
								}
								else{
									//odd  months  1, 3...jan march
											if(date<=31){
												printf("valid");
											}
											else{
												printf("invalid");
											}
								}
					
				}
	
	
	}
	
	else
	{
		//century year
			//if year %400
				if(year%400==0){
					
					//leap year
							if(month%2==0){
								
								//even months 2, 4 .. feb april
									if(month==2 && date<=29){
										printf("valid");
									}
									else{
										printf("Invalid");
									}
									
							}
							else{
								
								//odd months 1,3...jan march 
										if(date<=31){
											printf("valid");
										}
										else{
											printf("invalid");
										}
							}
							
					
				}
				else{
					//not leap year
					
								if(month%2==0){
									//even months 2 , 4 ... feb april
											if(month==2 && date<=28){
												printf("valid");
											}
											else{
												printf("invalid");
											}
								}
								else{
									//odd  months  1, 3...jan march
											if(date<=31){
												printf("valid");
											}
											else{
												printf("invalid");
											}
								}
								
					}
				
					
				}
	
	
	
	
	
}