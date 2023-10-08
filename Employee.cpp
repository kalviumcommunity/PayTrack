#include "Employee.h"

Employee::Employee(int EmployeeID, string Name, string Email, float WorkingHour)
{this->EmployeeID=EmployeeID;
this->Name=Name;
this->Email=Email;
this->WorkingHour=WorkingHour;
}

void Employee::showEmployeeDetails(){
    cout<<this->EmployeeID<<endl;
    cout<<this->Name<<endl;
    cout<<this->Email<<endl;
    cout<<this->WorkingHour<<endl;
}