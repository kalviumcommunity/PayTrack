#ifndef SALARY_H
#define SALARY_H
# include <iostream>
using namespace std;

template <typename T>
class Salary{
    private:
    int EmployeeID;
    T HourlyRate;
    T TotalHoursWorked;

    public:
    Salary(int EmployeeID,T HourlyRate,T TotalHoursWorked);
    ~Salary();
    void calculateSalary();
};
#endif
