//faculty.cpp
#include"Faculty.h"
#include<iostream>
Faculty::Faculty()
{
	setPosition("");
}
void Faculty::setPosition(string p)
{
	if(position != "")
		position = p;
	else
		position = "";
}
void Faculty::print(){
	cout<<"This "<<position<<" has this information: \n"
		<<"Name: "<<first_name<<" "<<last_name<<"\n"
		<<"Age: "<<age<<"\n"
		<<"ID: "<<id<<endl;
}
