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
    cout<<"employeeID:"<<this->EmployeeID<<endl;
    cout<<"name:"<<this->Name<<endl;
    cout<<"email:"<<this->Email<<endl;
    cout<<"WorkingHour:"<<this->WorkingHour<<endl;
}