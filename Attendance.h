#ifndef ATTENDANCE_H
#define ATTENDANCE_H
#include <string>

using namespace std;

class Attendance
{
private:
    int EmployeeID;
    string CheckInTime;
    string CheckOutTime;
    string Date;
    public:
    void checkIn();
    void checkOut();
};
#endif