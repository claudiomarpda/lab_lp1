#ifndef LIST07_3_DOCTOR_H
#define LIST07_3_DOCTOR_H

#include <string>

using namespace std;

class Doctor {

private:
    string name;
    float height; // meter
    float weight; // kg

public:
    Doctor(const string &name, float height, float weight);

    const string &getName() const;

    void setName(const string &name);

    float getHeight() const;

    void setHeight(float height);

    float getWeight() const;

    void setWeight(float weight);

    virtual void printData() const;
};


#endif //LIST07_3_DOCTOR_H
