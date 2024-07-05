#include"mob.h"
void mob::setId(int id){
	this->model_id= id
}
void mob::setPrice(double p){
	this->price =p;
}
int mob::getId(){
	return this->model_id;
}
double mob::getPrice(){
	return this->price;
}