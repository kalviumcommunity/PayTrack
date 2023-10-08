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
    cout<<this->EmployeeID<<endl;
    cout<<this->LeaveType<<endl;
    cout<<this->StartDate<<endl;
    cout<<this->EndDate<<endl;
}