//a2b153
#include<iostream>
using namespace std;
int main(){
	char str[40]={"a2b153"};
	int len=strlen(str);
	int count;
	for(int i=0;i<(len-1);){
		
		if(((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))&& (str[i+1]>='0'&&str[i+1]<='9')){
			count=1;
			
			for(int j=i+2;j<len;j++){
				if(str[j]>='0'&& str[j]<='9'){
					count++;
				}
				else{
			
					break;
				}
			}
		//as per count specify the num 
			if(count>=1){
				int num=0;
				
				for(int j=i+1;j<=i+count;j++){				
					int digit=str[j]-48;					
					num=num*10+digit;				
				}
				//as we found the  number  print character that much time
				for(int j=1;j<=num;j++){
					cout<<str[i];
				}
			}
			//increment of i as per the number of digits found 
			i=i+count+1;
			
		}
		
	}
	return 0;
}