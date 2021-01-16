#pragma once
#include <iostream>
#include <string>
using namespace std;

class staff
{
public:
	int staffID;
	int staffAge;
	string gender;
	string firstName;
	string lastName;
	string department;
	string designation;

	staff();		//constructor

	void setSetId(int);
	void setAge(int);
	void setGender(string);
	void setFirstName(string);
	void setLastName(string);
	void setDepartment(string);
	void setDesignation(string);

	int getId();
	int getAge();
	string getGender();
	string getFirstName();
	string getLastName();
	string getDepartment();
	string getDesignation();

	void getAll();
	void setAll();
	void display();
};

