#include "staffList.h"

staffList::staffList()
{
	temp = curr = head = NULL;
}

void staffList::addStaff()
{
	staffNode* n = new staffNode;
	n->data.setAll();
	n->next = NULL;
	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

void staffList::deleteStaff(int delid)
{
	staffNode* delptr = NULL;
	temp = head;
	curr = head;
	while (curr != NULL && curr->data.getId() != delid) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL)
	{
		cout << delid << " not a staff member!" << endl;
		delete delptr;
	}
	else
	{
		delptr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delptr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delptr;
	}
	cout << "\nStaff ID : " << delid << " data is deleted from the list!" << endl;
}

staffNode* staffList::searchStaff(int sID)
{
	curr = head;
	while (curr != NULL)
	{
		if (curr->data.getId() == sID)
		{
			cout << "Staff Member with ID " << sID << " detail :" << endl;
			curr->data.getAll();
			return curr;
		}
		curr = curr->next;
	}
	cout << "Not a staff member" << endl;
	return NULL;
}

void staffList::displayStaff()
{
	curr = head;
	while (curr != NULL)
	{
		curr->data.display();
		curr = curr->next;
	}
}

void staffList::modifyStaff(int sID)
{
	curr = searchStaff(sID);

	cout << "\n\nNow modify detail : " << endl;
	curr->data.setAll();
}