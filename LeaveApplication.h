#ifndef LEAVEAPPLICATION_H
#define LEAVEAPPLICATION_H
using namespace std;
#include <string>

class LeaveApplication
{
private:
    int EmployeeID;
    string LeaveType;
    string StartDate;
    string EndDate;

public:
    LeaveApplication(int EmployeeID, string LeaveType, string StartDate, string EndDate);
    void ShowLeaveApplication();
};
#endif