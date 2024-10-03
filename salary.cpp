# include "Salary.h"
template<typename T>
Salary<T>::Salary(int EmployeeID, T HourlyRate,T TotalHoursWorked){
this -> EmployeeID = EmployeeID;
this -> HourlyRate = HourlyRate;
this -> TotalHoursWorked = TotalHoursWorked;
}

template<typename T>
Salary<T>::~Salary(){
    cout<<"Salary destructor called"<<endl;
}

template<typename T>
void Salary<T>::calculateSalary(){
    cout<<"Rs."<<this->HourlyRate*this->TotalHoursWorked<<endl;
}