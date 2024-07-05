//by using objects
#include<iostream>
using namespace std;
class Exception{
	public:
	Exception(){
		
	}
	
	virtual  printstackstree(){
		cout<<"generalised exception has been called!";
	}
};
class arrayoutofbound:public Exception{
	public:
	printstackstree(){
		cout<<"array out of bound!!";
	}
};
class denominatorzero:public Exception{
	public:
	printstackstree(){
		cout<<"denominator should not be zero";
	}
};
int main(){
	int arr[10]={2,3,4,5,6};//initialization
	
	//cout<<m;
	
	try{
	//error giving part inside the try and throw that error through the throw keyword ,that error will get catch by catch block
	int n;
	cin>>n;
	int m=sizeof(arr)/sizeof(arr[0]);
	cout<<m;//jab n==10 or greater than 10 hai toh exception throw karna hai
	if(n>=m){
			cout<<n<<m;
		throw new arrayoutofbound();
	
	}
		
		
	int a,b;
	cin>>b;
	if(b==0)
		throw new Exception();
	}catch(Exception* e){
		e->printstackstree();
	}
	return 0;
}