# include "Salary.h"
Salary::Salary(int EmployeeID, double HourlyRate,double TotalHoursWorked){
this -> EmployeeID = EmployeeID;
this -> HourlyRate = HourlyRate;
this -> TotalHoursWorked = TotalHoursWorked;
}
Salary::~Salary(){
    cout<<"Salary destructor called"<<endl;
}
void Salary::calculateSalary(){
    cout<<"Rs."<<this->HourlyRate*this->TotalHoursWorked<<endl;
}