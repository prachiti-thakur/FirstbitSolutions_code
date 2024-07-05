//merge
#include <stdio.h>
void main(){
	
	int arr[20];
	int brr[5];
	
	int n;
	int s_arr=20;
	int s_brr=5;
	
	printf("how many element of of arr wants to enter:");
	scanf("%d",&n);
	int i;
	printf("Enter the elements of arr:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	
		printf("Enter the elements of brr:\n");
	for(int p=0;p<n;p++){
		scanf("%d",&brr[p]);
	}
	
	//merge
	
	
printf("\ni:%d\n",i);
	for(int j=0;j<5;j++){
		arr[i]=brr[j];
		i++;//incresing index of arr
	}
	
	// print arr
	
	printf("Arr :\n");
		for(int k=0;k<(n+s_brr);k++){
			printf("%d\n",arr[k]);
	}
	
	
}