//greatest number
#include<stdio.h>

struct Greatest{
	int togetG(int a,int b){
		if(a>b){
			return a;
		}
		else{
			return b;
		}
	}
	
	int togetG(int a,int b,int c){
		if(a>b){
			if(a>c){
				return a;
			}
			else{
				return c;
			}
		}else{
			if(b>c){
				return b;
			}
			else{
				return c;
			}
		}
		
	}
};

int main(){
	int a=10,b=20,c=30;
	
	Greatest g;
	int result;
	result=g.togetG(a,b);
	printf("\nResult:%d\n",result);
	
	result =g.togetG(a,b,c);
	printf("\nResult:%d\n",result);
	
	return 0;
}