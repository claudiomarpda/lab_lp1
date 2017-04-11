#ifndef LIST07_3_OPHTHALMOLOGIST_H
#define LIST07_3_OPHTHALMOLOGIST_H

#include "Doctor.h"
#include <string>

class Ophthalmologist : public Doctor {

private:

    string specialization;

public:

    Ophthalmologist(const string &name, float height, float weight, const string &specialization);

    void printData() const override;

    void doSpecialization();

    const string &getSpecialization() const;

    void setSpecialization(const string &specialization);
};


#endif //LIST07_3_OPHTHALMOLOGIST_H
