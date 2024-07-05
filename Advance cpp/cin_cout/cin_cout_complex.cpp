//cin_cout
#include<iostream>
using namespace std;
class complex {
	int real;
	int img;
	public:
		complex(){
		this->real=0;
		this->img=0;
		}
		complex(int r,int i){
		this->real=r;
		this->img=i;
		}
		
		void setreal(int r){
			this->real=r;
		}
		void setimg(int i)
		{
			this->img=i;
		}
		
		int getreal(){
			return this->real;
		}
		
		int getimg(){
			return this->img;
		}
		
		void display(){
			cout<<this->real;
			cout<<this->img;
		}
};
//declaration
istream& operator>>(istream& ,complex& );
ostream& operator<<(ostream& ,complex& );

int main(){
	complex c1;
	complex c2;
	
	cin>>c1>>c2;
	cout<<c1<<"\n"<<c2;
	return 0;
}


istream& operator>>(istream& i,complex& c){
	int p,q;
	
	i>>p;
	i>>q;
	//c.setreal(i>>p); i>>p returns istream obj but here  the setreal(int)
	//c.setimg(i>>q);
	
	c.setreal(p);
	c.setimg(q);
	return i;
}


ostream& operator<<(ostream& o,complex& c){
	
	o<<c.getreal()<<"+"<<c.getimg();
	
	return o;
}