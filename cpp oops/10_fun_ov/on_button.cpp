
//on button
#include<stdio.h>
struct Fan{
	
};

struct mobile{
	
};

struct on{
	void tostart(Fan f){
		printf("\nStart fan\n");
	}
	
	void tostart(mobile m){
		printf("\nStart Mobile\n");
	}
	
};

int main(){
	on o;
	Fan f;
	mobile m;
	o.tostart(f);
	o.tostart(m);
	return 0;
}