#ifndef LIST08_3_EMPLOYEE_H
#define LIST08_3_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;

public:

    Employee(const std::string &name, int id);

    virtual ~Employee();

    virtual double calculateSalary() = 0;

    const string &getName() const;

    int getId() const;
};


#endif //LIST08_3_EMPLOYEE_H
