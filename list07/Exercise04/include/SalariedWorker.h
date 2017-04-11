#ifndef LIST07_4_SALARIEDWORKER_H
#define LIST07_4_SALARIEDWORKER_H


#include "Worker.h"

class SalariedWorker : public Worker {

public:

    SalariedWorker(const string &name, float salary);

    float calculatePayment() const;
};


#endif //LIST07_4_SALARIEDWORKER_H
