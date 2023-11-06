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
    static int totalEmployees;
    public:
    Employee();
    Employee(int EmployeeID,string Name,string Email,float WorkingHour);
    ~Employee();
    void showEmployeeDetails();
    static void getTotalEmployees();
};
#endif