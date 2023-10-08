#include "LeaveApplication.h"
#include <iostream>
using namespace std;

LeaveApplication::LeaveApplication(int EmployeeID,string LeaveType,string StartDate,string EndDate){
    this->EmployeeID=EmployeeID;
    this->LeaveType=LeaveType;
    this->StartDate=StartDate;
    this->EndDate=EndDate;
}
void LeaveApplication::ShowLeaveApplication(){
    cout<<this->EmployeeID<<endl;
    cout<<this->LeaveType<<endl;
    cout<<this->StartDate<<endl;
    cout<<this->EndDate<<endl;
}