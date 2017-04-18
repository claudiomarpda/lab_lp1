#include "SpecialAccount.h"

SpecialAccount::SpecialAccount(const string &clientName, float mensalSalary, const string &accountNumber, float balance) :
        Account(clientName, mensalSalary, accountNumber, balance) {
    defineLimit();
}

void SpecialAccount::defineLimit() {
    Account::limit = mensalSalary * LIMIT_FACTOR;
}
