#pragma once
#include "treeNode.h"

class binaryTree
{
public:
	treeNode *root,*curr;
	binaryTree();
	treeNode* insert(treeNode*,int);
	void display(treeNode*);	
};

