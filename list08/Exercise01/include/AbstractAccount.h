#ifndef LIST08_1_ABSTRACTACCOUNT_H
#define LIST08_1_ABSTRACTACCOUNT_H

class AbstractAccount {

public:
    virtual void withdraw(const double value) = 0 ;

    virtual void deposit(const double value) = 0;

    virtual void print() = 0;
};

#endif //LIST08_1_ABSTRACTACCOUNT_H
