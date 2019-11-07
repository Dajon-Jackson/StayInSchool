//Faculty.h
#include"School.h"
#include<iostream>
using namespace std;

#ifndef FACULTY_H
#define FACULTY_H
class Faculty: public School{
	private:
		string position;
	public:
		Faculty();
		void setPosition(string);
		void print();
};
#endif
