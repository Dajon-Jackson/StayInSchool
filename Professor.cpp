//Professor.cpp
#include"Professor.h"

Professor::Professor(){
	setTenure("Teacher");
	
}
void Professor::setTenure(string tenure){
	
	this ->tenure = tenure;
	
}
void Professor::print(){
	
	cout<<"this professor has been working here for"<<tenure<<"year(s)"<<"\n"
	<<"Name:"<<first_name<<","<<last_name<<"\n"
	<<"Age:"<<age<<"\n"
	<<"ID:"<<id<<"\n"
}
