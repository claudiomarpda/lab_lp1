#ifndef LIST07_4_HOURLYWORKER_H
#define LIST07_4_HOURLYWORKER_H

#include "Worker.h"

const static float REGULAR_HOURS = 40.0f;
const static float EXTRA_BONUS = 50.0f;

class HourlyWorker : public Worker {

public:
    HourlyWorker(const string &name, float salary);

    float calculatePayment(float hours) const;
};


#endif //LIST07_4_HOURLYWORKER_H
