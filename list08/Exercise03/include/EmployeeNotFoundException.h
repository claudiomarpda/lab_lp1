#ifndef LIST08_3_EMPLOYEENOTFOUNDEXCEPTION_H
#define LIST08_3_EMPLOYEENOTFOUNDEXCEPTION_H

#include <stdexcept>

class EmployeeNotFoundException : public runtime_error {

public:
    EmployeeNotFoundException() : runtime_error("Employee not found.") {}
};

#endif //LIST08_3_EMPLOYEENOTFOUNDEXCEPTION_H
