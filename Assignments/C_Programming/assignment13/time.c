//Time (hour, min, sec)
#include<stdio.h>
struct time{
	int hr;
	int min;
	int sec;
};
void main(){
	struct time t;
	
	t.hr=1;
	t.min=45;
	t.sec=60;
	
	printf("%d:%d:%d\n",t.hr,t.min,t.sec);
	
	//create arry
	struct time t1[10];
	
	int n;
	printf("Enter the n:");
	scanf("%d",&n);
	
	//take the fill
	printf("Enter the values:\n\n");
	for(int i=0;i<n;i++){
		printf("hr:");
		scanf("%d",&t1[i].hr);
		printf("min:");
		scanf("%d",&t1[i].min);
		printf("sec:");
		scanf("%d",&t1[i].sec);
		printf("\n\n");
	}
	
	printf("Times:\n\n");
	
	for(int i=0;i<n;i++){
		printf("time index %d-->%d:%d:%d\n\n",i,t1[i].hr,t1[i].min,t1[i].sec);
	}
	
	
}