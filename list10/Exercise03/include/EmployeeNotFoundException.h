#ifndef LIST10_3_EMPLOYEENOTFOUNDEXCEPTION_H
#define LIST10_3_EMPLOYEENOTFOUNDEXCEPTION_H

#include <stdexcept>

class EmployeeNotFoundException : public runtime_error {

public:
    EmployeeNotFoundException() : runtime_error("Employee not found.") {}
};

#endif //LIST10_3_EMPLOYEENOTFOUNDEXCEPTION_H
