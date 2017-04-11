#ifndef LIST07_3_SURGEON_H
#define LIST07_3_SURGEON_H

#include <string>
#include "Doctor.h"

using namespace std;

class Surgeon : public Doctor {

private:
    string specialization;

public:
    Surgeon(const string &name, float height, float weight, const string &specialization);

    void printData() const override ;

    void doSpecialization() const;

    const string &getSpecialization() const;

    void setSpecialization(const string &specialization);
};


#endif //LIST07_3_SURGEON_H
