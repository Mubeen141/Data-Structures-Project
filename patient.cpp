#include "patient.h"

patient::patient()
{
	firstName = lastName = bloodGroup = gender = cellNumber = cnic = "\0";
	critical = false;
}

void patient::setPatID(int Pid)
{
	patientID = Pid;
}

void patient::setAge(int a)
{
	age = a;
}

void patient::setFirstName(string fname)
{
	firstName = fname;
}

void patient::setLastName(string lname)
{
	lastName = lname;
}

void patient::setBloodGroup(string bld)
{
	bloodGroup = bld;
}

void patient::setGender(string gn)
{
	gender = gn;
}

void patient::setCellNo(string cel)
{
	cellNumber = cel;
}

void patient::setCNIC(string cnc)
{
	cnic = cnc;
}

void patient::iscritical(bool con)
{
	critical = con;
}

int patient::getPatID()
{
	return patientID;
}

int patient::getAge()
{
	return age;
}

string patient::getFirstName()
{
	return firstName;
}

string patient::getLasttName()
{
	return lastName;
}

string patient::getBloodGroup()
{
	return bloodGroup;
}

string patient::getGender()
{
	return gender;
}

string patient::getCellNumber()
{
	return cellNumber;
}

string patient::getCNIC()
{
	return cnic;
}

bool patient::getcritical()
{
	return critical;
}

void patient::setAllPat()
{
	int tmp = 0;
	string stmp = "\0";


	cout << "\nEnter Patient ID : ";
	cin >> tmp;
	setPatID(tmp);

	cout << "\nEnter Patient Age : ";
	cin >> tmp;
	setAge(tmp);

	cout << "\nEnter Patient gender (Male / female) : ";
	cin >> stmp;
	if (stmp == "Male" || stmp == "male" || stmp == "Female" || stmp == "female")
	{
		setGender(stmp);
	}
	else
	{
		cout << "Enter apropriate Patient gender. Enter again : ";
		cin >> stmp;
		setGender(stmp);
	}

	cout << "\nEnter Patient first name : ";
	cin >> stmp;
	setFirstName(stmp);

	cout << "\nEnter Patient last name : ";
	cin >> stmp;
	setLastName(stmp);

	cout << "\nEnter Patient Blood Group (A+ / A- / B+ / B- / O+ / O- / AB+ / AB-) : ";
	cin >> stmp;
	if (stmp == "A+" || stmp == "A-" || stmp == "B+" || stmp == "B-" || stmp == "O+" || stmp == "O-" || stmp == "AB+" || stmp == "AB-")
	{
		setBloodGroup(stmp);
	}
	else
	{
		cout << "Enter appropriate Blood Group. Enter again : ";
		cin >> stmp;
		setBloodGroup(stmp);
	}

	cout << "\nEnter Patient Mobile Number : ";
	cin >> stmp;
	setCellNo(stmp);

	cout << "\nEnter Patient CNIC : ";
	cin >> stmp;
	setCNIC(stmp);

	cout << "\nEnter Patient condition critical or normal :";
	cin >> stmp;
	if (stmp == "critical" || stmp == "Critical" || stmp == "c")
		iscritical(1);
	else
		iscritical(0);
}

void patient::getAllPat()
{
	cout << "\nPatient ID : " << getPatID() << endl;
	cout << "Patient Age : " << getAge() << endl;
	cout << "Patient First name : " << getFirstName() << endl;
	cout << "Patient Last Name : " << getLasttName() << endl;
	cout << "Blood group : " << getBloodGroup() << endl;
	cout << "Gender : " << getGender() << endl;
	cout << "Cell no : " << getCellNumber() << endl;
	cout << "CNIC : " << getCNIC() << endl;
	if (getcritical())
	{
		cout << "Patient in critical condition!" << endl;
	}
	else
	{
		cout << "Patient is not in a critical condition!" << endl;
	}
}

void patient::displayPat()
{
	getAllPat();
}

