#pragma once
#include"staffList.h"
#include <iostream>
#include <string>

using namespace std;

class patient
{
public:
	int patientID;
	int age;
	string firstName;
	string lastName;
	string bloodGroup;
	string gender;
	string cellNumber;
	string cnic;
	bool critical;
	patient();

	void setPatID(int);
	void setAge(int);
	void setFirstName(string);
	void setLastName(string);
	void setBloodGroup(string);
	void setGender(string);
	void setCellNo(string);
	void setCNIC(string);
	void iscritical(bool);

	int getPatID();
	int getAge();
	string getFirstName();
	string getLasttName();
	string getBloodGroup();
	string getGender();
	string getCellNumber();
	string getCNIC();
	bool getcritical();
	

	void getAllPat();
	void setAllPat();
	void displayPat();

	/*struct appointment
	{
		string time = "\0", date = "\0";
		string doctorName = "\0";
	};*/



};

