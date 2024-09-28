#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <iostream>
#include <string>

class Employee
{
protected:
    int EmployeeID;
    string Name;
    string Email;
    float WorkingHour;
    static int totalEmployees;
    public:
    Employee();
    Employee(int EmployeeID,string Name,string Email,float WorkingHour);
    ~Employee();
    virtual void showEmployeeDetails() = 0;
    static void getTotalEmployees();
};
#endif