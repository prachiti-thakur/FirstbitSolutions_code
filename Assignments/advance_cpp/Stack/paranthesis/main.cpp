#include"stack.h"
int main()
{
	char str[50];
	cout<<"Enter the string:";
	cin>>str;
	int len=strlen(str);
	Stack s(len);
	char ele=NULL;
	char p;
	//push only opening parenthresis   ({[     ]})
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='{'||str[i]=='('||str[i]=='['){
			s.push(str[i]);
			
		}
		else if(str[i]=='}')
		{
			//check the top
			ele=s.peek();
			if(ele=='{'){
				s.pop(p);//here we are sending the p just to satisfy the pop function
			}
			else{
				break;
			}
		}
		/////----->')'
		else if(str[i]==')')
		{
			//check the top
			ele=s.peek();
			if(ele=='('){
				s.pop(p);//here we are sending the p just to satisfy the pop function
			}
			else{
				break;
			}
		}
		///////----> ']'
		
			else if(str[i]==']')
		{
			//check the top
			ele=s.peek();
			if(ele=='['){
				s.pop(p);//here we are sending the p just to satisfy the pop function
			}
			else{
				break;
			}
		}
		///////////
		
	}
	


	if(s.getTop()==-1){
		cout<<"Yes Balance Paranthesis!!";
	}
	else{
		cout<<"Not Balance Paranthesis!!";
	}
	
	return 0;
}