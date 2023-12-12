#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class student
{
	char *name, *class1, *div, *dob, *bldgrp, *address, *dl;
	int roll_no;
	long int ph_no;
	static int counter;
	public:
		student();			//constructor
		~student();			//destructor
		student(char *, char *, char *, char *, char*, char*, char *, int, long int);
		inline void getdetails();
		inline void showdetails();
		static void count();
};

int student :: counter = 0;  
student :: student(char *name, char *class1, char *div, char *dob, char *bldgrp, char *address, char *dl, int roll_no, long int ph_no)
{
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
    
    len = strlen(class1);
    this->class1 = new char[len + 1];
    strcpy(this->class1, class1);
    
    len = strlen(div);
    this->div = new char[len + 1];
    strcpy(this->div, div);
    
    len = strlen(dob);
    this->dob = new char[len + 1];
    strcpy(this->dob, dob);
    
    len = strlen(bldgrp);
    this->bldgrp = new char[len + 1];
    strcpy(this->bldgrp, bldgrp);
    
    len = strlen(address);
    this->address = new char[len + 1];
    strcpy(this->address, address);
    
    len = strlen(dl);
    this->dl = new char[len + 1];
    strcpy(this->dl, dl);
    
    this->roll_no = roll_no;
    
    this->ph_no = ph_no;
}
student :: student()  
{
	name = new char[1];
	class1 = new char[1];
	div = new char[1];
	dob = new char[1];
	bldgrp = new char[1];
	address = new char[1];
	dl = new char[1];
	roll_no = 0;
	ph_no = 0;
}

student :: ~student()
{
	delete name, class1, div, dob, bldgrp, address, dl;
}

void student :: getdetails()
{
	cout << "\nEnter student details" << endl;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Class: ";
	cin >> class1;
	cout << "Enter Division: ";
	cin >> div;
	cout << "Enter Date of Birth: ";
	cin >> dob;
	cout << "Enter Blood Group: ";
	cin >> bldgrp;
	cout << "Enter Address: ";
	cin >> address;
	cout << "Enter Driving License number: ";
	cin >> dl;
	cout << "Enter Roll number: ";
	cin >> roll_no;
	cout << "Enter Phone number: ";
	cin >> ph_no;		
}

void student :: showdetails()
{
	count();
	cout << "Name: " << name << endl;
	cout << "Class: " << class1 << endl;
	cout << "Division: " << div << endl;
	cout << "Date of Birth: " << dob << endl;
	cout << "Blood Group: " << bldgrp << endl;
	cout << "Address: " << address << endl;
	cout << "Driving License no.: " << dl << endl;
	cout << "Roll number: " << roll_no << endl;
	cout << "Phone number: " << ph_no << endl;
}

void student :: count()
{
	counter++;
	cout << "\n\nDetails of student no. " << counter << "\n"<< endl;
}

int main()
{
	int num;
	
	cout << "----------------- STUDENT INFORMATION SYSTEM -----------------\n\n";
	cout << "How many students you have? ";
	cin >> num;
	
	student s[num];
	
	for (int i = 0; i < num; i++)
	{
		s[i].getdetails();
	}
	
	system("clear");
	
	for (int i = 0; i < num; i++)
	{
		s[i].showdetails();
	}
	
	return 0;
}
