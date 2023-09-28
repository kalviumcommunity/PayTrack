#include <iostream>
using namespace std;

class Employee{
    private:
    int EmployeeID;
    string Name;
    string Email;
    float WorkingHour;
    public:
    Employee(int employeeID,string name,string email,float workingHour){
        this->EmployeeID=employeeID;
        this->Name=name;
        this->Email=email;
        this->WorkingHour=workingHour; 
    }
    void showEmployeeDetails(){
        cout<<EmployeeID<<endl;
        cout<<Name<<endl;
        cout<<Email<<endl;
        cout<<WorkingHour<<endl;
    }
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
    public:
    LeaveApplication(int employeeID,string leaveType,string startDate,string endDate){
        this->EmployeeID=employeeID;
        this->LeaveType=leaveType;
        this->StartDate=startDate;
        this->EndDate=endDate;
    }
    void ShowLeaveApplication(){
        cout<<EmployeeID<<endl;
        cout<<LeaveType<<endl;
        cout<<StartDate<<endl;
        cout<<EndDate<<endl;
    }
};
class Salary{
    private:
    int employeeID;
    double salary;
};

int main(){
Employee employee1(90001, "Tanishka Dadhich", "tanishka@gmail.com", 90.5);
Attendance attendance1;
LeaveApplication leaveApp1(90001, "Festival Leave", "27.09.2023", "3.10.2023");
Salary salary1;
employee1.showEmployeeDetails();
leaveApp1.ShowLeaveApplication();
}