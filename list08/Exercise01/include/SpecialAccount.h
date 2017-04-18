#ifndef LIST08_1_SPECIALACCOUNT_H
#define LIST08_1_SPECIALACCOUNT_H

#include "Account.h"

class SpecialAccount : public Account{

public:
    SpecialAccount(const string &clientName, float mensalSalary, const string &accountNumber, float balance);

private:
    const static int LIMIT_FACTOR = 3;

    void defineLimit() override;
};


#endif //LIST08_1_SPECIALACCOUNT_H
