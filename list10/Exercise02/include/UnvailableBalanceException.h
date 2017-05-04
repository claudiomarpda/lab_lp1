#ifndef LIST010_2_UnavailableBalanceException_H
#define LIST010_2_UnavailableBalanceException_H

#include <stdexcept>

using namespace std;

class UnavailableBalanceException : public runtime_error {

public:
    UnavailableBalanceException() : runtime_error("Not enough balance.") {}
};

#endif //LIST010_2_UnavailableBalanceException_H
