#pragma once
#include "patient.h"

class patientNode
{
public:
	patient data;
	patientNode *next;
	patientNode();
};
