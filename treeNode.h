#pragma once
#include "staffList.h"
#include "patientQueue.h"

class treeNode
{
public:
	int data;
	treeNode *left;
	treeNode *right;
	treeNode();
	treeNode(int);
};

