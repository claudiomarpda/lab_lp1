#include <iostream>
#include "Account.h"

Account::Account(const string &clientName, float mensalSalary, const string &accountNumber, float balance)
        : clientName(clientName), mensalSalary(mensalSalary), accountNumber(accountNumber), balance(balance) {
    defineLimit();
}

Account::~Account() {
    std::cout << "Destructor of Account" << endl;
}

const string &Account::getClientName() const {
    return clientName;
}

void Account::setClientName(const string &clientName) {
    Account::clientName = clientName;
}

float Account::getMensalSalary() const {
    return mensalSalary;
}

void Account::setMensalSalary(float mensalSalary) {
    Account::mensalSalary = mensalSalary;
    defineLimit();
}

const string &Account::getAccountNumber() const {
    return accountNumber;
}

void Account::setAccountNumber(const string &accountNumber) {
    Account::accountNumber = accountNumber;
}

float Account::getBalance() const {
    return balance;
}

void Account::setBalance(float balance) {
    Account::balance = balance;
}

float Account::getLimit() const {
    return limit;
}

void Account::defineLimit() {
    Account::limit = mensalSalary * LIMIT_FACTOR;
}

void Account::withdraw(const double value) {
    Account::balance -= value;
}

void Account::deposit(const double value) {
    Account::balance += value;
}

void Account::print() {
    cout << "Name: " << getClientName() << "; Mensal salary: " << getMensalSalary()
         << "; Account number: " << getAccountNumber() << "; Balance: " << getBalance()
         << "; Limit: " << getLimit() << endl;
}
