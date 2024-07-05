//Q1
#include<stdio.h>
#include<string.h>
typedef struct student{
	int roll_no;
	char name[20];
	float marks[3];
}student;
void main(){
	//create array of 5 students
	student s[5];
	
	//take value from user and assign it into element of array(structure)

	//for loop on student array of 5 
	for(int i=0;i<5;i++)
	{
		printf("Enter the value for index :%d\n",i);
		printf("Enter the roll_number\n");
		scanf("%d",&s[i].roll_no);
		
		fflush(stdin);
		printf("Enter the name:");
		gets(s[i].name);
		
		for(int j=0;j<3;j++){
			printf("Enter marks of subject %d out of 60 :\n",j+1);
			
			scanf("%f",&s[i].marks[j]);
			
		}
		
	}
	
		double avg[5];
	//fill the average array
	for(int i=0;i<5;i++){
	
		double sum=0;
		for(int j=0;j<3;j++){
			sum=sum+s[i].marks[j];
		}
		avg[i]=sum/3;
		//printf("Avg of index %d is %lf\n",i,avg[i]);
	}
	
	//highest avg student display
	double max=avg[0];
	int index=0;
	for(int i=0;i<5;i++){
		if(avg[i]>max){
			max=avg[i];
			index=i;
		}
	}
//	printf("max avg:%lf\n",max);
//	printf("Index:%d\n",index);
	//here we index of highest 
	printf("Highest marks student:\n");
	printf("roll_number:%d\n",s[index].roll_no);
	printf("Name:%s\n",s[index].name);
	
	
}