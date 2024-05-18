//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Employee {
//private:
//    string EmployeeID;
//    string Name;
//    string Department;
//    string Position;
//    string Salary;
//public:
//    Employee() {
//        cout << "Enter the Employee ID: ";
//        cin >> EmployeeID;
//        cout << "Enter the Name of Employee: ";
//        cin >> Name;
//        cout << "Enter the Department of Employee: ";
//        cin >> Department;
//        cout << "Enter the Position of Employee in the Office: ";
//        cin >> Position;
//        cout << "Enter the Salary of Employee: ";
//        cin >> Salary;
//    }
//
//    void displayEmployeeInfo() {
//        cout << "Employee ID: " << EmployeeID << endl;
//        cout << "Name: " << Name << endl;
//        cout << "Department: " << Department << endl;
//        cout << "Position: " << Position << endl;
//        cout << "Salary: " << Salary << endl;
//    }
//
//    string getEmployeeID() const {
//        return EmployeeID;
//    }
//
//    string getName() const {
//        return Name;
//    }
//
//    string getDepartment() const {
//        return Department;
//    }
//
//    string getPosition() const {
//        return Position;
//    }
//
//    string getSalary() const {
//        return Salary;
//    }
//};
//
//class Employee2 {
//private:
//    vector<Employee> employees;
//public:
//    void addEmployee() {
//        Employee emp;
//        employees.push_back(emp);
//    }
//
//    void displayAllEmployees() {
//        for (int i = 0; i < employees.size(); ++i) {
//            cout << "Employee " << i + 1 << ":" << endl;
//            employees[i].displayEmployeeInfo();
//            cout << endl;
//        }
//    }
//
//    void saveEmployeesToFile() {
//        ofstream outFile("employees.txt");
//        if (outFile.is_open()) {
//            for (int i = 0; i < employees.size(); ++i) {
//                outFile << "Employee " << i + 1 << ":" << endl;
//                outFile << "Employee ID: " << employees[i].getEmployeeID() << endl;
//                outFile << "Name: " << employees[i].getName() << endl;
//                outFile << "Department: " << employees[i].getDepartment() << endl;
//                outFile << "Position: " << employees[i].getPosition() << endl;
//                outFile << "Salary: " << employees[i].getSalary() << endl;
//                outFile << endl;
//            }
//            outFile.close();
//            cout << "Employee data saved to file." << endl;
//        }
//        else {
//            cout << "Unable to open file." << endl;
//        }
//    }
//};
//
//    void loadEmployeesFromFile() {
//        ifstream inFile("employees.txt");
//        if (inFile.is_open()) {
//            string line;
//            while (std::getline(inFile, line)) {
//                cout << line << endl;
//            }
//            inFile.close();
//        }
//        else {
//            cout << "Unable to open file." << endl;
//        }
//    }
//
//
//int main() {
//    Employee2 system;
//    char choice;
//    do {
//        cout << "1. Add Employee" << endl;
//        cout << "2. Display All Employees" << endl;
//        cout << "3. Save Employees to File" << endl;
//        cout << "4. Load Employees from File" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case '1':
//            system.addEmployee();
//            break;
//        case '2':
//            system.displayAllEmployees();
//            break;
//        case '3':
//            system.saveEmployeesToFile();
//            break;
//        case '4':
//           // system."loadEmployeesFromFile"();
//            break;
//        case '5':
//            cout << "Exiting..." << endl;
//            break;
//        default:
//            cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != '5');
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <vector>
//
//class Employee {
//private:
//    std::string employeeID;
//    std::string name;
//    std::string position;
//    double salary;
//
//public:
//    Employee(const std::string& empID, const std::string& empName, const std::string& empPosition, double empSalary)
//        : employeeID(empID), name(empName), position(empPosition), salary(empSalary) {}
//
//    // Getter methods
//    std::string getEmployeeID() const { return employeeID; }
//    std::string getName() const { return name; }
//    std::string getPosition() const { return position; }
//    double getSalary() const { return salary; }
//};
//
//class Department {
//private:
//    int departmentID;
//    std::string departmentName;
//    std::vector<Employee> employeeList;
//
//public:
//    // Constructor
//    Department(int deptID, const std::string& deptName)
//        : departmentID(deptID), departmentName(deptName) {}
//
//    // Getter and setter methods
//    int getDepartmentID() const { return departmentID; }
//    void setDepartmentID(int deptID) { departmentID = deptID; }
//
//    std::string getDepartmentName() const { return departmentName; }
//    void setDepartmentName(const std::string& deptName) { departmentName = deptName; }
//
//    // Method to add an employee to the department
//    void addEmployee(const Employee& employee) { employeeList.push_back(employee); }
//
//    // Method to remove an employee from the department
//    void removeEmployee(const std::string& empID) {
//        for (auto it = employeeList.begin(); it != employeeList.end(); ++it) {
//            if (it->getEmployeeID() == empID) {
//                employeeList.erase(it);
//                break;  // Stop searching once found
//            }
//        }
//    }
//
//    // Method to calculate total department salary
//    double calculateTotalSalary() const {
//        double totalSalary = 0.0;
//        for (const auto& employee : employeeList) {
//            totalSalary += employee.getSalary();
//        }
//        return totalSalary;
//    }
//};
//
//int main() {
//    // Example usage
//    Department dept(1, "IT Department");
//
//    // Add employees
//    dept.addEmployee(Employee("E001", "John Doe", "Software Engineer", 5000));
//    dept.addEmployee(Employee("E002", "Alice Smith", "System Analyst", 6000));
//
//    // Remove an employee
//    dept.removeEmployee("E002");
//
//    // Calculate total department salary
//    std::cout << "Total department salary: $" << dept.calculateTotalSalary() << std::endl;
//
//    return 0;
//}
