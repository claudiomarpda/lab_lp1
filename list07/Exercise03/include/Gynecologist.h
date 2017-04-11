//
// Created by mz on 11/04/17.
//

#ifndef LIST07_3_GYNECOLOGIST_H
#define LIST07_3_GYNECOLOGIST_H


#include "Doctor.h"

class Gynecologist : public Doctor {

private:
    string specialization;
public:

    Gynecologist(const string &name, float height, float weight, const string &specialization);

    void printData() const override;

    void doSpecialization () const;

    const string &getSpecialization() const;

    void setSpecialization(const string &specialization);
};


#endif //LIST07_3_GYNECOLOGIST_H
