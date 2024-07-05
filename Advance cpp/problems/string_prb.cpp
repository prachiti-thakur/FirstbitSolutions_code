//cout the char before match the substring
#include<iostream>
using namespace std;
int main(){
	char str[40]={"firstbit1234solutions"};
	char substr[40];
	cout<<"Enter the substring to match:";
	cin>>substr;
	cout<<str<<"\n";
	cout<<substr<<"\n";
	int count;
	int ori=0;
	int k;
	
	for( int i=0;i<strlen(str);i++){

		if(str[i]==substr[0]){
			 k=i;
//			cout<<k<<"\n";
//			ori=i;
			k++;
			count=1;
			for(int j=1;j<strlen(substr);j++){
//				cout<<str[k]<<"\n";
//				cout<<substr[j]<<"\n";
				if(str[k]==substr[j]){
					count++;
					//cout<<count<<"\n";
					k++;	
				}else{
					break;
				}
			}
			//cout<<"out of inner loop";
		
				if(count ==strlen(substr)){
			//	cout<<ori;
			cout<<i;
				break;
				}
			
		}	
}
 
if(count!=strlen(substr)){
	cout<<"-1";
}

	return 0;
}
