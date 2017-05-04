#ifndef LIST10_2_SPECIALACCOUNT_H
#define LIST10_2_SPECIALACCOUNT_H

#include "Account.h"

class SpecialAccount : public Account{

public:

	~SpecialAccount();

    SpecialAccount(const string &clientName, float mensalSalary, const string &accountNumber, float balance);

private:
    const static int LIMIT_FACTOR = 3;

    void defineLimit() override;
};


#endif //LIST10_2_SPECIALACCOUNT_H
