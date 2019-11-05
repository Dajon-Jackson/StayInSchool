//StayInSchool.cpp
#include<iostream>
#include<string>
#include"School.h"
#include"Professor.h"
#include"Staff.h"
#include"Student.h"
using namespace std;

int main(int argc, char** argv){
  School* scPTR[100];
  string fname, lname, id;
  int age;
  int counter = 0;
  int choice;
  do
  {
  system("CLS");
  cout<< "Enter 1 for a student, 2 for a professor, 3 for staff, and 4 for exit: ";
  cin>>choice;
  if(choice == 1)
  {
    Student* stu = new Student;
    cout<<"Enter the student's first name, last name, and age, and ID number: ";
    cin>>fname>>lname>>age>>id;
    stu->setName(fname, lname);
    stu->setAge(age);
    stu->setID(id);
    scPTR[counter] = stu;

    counter++;
  }
  else
    if(choice == 2)
    {
      Professor* pro = new Professor;
      cout<<"Enter the professor's first name, last name, and age, and ID number: ";
      cin>>fname>>lname>>age>>id;
      pro->setName(fname, lname);
      pro->setAge(age);
      pro->setID(id);
      scPTR[counter] = pro;
    }
    else
      if(choice == 3)
      {
        Staff* sta = new Staff;
        cout<<"Enter the staff member's first name, last name, and age, and ID number: ";
        cin>>fname>>lname>>age>>id;
        sta->setName(fname, lname);
        sta->setAge(age);
        sta->setID(id);
        scPTR[counter] = sta;
      }
      else
        if(choice >4 || choice < 1)
        {
          cout<<"Invalid choice!\n";
          system("PAUSE");
        }

  } while(choice != 4);

  //display content pointed by the scPTR
  for(int i = 0; i < counter; i++)
  {
    scPTR[i] -> print();
  }

  return 0;

}
