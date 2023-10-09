#include "Employee.h"
#include "Attendance.h"
#include "LeaveApplication.h"
#include "Salary.h"
#include <iostream>
using namespace std;

int main()
{
    int employeeID;
    string name;
    string email;
    float workingHour;
    string leaveType;
    string startDate;
    string endDate;
    int hourlypay;
    cout << "\n\n:::Adding New Employee:::\n";
    cout << "Enter EmployeeID:";
    cin >> employeeID;
    cout << "Enter name:";
    cin.ignore();
    getline(cin, name);
    cout << "Enter email:";
    cin >> email;
    cout << "Enter working hour:";
    cin >> workingHour;
    cin.ignore();
    Employee employee1(employeeID, name, email, workingHour);
    employee1.showEmployeeDetails();

    Attendance attendance1(employeeID);
    attendance1.checkIn();
    cout << "\n\n:::applying for leave:::\n";
    cout << "enter leave type:";
    getline(cin, leaveType);
    cout << "enter start date:";
    cin >> startDate;
    cout << "enter end date:";
    cin >> endDate;
    LeaveApplication leaveApp1(employeeID, leaveType, startDate, endDate);
    leaveApp1.ShowLeaveApplication();
    LeaveApplication leaveApp2(leaveApp1);
    leaveApp2.ShowLeaveApplication();
    cout << "\n\n:::Calculating salary:::\n";
    cout << "enter hourly pay:";
    cin >> hourlypay;
    Salary salary1(employeeID, workingHour, hourlypay);
    salary1.calculateSalary();
    attendance1.checkOut();
}