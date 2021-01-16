#include "treeNode.h"

treeNode::treeNode()
{
	data = 0;
	this->left = NULL;
	this->right = NULL;
}

treeNode::treeNode(int data)
{
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}