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
    static int LeaveCount;
public:
    LeaveApplication(int EmployeeID, string LeaveType, string StartDate, string EndDate);
    LeaveApplication(const LeaveApplication &other);
    ~LeaveApplication();
    void ShowLeaveApplication();
    static void ShowLeaveCount();
};
#endif