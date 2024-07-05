//concat string
#include<stdio.h>
#include<string.h>
struct concat{
	void toconcat(char* nm_1,char* nm_2){
		strcat(nm_1,nm_2);
		}
		
		void toconcat(char* nm_1,char* nm_2,char* nm_3){
			char str2[100];
			strcpy(str2,nm_2);
			strcat(str2,nm_3);
			strcat(nm_1,str2);
		}
};

int main(){
	int choice;
	concat c;
	do{
		printf("\n\n0.Exit\n1.concat(2 string)\n2.concat(3string)\n");
		printf("\nEnter choice:\n");
		scanf("%d",&choice);
		
		char str1[100]="hey";
		char str2[100]="Prachiti";
		char str3[100]="Thakur";
		
		switch(choice){
			case 1:{
				c.toconcat(str1,str2);
				printf("%s",str1);
				break;
			}
			case 2:{
				c.toconcat(str1,str2,str3);
				printf("%s",str1);
				break;
			}
			case 0:{
				printf("\nThank you for visit!!\n");
				break;
			}
			default:{
				printf("\nInvalid Input\n");
				break;
			}
				
		}
	}while(choice!=0);
	return 0;
}