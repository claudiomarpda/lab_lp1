#ifndef LIST10_2_ACCOUNT_H
#define LIST10_2_ACCOUNT_H

#include "AbstractAccount.h"
#include <string>

using namespace std;

class Account : public AbstractAccount {

private:
    const static int LIMIT_FACTOR = 2;
    virtual void defineLimit();

protected:
    string clientName;
    float mensalSalary;
    string accountNumber;
    float balance;
    float limit;

public:

    Account(const string &clientName, float mensalSalary, const string &accountNumber, float balance);

    virtual ~Account();

    const string &getClientName() const;

    void setClientName(const string &clientName);

    float getMensalSalary() const;

    void setMensalSalary(float mensalSalary);

    const string &getAccountNumber() const;

    void setAccountNumber(const string &accountNumber);

    float getBalance() const;

    void setBalance(float balance);

    float getLimit() const;

    void withdraw(const double value) throw(UnavailableBalanceException) override;

    void deposit(const double value) override;

    void print() override;
};


#endif //LIST10_2_ACCOUNT_H
