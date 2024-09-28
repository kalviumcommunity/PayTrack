// HREmp.cpp
#include "HREmp.h"
#include <iostream>

HREmp::HREmp(int EmployeeID, string Name, string Email, float WorkingHour)
    : Employee(EmployeeID, Name, Email, WorkingHour) {}

void HREmp::showEmployeeDetails() {
    cout << "employeeID:" << this->EmployeeID << endl;
    cout << "name:" << this->Name << endl;
    cout << "email:" << this->Email << endl;
    cout << "WorkingHour:" << this->WorkingHour << endl;
}
