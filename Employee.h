#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <iostream>
#include <string>

class Employee
{
private:
    int EmployeeID;
    string Name;
    string Email;
    float WorkingHour;
    public:
    Employee(int EmployeeID,string Name,string Email,float WorkingHour);
    void showEmployeeDetails();
};
#endif