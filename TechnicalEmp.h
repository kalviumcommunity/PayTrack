// TechnicalEmp.h
#ifndef TECHNICALEMP_H
#define TECHNICALEMP_H

#include "Employee.h"

class TechnicalEmp : public Employee {
public:
    TechnicalEmp(int EmployeeID, string Name, string Email, float WorkingHour);

    void showEmployeeDetails() override;
};

#endif
