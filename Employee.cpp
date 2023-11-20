#include "Employee.h"
int Employee::totalEmployees = 0;
Employee::Employee() {
    totalEmployees++;
}

Employee::Employee(int EmployeeID, string Name, string Email, float WorkingHour)
{
    this->EmployeeID = EmployeeID;
    this->Name = Name;
    this->Email = Email;
    this->WorkingHour = WorkingHour;
    totalEmployees++;
}

Employee::~Employee()
{
    cout << "Employee destructor called" << endl;
    totalEmployees--;
}

// void Employee::showEmployeeDetails()
// {
//     cout << "employeeID:" << this->EmployeeID << endl;
//     cout << "name:" << this->Name << endl;
//     cout << "email:" << this->Email << endl;
//     cout << "WorkingHour:" << this->WorkingHour << endl;
// }

 void Employee::getTotalEmployees()
{
    cout << "Total number of employees: " << totalEmployees<<endl;
}