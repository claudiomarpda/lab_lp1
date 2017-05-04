#include <iostream>
#include "SpecialAccount.h"

SpecialAccount::SpecialAccount(const string &clientName, float mensalSalary, const string &accountNumber, float balance) :
        Account(clientName, mensalSalary, accountNumber, balance) {
    defineLimit();
}

SpecialAccount::~SpecialAccount() {
    // std::cout << "Destructor of SpecialAccount" << std::endl;
}

void SpecialAccount::defineLimit() {
    Account::limit = mensalSalary * LIMIT_FACTOR;
}
