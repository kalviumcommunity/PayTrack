#include <iostream>
using namespace std;

class Employee{
    private:
    int EmployeeID;
    string Name;
    string Email;
    float workingHour;
};

     
class Attendance {
    private:
    int EmployeeID;
    string checkInTime;
    string checkOutTime;
    string Date;
    public:
    void checkIn(string checkInTime){
        this->checkInTime=checkInTime;
        };
    void checkOut(string checkOutTime){
        this->checkOutTime=checkOutTime;
        };
    

};
class LeaveApplication{
    private:
    int EmployeeID;
    string LeaveType;
    string StartDate;
    string EndDate;
};
class Salary{
    private:
    int employeeID;
    double salary;
};

int main(){
Employee employee1;
Attendance attendance1;
LeaveApplication leaveApp1;
Salary salary1;
}