#include <conio.h>
#include <iomanip>
#include <fstream>
#include "staffList.h"
#include "patientQueue.h"
#include "binaryTree.h"
struct patCount
{
	string day[2] = { "\0" };
	int counter = 0;
	int dayCount[7] = { 0,1,2,3,4,5,6 };
};

void intro()
{
	cout << "\t _______________________________________________________ " << endl;
	cout << "\t|                                                       |" << endl;
	cout << "\t|                SEMESTER PROJECT                       |" << endl;
	cout << "\t|_______________________________________________________|" << endl;
	cout << "\t|                                                       |" << endl;
	cout << "\t|            HOSPITAL MANAGEMENT SYSTEM                 |" << endl;
	cout << "\t|                                                       |" << endl;
	cout << "\t|_______________________________________________________|" << endl;
	cout << endl << setw(20) << "Submitted by : " << endl;
	cout << "\n\t\tMUBEEN AHMED JAWAD (01-134182-081)" << endl;
	cout << "\n\t\tUMAIR ILYAS (01-134182-108)" << endl;
	cout << endl << setw(20) << "Submitted to : " << endl;
	cout << "\n\t\tINSTRUCTOR: MOMINA MOETESUM" << endl;
	cout << "\n\t\tLAB ENGINEER: SYED SAQLAIN HASSAN" << endl;
	_getch();
	system("cls");
}

patCount admin()
{
	patCount pC;
	staffList staff;
	patientQueue obj;
	patientNode obji;
	char ch = 'n';
	string password, username;
	char choice;
	ifstream inFile;
	ofstream onFile;
	int attempt = 0;

	do
	{
		system("cls");
		cout << "\t _______________________________________________________ " << endl;
		cout << "\t|            HOSPITAL MANAGEMENT SYSTEM                 |" << endl;
		cout << "\t|_______________________________________________________|" << endl;
		cout << "\t _______________________________________________________ " << endl;
		cout << "\t|                                                       |" << endl;
		cout << "\t|      press (1) for Staff menu                         |" << endl;
		cout << "\t|      press (2) for Patient menu                       |" << endl;
		cout << "\t|      press (0) to exit                                |" << endl;
		cout << "\t|                                                       |" << endl;
		cout << "\t|_______________________________________________________|" << endl;
		cout << "\nEnter your choice : ";
		cin >> choice;
		system("cls");

		if (choice == '1')
		{
			do
			{
				cout << "\t _______________________________________________________ " << endl;
				cout << "\t|            HOSPITAL MANAGEMENT SYSTEM                 |" << endl;
				cout << "\t|_______________________________________________________|" << endl;
				cout << "\t _______________________________________________________ " << endl;
				cout << "\t|                                                       |" << endl;
				cout << "\t|                        LOGIN                          |" << endl;
				cout << "\t|_______________________________________________________|" << endl;

				cout << "\n\nEnter Username : ";		//admin
				cin >> username;
				cout << "\nEnter Password : ";		//admin
				cin >> password;

				if (username == "admin" && password == "admin")
				{
					system("cls");
					do 
					{
						cout << "\t _______________________________________________________ " << endl;
						cout << "\t|            HOSPITAL MANAGEMENT SYSTEM                 |" << endl;
						cout << "\t|_______________________________________________________|" << endl;
						cout << "\t _______________________________________________________ " << endl;
						cout << "\t|                                                       |" << endl;
						cout << "\t|      press (1) to Add Staff Member                    |" << endl;
						cout << "\t|      press (2) to delete Staff Member                 |" << endl;
						cout << "\t|      press (3) to search Staff Member                 |" << endl;
						cout << "\t|      press (4) to display Staff Member                |" << endl;
						cout << "\t|      press (5) to modify Staff Member                 |" << endl;
						cout << "\t|      press (0) to exit                                |" << endl;
						cout << "\t|                                                       |" << endl;
						cout << "\t|_______________________________________________________|" << endl;
						cout << "\n\nEnter your choice : ";
						cin >> choice;
						system("cls");

						if (choice == '1')
						{
							staff.addStaff();
							system("pause");
							system("cls");
						}

						else  if (choice == '2')
						{
							int sid;
							cout << "Enter Staff ID you want to delete : ";
							cin >> sid;
							staff.deleteStaff(sid);
							system("pause");
							system("cls");
						}

						else  if (choice == '3')
						{
							int sid;
							cout << "\n\n\tEnter Staff ID you want to search : ";
							cin >> sid;
							staff.searchStaff(sid);
							system("pause");
							system("cls");
						}

						else  if (choice == '4')
						{
							staff.displayStaff();

							system("pause");
							system("cls");
						}

						else  if (choice == '5')
						{
							int sid;
							cout << "Enter Staff ID you want to modify : ";
							cin >> sid;
							staff.modifyStaff(sid);
							system("pause");
							system("cls");
						}

						else if (choice == '0')
						{
							//admin();
						}
						else
						{
							cout << "invalid choice\n";
							system("pause");
							system("cls");
						}
						system("cls");
					} while (choice != '0');
				}

				else
				{
					system("cls");
					cout << "you username or password is incorrect, please try again\n";
					attempt++;
					system("pause");
					system("cls");
				}
			} while (attempt != 3);

			if (attempt >= 3)
			{
				//return ;
			}
		}

		if (choice == '2')
		{
			do 
			{
				cout << "\t _______________________________________________________ " << endl;
				cout << "\t|            HOSPITAL MANAGEMENT SYSTEM                 |" << endl;
				cout << "\t|_______________________________________________________|" << endl;
				cout << "\t._______________________________________________________." << endl;
				cout << "\t|                                                       |" << endl;
				cout << "\t|      press (1) to Add New Patient                     |" << endl;
				cout << "\t|      press (2) to Delete Patient                      |" << endl;
				cout << "\t|      press (3) to Display Patient                     |" << endl;
				cout << "\t|      press (4) to Search Patient                      |" << endl;
				cout << "\t|      press (5) to modify Patient                      |" << endl;
				cout << "\t|      press (0) to exit                                |" << endl;
				cout << "\t|                                                       |" << endl;
				cout << "\t|_______________________________________________________|" << endl;
				cout << "\nEnter your choice : ";
				cin >> choice;
				system("cls");

				if (choice == '1')
				{
					if (pC.counter == 0)
					{
						cout << "Enter day : ";
						cin >> pC.day[0];
						pC.counter++;
						if (pC.day[0] == "Monday")
						{
							pC.dayCount[0] = pC.dayCount[0] + pC.counter;
						}
						else if (pC.day[0] == "Tuesday")
						{
							pC.dayCount[1] = pC.dayCount[1] + pC.counter;
						}
						else if (pC.day[0] == "Wednesday")
						{
							pC.dayCount[2] = pC.dayCount[2] + pC.counter;
						}
						else if (pC.day[0] == "Thursday")
						{
							pC.dayCount[3] = pC.dayCount[3] + pC.counter;
						}
						else if (pC.day[0] == "Friday")
						{
							pC.dayCount[4] = pC.dayCount[4] + pC.counter;
						}
						else if (pC.day[0] == "Saturday")
						{
							pC.dayCount[5] = pC.dayCount[5] + pC.counter;
						}
						else if (pC.day[0] == "Sunday")
						{
							pC.dayCount[6] = pC.dayCount[6] + pC.counter;
						}
						cout << "Do you want to end the day: (y/n)" << endl;
						cin >> ch;
						if (ch == 'y')
						{
							pC.counter = 0;
						}
					}
					else
					{
						pC.counter++;
						if (pC.day[0] == "Monday")
						{
							pC.dayCount[0] = pC.dayCount[0] + pC.counter;
						}
						else if (pC.day[0] == "Tuesday")
						{
							pC.dayCount[1] = pC.dayCount[1] + pC.counter;
						}
						else if (pC.day[0] == "Wednesday")
						{
							pC.dayCount[2] = pC.dayCount[2] + pC.counter;
						}
						else if (pC.day[0] == "Thursday")
						{
							pC.dayCount[3] = pC.dayCount[3] + pC.counter;
						}
						else if (pC.day[0] == "Friday")
						{
							pC.dayCount[4] = pC.dayCount[4] + pC.counter;
						}
						else if (pC.day[0] == "Saturday")
						{
							pC.dayCount[5] = pC.dayCount[5] + pC.counter;
						}
						else if (pC.day[0] == "Sunday")
						{
							pC.dayCount[6] = pC.dayCount[6] + pC.counter;
						}
						else
						{
							cout << "invalid day input" << endl;
						}
						cout << "Do you want to end the day: (y/n)" << endl;
						cin >> ch;
						if (ch == 'y')
						{
							pC.counter = 0;
						}
					}
					obji.data.setAllPat();
						obj.enQueue(&obji);
						
						system("pause");
						system("cls");
					
				}

				else if (choice == '2')
				{
					obj.deQueue();
					system("pause");
					system("cls");
				}

				else if (choice == '3')
				{
					obj.displayQueue();

					system("pause");
					system("cls");

				}
				else if (choice == '4')
				{
					int id;
					cout << "Enter patient ID : ";
					cin >> id;
					obj.search(id);

					system("pause");
					system("cls");
				}

				else if (choice == '5')
				{
					int pid;
					cout << "Enter patient ID : ";
					cin >> pid;
					obj.modify(pid);


					system("pause");
					system("cls");
				}

				else if (choice == '0')
				{
					//admin();
					return pC;
				}

				else
				{
					cout << "Invalid input\n";
					system("pause");
					system("cls");
				}
				system("cls");
			} while (choice != '0');

		}

		else if (choice == '0')
		{
			exit(0);
		}

		else
		{
			cout << "invalid choice\n";
			system("pause");
		}
		system("cls");
	} while (choice != '0');
	return pC;
}


int main()
{
	patCount p;
	intro();
	p = admin();

	binaryTree obj;
	for (int i = 0; i < 1;i++)
	{		
		obj.root = obj.insert(obj.root, p.dayCount[i]);
    }
	obj.display(obj.root);

	system("pause");
	return 0;
}