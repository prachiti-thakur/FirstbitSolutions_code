#include"stack.h"
int main(){
	char str[20];
	cout<<"Enter the string:";
	cin>>str;
	int len=strlen(str);
	Stack s(len);
	//push ele in stack
	for(int i=0;str[i]!='\0';i++){
		s.push(str[i]);
	}
	
	//check palindrome
	char ele;
	int flag=0,i=0;
	while(str[i]!='\0'){
		if(s.pop(ele)){
			if(ele!=str[i]){
				flag=1;
			}
		}
		i++;
	}
	
	if(flag==1){
		cout<<"string is not palindrome";
	}
	else{
		cout<<"String is Palindrome";
	}
	return 0;
}