//
//3. Write a program to create an array for 10 players. For each player store name, no. of 
//matches played, runs, wickets takes. 
//a. Create function to Accept the information of each player. 
//b. Create function to display the information of all the players 
//c. Display the information of player who made maximum runs and the one who took 
//maximum number of wickets.


#include<stdio.h>
typedef struct player {
	char name[20];
	int no_of_m;
	int runs;
	int wickets;
}player;

void store(player*,int);
void display(player*,int);
void max_run(player*,int);
void max_wicket(player*,int);


void main(){
	
	player p[10];
	int n;
	printf("enter the n:");
	scanf("%d",&n);
	store(p,n);
	display(p,n);
	max_run(p,n);
	max_wicket(p,n);
}
void store(player* p,int n){
	for(int i=0;i<n;i++){
	printf("Enter the details\n");
	fflush(stdin);
	printf("Name:");
	gets(p[i].name);
	printf("No_of_matches:");
	scanf("%d",&p[i].no_of_m);
	printf("Runs:");
	scanf("%d",&p[i].runs);
	printf("Wickets:");
	scanf("%d",&p[i].wickets);
	printf("\n\n");
	}
	
	
}

void display(player* p,int n){
	for(int i=0;i<n;i++){
		printf("playes Details:\n\n");
		printf("name:%s\n",p[i].name);
		//puts(p[i].name);
		printf("No_of_matches:%d\n",p[i].no_of_m);
		printf("no_of_runs:%d\n",p[i].runs);
		printf("NO_of_wickets:%d\n",p[i].wickets);
			printf("\n\n");
	}
	
}

void max_run(player* p,int n){
	
	int max=p[0].runs;
	for(int i=0;i<n;i++){
		if(p[i].runs>max){
			max=p[i].runs;
		}
	}
	printf("\n\n");
	printf("Max runs:%d",max);
}


void max_wicket(player* p,int n){
	int max=p[0].wickets;
	for(int i=0;i<n;i++){
		if(p[i].wickets>max){
			max=p[i].wickets;
		}
	}
		printf("\n\n");
	printf("Max_wickets:%d",max);
	
}