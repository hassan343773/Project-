#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;

int open() {
	string userType;
	int accessGranted = -1; 
	
	do {
		cout << "Are you an Admin or a User? ";
		cin >> userType;
		cout << endl;

		if (userType == "Admin"|| userType=="admin") 
		{
			cout << "Access granted! Welcome." << endl;
			accessGranted = 1;
		}
		else if (userType == "User"|| userType=="user")
		{
			cout << "Access denied. This is not for you." << endl;

			accessGranted = 0; 
		}
		else
		{
			cout << "Invalid input. Please enter either 'Admin' or 'User'." << endl;
		}
	} while (accessGranted == -1); 

	return accessGranted;
}

int login() {
	int pinCode;
	int correctPinCode = 4321;
	int accessGranted = -1; 

	do
	{
		cout << "Enter the Admin Password To Take The Access:";
		cin >> pinCode;
		cout << endl;

		if (pinCode == correctPinCode) 
		{
			cout << "Login successful! Welcome!" << endl;
			accessGranted = 1; 
			break;
		}
		else 
		{
			cout << "Incorrect PinCode. Please try again." << endl;
		}
	} while (true); 

	return accessGranted;
}


class Employee 
{
private:
	string EmployeeID;
	string Name;
	string Department;
	string Position;
	string Salary;
public:
	Employee() 
	{
		cout << "Enter the Employee ID: ";
		cin >> EmployeeID;
		cout << "Enter the Name of Employee: ";
		cin >> Name;
		cout << "Enter the Department of Employee: ";
		cin >> Department;
		cout << "Enter the Position of Employee in the Office: ";
		cin >> Position;
		cout << "Enter the Salary of Employee: ";
		cin >> Salary;
	}

	void displayEmployeeInfo()const
	{
		cout << "Employee ID: " << EmployeeID << endl;
		cout << "Name: " << Name << endl;
		cout << "Department: " << Department << endl;
		cout << "Position: " << Position << endl;
		cout << "Salary: " << Salary << endl;
	}

	string getEmployeeID() const
	{
		return EmployeeID;
	}

	string getName() const 
	{
		return Name;
	}

	string getDepartment() const 
	{
		return Department;
	}

	string getPosition() const 
	{
		return Position;
	}

	string getSalary() const
	{
		return Salary;
	}
};
class Employee2 
{
private:
	vector<Employee> employees;
public:
	void addEmployee()
	{
		Employee emp;
		employees.push_back(emp);
	}

	void displayAllEmployees()
	{
		for (int i = 0; i < employees.size(); ++i)
		{
			cout << "Employee " << i + 1 << ":" << endl;
			employees[i].displayEmployeeInfo();
			cout << endl;
		}
	}

	void saveEmployeesToFile()
	{
		ofstream outFile("employees.txt");
		if (outFile.is_open()) 
		{
			for (int i = 0; i < employees.size(); ++i) 
			{
				outFile << "Employee " << i + 1 << ":" << endl;
				outFile << "Employee ID: " << employees[i].getEmployeeID() << endl;
				outFile << "Name: " << employees[i].getName() << endl;
				outFile << "Department: " << employees[i].getDepartment() << endl;
				outFile << "Position: " << employees[i].getPosition() << endl;
				outFile << "Salary: " << employees[i].getSalary() << endl;
				outFile << endl;
			}
			outFile.close();
			cout << "Employee data saved to file." << endl;
		}
		else 
		{
			cout << "Unable to open file." << endl;
		}
	}
	void loadEmployeesFromFile()
	{
		ifstream inFile("employees.txt");
		if (inFile.is_open())
		{
			string line;
			while (std::getline(inFile, line)) 
			{
				cout << line << endl;
			}
			inFile.close();
		}
		else 
		{
			cout << "Unable to open file." << endl;
		}
	}

};



class Login 
{
public:
	int login1() 
	{
		int i;
		i = 998;
		do {
			cout << "Enter the login PinCode to Sign In: ";
			cin >> i;
			cout << endl;

			if (i == 998)
			{
				cout << "You Successfully Logged In :)" << endl;
				return 1;
			}
			else 
			{
				cout << "Wrong Password :(" << endl;


			}
		} while (true);
		return 0;
	}
};

class Department  
{
private:
    int departmentID;
    string departmentName;
    string managerName;
    string location;
public:
    Department() 
	{
        cout << "Enter Department ID: ";
        cin >> departmentID;
		cout << "Enter Department Name: ";
		cin >> departmentName;
		cout <<endl<< "Enter Manager Name: " << endl;
       cin>> managerName;
        cout << "Enter Location: ";
        cin>> location;

    }

 
    int getDepartmentID() const
	{
        return departmentID;
    }

    string getDepartmentName() const 
	{
        return departmentName;
    }

    string getManagerName() const 
	{
        return managerName;
    }

    string getLocation() const 
	{
        return location;
    }


 
    void displayDepartment() const 
	{
        cout << "Department ID: " << departmentID << endl;
        cout << "Department Name: " << departmentName << endl;
        cout << "Manager Name: " << managerName << endl;
        cout << "Location of Department `  : " << location << endl;
    }
};
class Department2 
{
private:
	vector<Department> Departments;
public:
	void addDepartment()
	{
		Department dmp;
		Departments.push_back(dmp);

	}
	void managerName() 
	{
		Department dmp;
		Departments.push_back(dmp);
	}
	void Location()
	{
		Department dmp;
		Departments.push_back(dmp);
	}
	void displayAllDepartments() 
	{
		for (int i = 0; i < Departments.size(); ++i) 
		{
			cout << "Departments " << i + 1 << ":" << endl;
			Departments[i].getDepartmentName();
			cout << endl;
		}
	}

	void saveDepartmentToFile() 
	{
		ofstream outFile("Department.txt");
		if (outFile.is_open()) 
		{
			for (int i = 0; i < Departments.size(); ++i)
			{
				outFile << "Departments " << i + 1 << ":" << endl;
				outFile << "Department ID " << Departments[i].getDepartmentID() << endl;
				outFile << " Department Name: " << Departments[i].getDepartmentName() << endl;
				outFile << "Department Manager : " << Departments[i].getManagerName() << endl;
				outFile << "Location " << Departments[i].getLocation() << endl;
			}
			outFile.close();
			cout << "Departments data saved to file." << endl;
		}
		else
		{
			cout << "Unable to open file." << endl;
		}
	}
	void loadDepartmentsFromFile()
	{
		ifstream inFile("Departments.txt");
		if (inFile.is_open())
		{
			string line;
			while (std::getline(inFile, line))
			{
				cout << line << endl;
			}
			inFile.close();
		}
		else
		{
			cout << "Unable to open file." << endl;
		}
	}


};

class Login2 
{
public:
	int login2()
	{
		int j;
		j = 1998;
		do {
			cout << "Enter the login PinCode to khow about Task Information : ";
			cin >> j;

			if (j == 1998) 
			{
				cout << "You Successfully Logged In :)" << endl;
				return 1;
			}
			else
			{
				cout << "Wrong Password :(" << endl;
				

			}
		} while (true);
		return 0;
	}
};

class Task
{
private:
	int taskID;
	string DeadLine;
	string AssignedEmployee;
	string status;
	string  alltasks;
	string Description[3];

public:
	Task() 
	{
		cout << "Enter the Task ID: ";
		cin >> taskID;
		cout << endl;
		cout << "Enter the Dead Line :";
		cin >> DeadLine;
		cout << "Enter which this Task to be Assigened to the Employee :";
		cin >> AssignedEmployee;
		cout << "Status of this Task:";
		cin >> status;
			}
	int gettaskId() const 
	{
		return taskID;

	}


	string getDeadline() const 
	{
		return DeadLine;
	}

	string getassignedEmployee() const 
	{
		return AssignedEmployee;

	}

	string getstatus() const 
	{
		return status;
	}
	string getalltasks() const 
	{
		return alltasks;
	}


	void DisplayTask() 
	{
		cout << "Task ID" << endl;
		cout << "Dead Line " << endl;
		cout << "Assigned Employee" << endl;
		cout << "status " << endl;
		cout << "all tasks " << endl;
	}
};
	class task2
	{
		vector<Task> tasks;
	public:
		void addtaskID()
		{
			Task tk;
			tasks.push_back(tk);
		}

		void displayDeadLine()
		{
			for (int i = 0; i < tasks.size(); i++)
			{
				cout << "Deadline of Task " << i + 1 << ": " << tasks[i].getDeadline() << endl;
			}
		}

		void displayAssignedEmployee()
		{
			for (int i = 0; i < tasks.size(); i++)
			{
				cout << "Assigned Employee of Task " << i + 1 << ": " << tasks[i].getassignedEmployee() << endl;
			}
		}

		void displaystatus()
		{
			for (int i = 0; i < tasks.size(); i++)
			{
				cout << "Status of Task " << i + 1 << ": " << tasks[i].getstatus() << endl;
			}
		}

		void dislayalltasks()
		{
			for (int i = 0; i < tasks.size(); i++)
			{
				cout << "Task " << i + 1 << ":" << endl;
				tasks[i].DisplayTask();
				cout << endl;
			}
		}

		void displayAllltasksFile()
		{
			ofstream outfile("tasks.txt");
			if (outfile.is_open()) {
				for (int i = 0; i < tasks.size(); i++) 
				{
					outfile << "TasksID" << i + 1 << ":"<<tasks[i].gettaskId() << endl;

					outfile << "DeadLine" << i + 1 << ":" << tasks[i].getDeadline() << endl;

					outfile << "Assigned Employee" << i + 1 << ":" << tasks[i].getassignedEmployee() << endl;

					outfile << "Status" << i + 1<<":" << tasks[i].getstatus() << endl;

					

				}
				outfile.close();
				cout << "Tasks Data saved into the file :" << endl;

			}
			else 
			{
				cout << "unable to save the file " << endl;

			}
		}
		void loadTasksFromFile() 
		{
			ifstream infile("tasks.txt");
			if (infile.is_open())
			{
				string line;
				while (std::getline(infile, line))
				{
					cout << line << endl;
				}
				infile.close();
			}
			
			else 
			{
				cout << "unable to open file" << endl;
			}

		}
		


		};
	class Login3 
	{
		public:
			int login3() 
			{
				int k;
				k = 3998;
				do {
					cout << "Enter the login PinCode to khow about  Information Of Office  : ";
					cin >> k;
					cout << endl;

					if (k == 3998) 
					{
						cout << "You Successfully Logged In :)" << endl;
						return 1;
					}
					else {
						cout << "Wrong Password :(" << endl;


					}
				} while (true);
				return 0;
			}
			};
	class Meeting 
	{
	private:
		string meeting;
		string detail;
	public:
		 Meeting() 
		 {
			 cout << "Enter the detail of meeting ";
			 cin >> meeting;
			 cout << endl << "The detail Of all Task is :";

	}
		string  getMeeting() 
		{
			return meeting;

		 }
		string getDetail() 
		{
			return detail;
		}

	};
	class meeting2 
	{
		vector<Meeting> meetings;
	public:
		void AddMeeting() 
		{
			Meeting met;
			meetings.push_back(met);
		}
		void dislayallDetail() {
			for (int i = 0; i < meetings.size(); i++) 
			{
				cout << "All Detail  of the meeting are :" << i + 1 << ":" << endl;
				meetings[i].getDetail();

				cout << endl;
			}
		}

		void displayAllDetailFile() 
		{
			ofstream outfile("Meeting.txt");
			if (outfile.is_open()) {
				for (int i = 0; i < meetings.size(); i++) 
				{
					outfile << "Meeting " << i + 1 << ":" << meetings[i].getMeeting() << endl;
					outfile << "Detail" << i + 1 << ":" << meetings[i].getDetail() << endl;
					

				}
				outfile.close();
				cout << "Meeting Data saved into the file :" << endl;

			}
			else 
			{
				cout << "unable to save the file " << endl;

			}
		}
		void loadMeetingFromFile() 
		{
			ifstream infile("Meeting.txt");
			if (infile.is_open()) 
			{
				string line;
				while (std::getline(infile, line)) {
					cout << line << endl;
				}
				infile.close();
			}

			else 
			{
				cout << "unable to open file" << endl;
			}

		}


	};




		int main() 
		{
			system("cls");
			cout << "\t\t\t\t\t\t\t\tOffice Management System" << endl << endl;
			int access = open();
			int accessGranted = login();
			Employee2 system;
			char choice;
			do 
			{
				cout << "1. Add Employee" << endl;
				cout << "2. Display All Employees" << endl;
				cout << "3. Save Employees to File" << endl;
				cout << "4. Load Employees from File" << endl;
				cout << "5. Exit" << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				switch (choice) 
				{
				case '1':
					system.addEmployee();
					break;
				case '2':
					system.displayAllEmployees();
					break;
				case '3':
					system.saveEmployeesToFile();
					break;
				case '4':
					system.loadEmployeesFromFile();
					break;
				case '5':
					cout << "Exiting..." << endl;
					break;
				default:
					cout << "Invalid choice. Please try again." << endl;
				}
			} while (choice != '5');

			cout << endl << "\t\t\t\t\t\t\t\tInformation Of Department " << endl << endl;

			Login l;
			l.login1();

			Department2 department;

			char c;
			do {
				cout << "1:Add Departments :" << endl;
				cout << "2:Display All Depaertments :" << endl;
				cout << "3:Location Of Department :" << endl;
				cout << "4:Save Data to File :" << endl;
				cout << "5:Load Data To File :" << endl;
				cout << "6:Exit :" << endl;
				cout << "Enter your Choice :" << endl;
				cin >> c;
				switch (c) {
				case '1':
					department.addDepartment();
					break;
				case '2':
					department.displayAllDepartments();
					break;
						case '3':
					department.Location();
					break;
				case '4':
					department.saveDepartmentToFile();
					break;
				case'5':
					department.loadDepartmentsFromFile();
					break;
				case '6':
					cout << "Existing..." << endl;
					break;


				}
			} while (c != '6');
			cout << endl << "\t\t\t\t\t\t\t\tInformation Of Tasks Heald In Office  " << endl << endl;
			Login2 l2;
			l2.login2();

			task2 tas;
			char a;
			do 
			{
				cout << "1: Enter Tasks Detail " << endl;
				cout << "2:Display All Tasks " << endl;
				cout << "3:Save Data to File" << endl;
				cout << "4:Load data to File" << endl;
				cout << "5:Exit" << endl;
				cout << "Enter Your choice ";
				cin >> a;
				switch (a) 
				{
				case'1':
					tas.addtaskID();
					break;
				case '2':
					tas.dislayalltasks();
					break;
				case '3':
					tas.displayAllltasksFile();
					break;
				case '4':
					tas.loadTasksFromFile();
					break;
				case '5':
					cout << "Existing..." << endl;

					break;


				}
			} while (a != '5');

			cout << endl << "\t\t\t\t\t\t\t\tInformation Of Meetings  " << endl << endl;

			Login3 l3;
			l3.login3();

			cout << endl;
			meeting2 m;
			char b;
			do {
				cout << "1:Enter the Meeting Detail" << endl;
				cout << "2:Detail Of Meetings " << endl;
				cout << "3:Save Meeting Data to File " << endl;
				cout << "4:Load Meeting Data to File" << endl;
				cout << "5:Exit" << endl;
				cout << "Enter Your Choice ";
				cin >> b;
				switch (b) 
				{
				case '1':
					m.AddMeeting();
					break;
				case '2':
					m.dislayallDetail();
					break;
				case'3':
					m.displayAllDetailFile();
					break;
				case '4':
					m.loadMeetingFromFile();
					break;
				case '5':
					cout << "Exit from Meetings " << endl;
					break;
				}
			
			} while (b!='5');
			cout << "\t\t\t\t\t\t\t\tSelect the Option Where You Want To Go for Management " << endl << endl;

				char i;
				do
				{
					cout << "1. Manage Employees" << endl;
					cout << "2. Manage Departments" << endl;
					cout << "3. Manage Tasks" << endl;
					cout << "4. Manage Meetings" << endl;
					cout << "5. Exit" << endl;
					cout << "Enter your choice: ";
					cin >> i;
					switch (i)
					{
					case '1': 
					{
					
						char employeeChoice;
						do 
						{
							cout << "1. Add Employee" << endl;
							cout << "2. Display All Employees" << endl;
							cout << "3. Save Employees to File" << endl;
							cout << "4. Load Employees from File" << endl;
							cout << "5. Back to Main Menu" << endl;
							cout << "Enter your choice: ";
							cin >> employeeChoice;
							switch (employeeChoice) 
							{
							case '1':
								system.addEmployee();
								break;
							case '2':
								system.displayAllEmployees();
								break;
							case '3':
								system.saveEmployeesToFile();
								break;
							case '4':
								system.loadEmployeesFromFile();
								break;
							case '5':
								cout << "Going back to main menu..." << endl;
								break;
							default:
								cout << "Invalid choice. Please try again." << endl;
							}
						} while (employeeChoice != '5');
						break;
					}
					case '2': 
					{
						cout << endl << "\t\t\t\t\t\t\t\tInformation Of Department " << endl << endl;

						Login l;
						l.login1();

						Department2 department;

						char c;
						do
						{
							cout << "1:Add Departments :" << endl;

							cout << "2:Display All Depaertments :" << endl;

							cout << "3:Name Of Manager:" << endl;

							cout << "4:Location Of Department :" << endl;

							cout << "5:Save Data to File :" << endl;

							cout << "6:Load Data To File :" << endl;

							cout << "7:Exit :" << endl;

							cout << "Enter your Choice :" << endl;
							cin >> c;
							switch (c) {
							case '1':
								department.addDepartment();
								break;
							case '2':
								department.displayAllDepartments();
								break;
							case '3':
								department.managerName();
								break;
							case '4':
								department.Location();
								break;
							case '5':
								department.saveDepartmentToFile();
								break;
							case'6':
								department.loadDepartmentsFromFile();
								break;
							case '7':
								cout << "Existing..." << endl;
								break;


							}
						} while (c != '7');

						break;
					}
					case '3':
					{
						cout << endl << "\t\t\t\t\t\t\t\tInformation Of Tasks Heald In Office  " << endl << endl;
						task2 tas;
						char a;
						do {
							cout << "Enter Task Detail " << endl;

							cout << "5:Display All Tasks " << endl;

							cout << "6:Save Data to File" << endl;

							cout << "7:Load data to File" << endl;

							cout << "8:Exit" << endl;

							cout << "Enter Your choice ";
							cin >> a;
							switch (a) 
							{
							case'1':
								tas.addtaskID();
								break;
							case'2':
								tas.displayDeadLine();
								break;
							case '3':
								tas.displayAssignedEmployee();
								break;
							case '4':

								tas.displaystatus();
								break;
							case '5':
								tas.dislayalltasks();
								break;
							case '6':
								tas.displayAllltasksFile();
								break;
							case '7':
								tas.loadTasksFromFile();
								break;
							case '8':
								cout << "Existing..." << endl;

								break;


							}
						} while (a != '8');

						break;
					}
					case '4': {
						meeting2 m;
						char b;
						do {
							cout << "1:Enter the Meeting Detail" << endl;

							cout << "2:Detail Of Meetings " << endl;

							cout << "3:Save Meeting Data to File " << endl;

							cout << "4:Load Meeting Data to File" << endl;

							cout << "5:Exit" << endl;

							cout << "6:Enter Your Choice ";
							cin >> b;
							switch (b) 
							{
							case '1':
								m.AddMeeting();
								break;
							case '2':
								m.dislayallDetail();
								break;
							case'3':
								m.displayAllDetailFile();
								break;
							case '4':
								m.loadMeetingFromFile();
								break;
							case '5':
								cout << "Exit from Meetings " << endl;
								break;
							}

						}
						while (b != '5');



						break;
					}
					case '5':
						cout << "Exiting..." << endl;
						break;
					default:
						cout << "Invalid choice. Please try again." << endl;
					}
				} while (i != '5');

				return 0;
			}


			

			

