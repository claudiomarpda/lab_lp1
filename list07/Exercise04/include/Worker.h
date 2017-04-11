#ifndef LIST07_4_WORKER_H
#define LIST07_4_WORKER_H

#include <string>

using namespace std;

class Worker {

protected:
    string name;
    float salary;

public:
    Worker(const string &name, float salary);

    const string &getName() const;

    void setName(const string &name);

    float getSalary() const;

    void setSalary(float salary);

    void printData() const;
};


#endif //LIST07_4_WORKER_H
