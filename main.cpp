#include "Employee.h"
#include "Attendance.h"
#include "LeaveApplication.h"
#include "Salary.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Employee*> employees; // Declare a vector of pointers to Employee objects
vector<LeaveApplication*> leaveApplications; // Declare a vector of pointers to LeaveApplication objects

int main() {
    int choice;
    int employeeID;
    string name;
    string email;
    float workingHour;
    string leaveType;
    string startDate;
    string endDate;

    while (true) {
        cout << "\n\n:::Employee and Leave Application Management System:::\n";
        cout << "1. Add New Employee\n";
        cout << "2. Apply for Leave\n";
        cout << "3. Show Employee Details\n";
        cout << "4. Show Leave Applications\n";
        cout << "5. Show Total Employees\n";
        cout << "6. Show Leave Application Count\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Add New Employee
                cout << "Enter EmployeeID: ";
                cin >> employeeID;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter email: ";
                cin >> email;
                cout << "Enter working hour: ";
                cin >> workingHour;
                cin.ignore();
                employees.push_back(new Employee(employeeID, name, email, workingHour));
                break;

            case 2: // Apply for Leave
                cout << "Enter Employee ID: ";
                cin >> employeeID;
                cout << "Enter Leave Type: ";
                cin.ignore();
                getline(cin, leaveType);
                cout << "Enter Start Date: ";
                cin >> startDate;
                cout << "Enter End Date: ";
                cin >> endDate;
                cin.ignore();
                leaveApplications.push_back(new LeaveApplication(employeeID, leaveType, startDate, endDate));
                break;

            case 3: // Show Employee Details
                // Implementation for showing employee details here
                 cout << "Employee details:\n";
                for (Employee* emp : employees) {
                    emp->showEmployeeDetails();
                }
                break;
                break;

            case 4: // Show Leave Applications
                cout << "Leave Applications:\n";
                for (LeaveApplication* leaveApp : leaveApplications) {
                    leaveApp->ShowLeaveApplication();
                }
                break;

            case 5: // Show Total Employees
                Employee::getTotalEmployees();
                break;

            case 6: // Show Leave Application Count
                // Implementation for showing leave application count here
                LeaveApplication::ShowLeaveCount();
                break;

            case 7: // Exit
                // Cleanup: Delete dynamically allocated Employee and LeaveApplication objects
                for (Employee* emp : employees) {
                    delete emp;
                }
                employees.clear();
                for (LeaveApplication* leaveApp : leaveApplications) {
                    delete leaveApp;
                }
                leaveApplications.clear();
                cout << "Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}