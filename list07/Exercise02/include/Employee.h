#ifndef LIST07_2_EMPLOYEE_H
#define LIST07_2_EMPLOYEE_H

#include <string>

using namespace std;

/**
 * An employee that has a salary.
 */
class Employee {

protected:
    int id;
    string name;
    float salary;

public:

    Employee(int id, const string &name, float salary);

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    virtual float getSalary() const;

    void setSalary(float salary);
};


#endif //LIST07_2_EMPLOYEE_H
