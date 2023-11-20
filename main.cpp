#include "Employee.h"
#include "Attendance.h"
#include "LeaveApplication.h"
#include "Salary.h"
#include <iostream>
#include <vector>
#include <cstdlib> // for system("pause")
#include <regex>
using namespace std;

vector<Employee*> employees;
vector<LeaveApplication*> leaveApplications;

void clearScreen() {
    system("cls");
}

bool isEmailValid(const string& email) {
    // Validate email format with one '@' character
    return regex_match(email, regex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$"));
}

bool isDateFormatValid(const string& date) {
    // Validate date format (DD-MM-YYYY)
    return regex_match(date, regex("^(0[1-9]|[12][0-9]|3[01])-(0[1-9]|1[0-2])-(\\d{4})$"));
}

void displayError(const string& errorMessage) {
    clearScreen();
    cout << "Error: " << errorMessage << endl;
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

int main() {
    int choice;
    int employeeID = 1;

    while (true) {
        clearScreen();
        cout << "*****************************************************\n";
        cout << "* Employee and Leave Application Management System *\n";
        cout << "*****************************************************\n";
        cout << "1. Add New Employee\n";
        cout << "2. Apply for Leave\n";
        cout << "3. Show Employee Details\n";
        cout << "4. Show Leave Applications\n";
        cout << "5. Show Total Employees\n";
        cout << "6. Show Leave Application Count\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1: // Add New Employee
                {
                    clearScreen();
                    string name, email;
                    float workingHour;

                    cout << "**** Add New Employee ****\n";
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter email: ";
                    cin >> email;

                    if (!isEmailValid(email)) {
                        displayError("Invalid email format. Please enter a valid email address.");
                        break;
                    }

                    cout << "Enter working hour: ";
                    cin >> workingHour;

                    employees.push_back(new Employee(employeeID++, name, email, workingHour));

                    // Display the "Employee added Successfully" message for a few seconds
                    cout << "Employee added successfully!\n";
                    system("sleep 2"); // Wait for 2 seconds
                }
                break;

            case 2: // Apply for Leave
                {
                    clearScreen();
                    int employeeID;
                    string leaveType, startDate, endDate;

                    cout << "**** Apply for Leave ****\n";
                    cout << "Enter Employee ID: ";
                    cin >> employeeID;
                    cout << "Enter Leave Type: ";
                    cin.ignore();
                    getline(cin, leaveType);
                    cout << "Enter Start Date (DD-MM-YYYY): ";
                    cin >> startDate;
                    cout << "Enter End Date (DD-MM-YYYY): ";
                    cin >> endDate;

                    if (employeeID < 1 || employeeID > employees.size() || !isDateFormatValid(startDate) || !isDateFormatValid(endDate)) {
                        displayError("Invalid Employee ID or date format. Please try again.");
                        break;
                    }

                    leaveApplications.push_back(new LeaveApplication(employeeID, leaveType, startDate, endDate));
                    cout << "Leave application submitted!\n";
                    system("sleep 2"); // Wait for 2 seconds
                }
                break;

            case 3: // Show Employee Details
                {
                    clearScreen();
                    cout << "**** Employee Details ****\n";
                    for (Employee* emp : employees) {
                        emp->showEmployeeDetails();
                    }
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                break;

            case 4: // Show Leave Applications
                {
                    clearScreen();
                    cout << "**** Leave Applications ****\n";
                    for (LeaveApplication* leaveApp : leaveApplications) {
                        leaveApp->ShowLeaveApplication();
                    }
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                break;

            case 5: // Show Total Employees
                {
                    clearScreen();
                    cout << "**** Total Employees ****\n";
                    cout << "Total Employees: " << employees.size() << endl;
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                break;

            case 6: // Show Leave Application Count
                {
                    clearScreen();
                    cout << "**** Leave Application Count ****\n";
                    cout << "Leave Application Count: " << leaveApplications.size() << endl;
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                }
                break;

            case 7: // Exit
                {
                    clearScreen();
                    for (Employee* emp : employees) {
                        delete emp;
                    }
                    employees.clear();
                    for (LeaveApplication* leaveApp : leaveApplications) {
                        delete leaveApp;
                    }
                    leaveApplications.clear();
                    cout << "Goodbye!\n";
                    system("sleep 2"); // Wait for 2 seconds
                    return 0;
                }
                break;

            default:
                displayError("Invalid choice. Please try again.");
                break;
        }
    }

    return 0;
}

