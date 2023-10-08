#include "Attendance.h"
#include <iostream>
using namespace std;
#include <ctime>

Attendance::Attendance(int EmployeeID){
this->EmployeeID=EmployeeID;
}
Attendance::~Attendance(){
cout<<"Attendance destructor called"<<endl;
}
void Attendance::checkIn(){
    time_t currentTime;
    time(&currentTime);

    this->CheckInTime=ctime(&currentTime);
    cout<<CheckInTime;
}

void Attendance::checkOut(){
    time_t currentTime;
    time(&currentTime);
    this->CheckOutTime=ctime(&currentTime); 
    cout<<CheckInTime;
}