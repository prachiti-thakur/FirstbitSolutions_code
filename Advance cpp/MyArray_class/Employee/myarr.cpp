#include"myarr.h"
MyArry::MyArry(int s)//only parameterised constructor bcz without size arry must not be create
{
	this->size=s;
	this->index=-1;
	this->ptr=new Employee[size];
}
bool MyArry::isFull()
{
	if(index<size-1){
		return false;
	}
	else{
		//index is greater
		return true;//arry is full
	}
}
bool MyArry::isEmpty(){
	if(index==-1){
		return true;
	}
	else{
		return false;
	}
}
void MyArry::addElement(Employee& e){
	
	if(isFull()){
		cout<<"\nArray is full\n";
	}
	else{
		
		//increment index
		ptr[++index]=e;

		cout<<"element successfully added!";
	}
}

int MyArry::searchElement(int ele){
	if(isEmpty()){
		//cout<<"Element not found!!";
		return -1;
	}
	else{
		for(int i=0;i<=index;i++){
			if(ele==ptr[i].getid()){
				return i;
			}
		}
			
	}
	
	//if not found after searching by loop
	return -1;
	
}


void MyArry::deleteElement(int ele){
	if(isEmpty()){
		cout<<"Array is Empty";
	}
	else{
		//search the index of the element wants to search
		int ind=searchElement(ele);
		if(ind!=-1){
			for(int i=ind;i<index;i++){
				ptr[i]=ptr[i+1];
			}
			
			//index must be decrese by 1
			index--;
		}
		else{
			cout<<"Not Found";
		}
		
		cout<<"Element successfully deleted!";
	}
}

void MyArry::displayElements(){
	if(isEmpty()){
		cout<<"Array is empty";
	}
	else{
		cout<<"Array:\t";
		for(int i=0;i<=index;i++){
			
			cout<<ptr[i]<<"\t";
		}
	}
}
void MyArry::displayOne(int i){
	cout<<"\nEmployee:\n\n";
	cout<<"id:"<<ptr[i].getid()<<"\n";
	cout<<"name:"<<ptr[i].getname()<<"\n";
	cout<<"Salary:"<<ptr[i].getsalary()<<"\n";
}

void MyArry::updateElement(int id){
	
	int pos=searchElement(id);
	if(pos!=-1){
	double up_Sal;
	cout<<"Entet the updated salary:";
	cin>>up_Sal;
		ptr[pos].setsalary(up_Sal);
	//	cout<<"\n"<<ptr[pos];
	//ptr[pos].display();
	displayOne(pos);
	}
	else{
		cout<<"\nId not found!\n";
	}
}
Employee* MyArry::getPtr(){
	return this->ptr;
}