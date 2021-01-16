#include "binaryTree.h"



binaryTree::binaryTree()
{
	root = curr = NULL;
}
treeNode* binaryTree::insert(treeNode* ptr,int data)
{
	if (ptr == NULL)
	{
		treeNode *tmp = new treeNode;
		tmp->data = data;
		tmp->left = tmp->right = NULL;
		ptr = tmp;
	}
	else if(data<ptr->data)
	{
		ptr->left = insert(ptr->left, data);
	}
	else if (data > ptr->data)
	{
		ptr->right = insert(ptr->right, data);
	}
	
	return ptr;
}
void binaryTree::display(treeNode* ptr)
{
	if (ptr == NULL)
		return;
		cout << ptr->data << endl;
		display(ptr->left);
		display(ptr->right);
	
}
