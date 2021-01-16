#pragma once
#include "patientNode.h"
#include "staffList.h"
class patientQueue
{
public:
	patientNode *front, *rear;
	patientQueue();			//constructor
	void enQueue(patientNode*);
	void deQueue();
	void displayQueue();
	patientNode* search(int);
	void modify(int);

};