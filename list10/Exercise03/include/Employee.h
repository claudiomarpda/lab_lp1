#ifndef LIST10_3_EMPLOYEE_H
#define LIST10_3_EMPLOYEE_H

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


#endif //LIST10_3_EMPLOYEE_H
