//pattern 
#include<stdio.h>
void main(){
	int end;
	printf("enter the num :");
	scanf("%d",&end);
	for(int i=end;i>0;i--){
		for(int j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	
}

/*

end=5
*****
****
***
**
*

*/