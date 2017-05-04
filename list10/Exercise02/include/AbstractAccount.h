#ifndef LIST10_2_ABSTRACTACCOUNT_H
#define LIST10_2_ABSTRACTACCOUNT_H

#include "UnvailableBalanceException.h"

class AbstractAccount {

public:

	virtual ~AbstractAccount() = 0;

    virtual void withdraw(const double value) throw(UnavailableBalanceException) = 0;

    virtual void deposit(const double value) = 0;

    virtual void print() = 0;
};

#endif //LIST10_2_ABSTRACTACCOUNT_H
