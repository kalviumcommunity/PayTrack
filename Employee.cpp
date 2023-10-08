#include "Employee.h"

Employee::Employee(){}

Employee::Employee(int EmployeeID, string Name, string Email, float WorkingHour)
{this->EmployeeID=EmployeeID;
this->Name=Name;
this->Email=Email;
this->WorkingHour=WorkingHour;
}

Employee::~Employee(){
    cout<<"Employee destructor called"<<endl;
}

void Employee::showEmployeeDetails(){
    cout<<this->EmployeeID<<endl;
    cout<<this->Name<<endl;
    cout<<this->Email<<endl;
    cout<<this->WorkingHour<<endl;
}