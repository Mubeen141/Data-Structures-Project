#include "patientQueue.h"


patientQueue::patientQueue()
{
	front = rear = NULL;
}

void patientQueue::enQueue(patientNode* x)
{
	patientNode *tmp = new patientNode;
	
	tmp->data.setAge(x->data.getAge());
	tmp->data.setCellNo(x->data.getCellNumber());
	tmp->data.setBloodGroup(x->data.getBloodGroup());
	tmp->data.setCNIC(x->data.getCNIC());
	tmp->data.iscritical(x->data.getcritical());
	tmp->data.setFirstName(x->data.getFirstName());
	tmp->data.setLastName(x->data.getLasttName());
	tmp->data.setGender(x->data.getGender());
	tmp->data.setPatID(x->data.getPatID());

	tmp->next = NULL;
	if (front == NULL && rear == NULL)
	{
		front = rear = tmp;
		return;
	}
	rear->next = tmp;
	rear = tmp;
}

void patientQueue::deQueue()
{
	if (front == NULL) 
	{
		cout << "underflow" << endl;
		return;
	}
	cout << "Patient with ID " << front->data.patientID << " attended doctor " << endl;
	if (front == rear)		//if only one patient is there
		front = rear = NULL;
	else
		front = front->next;
}

patientNode* patientQueue::search(int patID)
{
	patientNode* curr = front;
	while (curr != NULL)
	{
		if (curr->data.getPatID() == patID)
		{
			cout << "Patient with ID " << patID << " detail :" << endl;
			curr->data.getAllPat();
			return curr;
		}
		curr = curr->next;
	}
	cout << "Not a Patient ID. Enter valid ID.." << endl;
	return NULL;
}

void patientQueue::displayQueue()
{
	patientNode* temp = front;
	while (temp != NULL)
	{
		temp->data.getAllPat(); cout << " ";
		temp = temp->next;
	}
	cout << endl;
}

void patientQueue::modify(int patientID)
{
	front = search(patientID);

	cout << "\n\nNow modify detail : " << endl;
	front->data.setAllPat();
}