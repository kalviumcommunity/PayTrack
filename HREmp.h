#ifndef HREMP_H
#define HREMP_H

#include "Employee.h"

class HREmp : public Employee {
public:
    HREmp(int EmployeeID, string Name, string Email, float WorkingHour);

    void showEmployeeDetails() override;
};

#endif
