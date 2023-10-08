#ifndef SALARY_H
#define SALARY_H
# include <iostream>
using namespace std;

class Salary{
    private:
    int EmployeeID;
    double HourlyRate;
    double TotalHoursWorked;

    public:
    Salary(int EmployeeID,double HourlyRate,double TotalHoursWorked);
    void calculateSalary();
};
#endif
