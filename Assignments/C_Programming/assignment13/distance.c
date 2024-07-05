//Distance ( feet, inch)
struct distance{
	int feet;
	int inch;
};
void main(){
	
	struct distance d;
	
	d.feet=45;
	d.inch=78;
	
	printf("%dfeets %dinches\n\n",d.feet,d.inch);
	
	//array
	struct distance d1[10];
	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	//fill the array
	for(int i=0;i<n;i++){
		printf("Feets:");
		scanf("%d",&d1[i].feet);
		printf("inches:");
		scanf("%d",&d1[i].inch);
		printf("\n\n");
	}
	
	printf("distances:\n\n");
	for(int i=0;i<n;i++){
		printf("distance at index %d-->%dfeets %dinches\n\n",i,d1[i].feet,d1[i].inch);
	}
}