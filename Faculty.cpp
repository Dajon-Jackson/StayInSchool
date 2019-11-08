//faculty.cpp
#include"Faculty.h"
#include<iostream>
Faculty::Faculty()
{
	setPosition("");
}
void Faculty::setPosition(string p)
{
	if(p != "")
		position = p;
	else
		position = "";
}
void Faculty::print(){
	cout<<"\nThis faculty member has this information: "<<endl;
	School::print();
	cout<<"Position: "<<position<<endl;
}
