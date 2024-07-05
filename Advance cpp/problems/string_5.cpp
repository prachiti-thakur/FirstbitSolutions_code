//a2b153
#include<iostream>
using namespace std;
int main(){
	char str[40]={"a2b153"};
	int len=strlen(str);
	int count;
	for(int i=0;i<(len-1);){
		//cout<<"i:"<<i;
		if(((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))&& (str[i+1]>='0'&&str[i+1]<='9')){
			count=1;
			//cout<<"str{i}:"<<str[i]<<"\n";
			for(int j=i+2;j<len;j++){
				//cout<<"inside number count for loop \n";
				if(str[j]>='0'&& str[j]<='9'){
					count++;
				}
				else{
				//	cout<<"break";
					break;
				}
			}
			//cout<<"cout:"<<count<<"\n";
			//out of inner for loop
			if(count>=1){
				int num=0;
				
				for(int j=i+1;j<=i+count;j++){
					//cout<<str[j]<<"\n";
					int digit=str[j]-48;
					//cout<<digit<<"\n";
					num=num*10+digit;
					//cout<<num<<"\n";
					
				}
				
				for(int j=1;j<=num;j++){
					cout<<str[i];
				}
			}
			//increment of i as per the number of digits found 
			i=i+count+1;
				//cout<<"i:"<<i;
		}
		
	}
	return 0;
}