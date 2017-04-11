#include "SalariedWorker.h"

SalariedWorker::SalariedWorker(const string &name, float salary) : Worker(name, salary) {}

float SalariedWorker::calculatePayment() const {
    return salary;
}
