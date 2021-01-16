#include "staff.h"

staff::staff()
{
	staffAge = staffID = 0;
	gender = firstName = lastName = designation = department = "\0";
}

void staff::setSetId(int id)
{
	staffID = id;
}

void staff::setAge(int age)
{
	staffAge = age;
}

void staff::setGender(string gen)
{
	gender = gen;
}

void staff::setFirstName(string fname)
{
	firstName = fname;
}

void staff::setLastName(string lname)
{
	lastName = lname;
}

void staff::setDepartment(string dep)
{
	department = dep;
}

void staff::setDesignation(string des)
{
	designation = des;
}

int staff::getId()
{
	return staffID;
}

int staff::getAge()
{
	return staffAge;
}

string staff::getGender()
{
	return gender;
}

string staff::getFirstName()
{
	return firstName;
}

string staff::getLastName()
{
	return lastName;
}

string staff::getDepartment()
{
	return department;
}

string staff::getDesignation()
{
	return designation;
}

void staff::getAll()
{
	cout << "\nStaff ID : " << getId() << endl;
	cout << "Staff Member First Name : " << getFirstName() << endl;
	cout << "Staff Member Last Name : " << getLastName() << endl;
	cout << "Staff Member Age : " << getAge() << endl;
	cout << "Staff Member Gender : " << getGender() << endl;
	cout << "Staff Member Deparment : " << getDepartment() << endl;
	cout << "Staff Member Designation : " << getDesignation() << endl;
}

void staff::setAll()
{
	int tmp = 0;
	string stmp = "\0";

	cout << "\nEnter Staff ID : ";
	cin >> tmp;
	setSetId(tmp);

	cout << "\nEnter Staff Member Age : ";
	cin >> tmp;
	setAge(tmp);

	cout << "\nEnter gender (Male / female) : ";
	cin >> stmp;
	if (stmp == "Male" || stmp == "male" || stmp == "Female" || stmp == "female")
	{
		setGender(stmp);
	}
	else
	{
		cout << "Enter appropriate gender..." << endl;
		cin >> stmp;
		setGender(stmp);
	}

	cout << "\nEnter first name : ";
	cin >> stmp;
	setFirstName(stmp);

	cout << "\nEnter last name : ";
	cin >> stmp;
	setLastName(stmp);

	cout << "\nEnter Deparment : ";
	cin >> stmp;
	setDepartment(stmp);

	cout << "\nEnter Designation : ";
	cin >> stmp;
	setDesignation(stmp);
}

void staff::display()
{
	getAll();
}