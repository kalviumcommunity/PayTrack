#include "LeaveApplication.h"
#include <iostream>
using namespace std;

LeaveApplication::LeaveApplication(int EmployeeID,string LeaveType,string StartDate,string EndDate){
    this->EmployeeID=EmployeeID;
    this->LeaveType=LeaveType;
    this->StartDate=StartDate;
    this->EndDate=EndDate;
}

LeaveApplication::~LeaveApplication(){
    cout<<"LeaveApplication destructor called"<<endl;
}

LeaveApplication::LeaveApplication(const LeaveApplication &other){
    this->EmployeeID=other.EmployeeID;
    this->LeaveType=other.LeaveType;
    this->StartDate=other.StartDate;
    this->EndDate=other.EndDate;
    cout<<"LeaveApplication Copy constructor called"<<endl;
}
void LeaveApplication::ShowLeaveApplication(){
    cout<<"employeeID:"<<this->EmployeeID<<endl;
    cout<<"Leave type:"<<this->LeaveType<<endl;
    cout<<"Start Date:"<<this->StartDate<<endl;
    cout<<"End Date:"<<this->EndDate<<endl;
}