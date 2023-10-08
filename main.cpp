#include "Employee.h"
#include "Attendance.h"
#include "LeaveApplication.h"
#include "Salary.h"
#include <iostream>
using namespace std;

int main(){
Employee employee1(90001, "Tanishka Dadhich", "tanishka@gmail.com", 90.5);
Attendance attendance1(90001);
LeaveApplication leaveApp1(90001, "Festival Leave", "27.09.2023", "3.10.2023");
LeaveApplication leaveApp2(leaveApp1);
Salary salary1(90001,500,110);
employee1.showEmployeeDetails();
leaveApp1.ShowLeaveApplication();
attendance1.checkIn();
attendance1.checkOut();
leaveApp2.ShowLeaveApplication();
}