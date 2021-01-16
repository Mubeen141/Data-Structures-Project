#pragma once
#include "staffNode.h"

class staffList
{
public:
	staffNode* head;
	staffNode* curr;
	staffNode* temp;

	staffList();

	void addStaff();
	void deleteStaff(int);
	staffNode* searchStaff(int);
	void displayStaff();
	void modifyStaff(int);
};

