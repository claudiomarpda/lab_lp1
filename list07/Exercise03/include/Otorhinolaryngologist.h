#ifndef LIST07_3_OTORHINOLARYNGOLOGIST_H
#define LIST07_3_OTORHINOLARYNGOLOGIST_H

#include "Doctor.h"
#include <string>

class Otorhinolaryngologist : public Doctor {

private:
    string specialization;

public:
    Otorhinolaryngologist(const string &name, float height, float weight, const string &specialization);

    void printData() const override;

    void doSpecialization();

    const string &getSpecialization() const;

    void setSpecialization(const string &specialization);
};


#endif //LIST07_3_OTORHINOLARYNGOLOGIST_H
