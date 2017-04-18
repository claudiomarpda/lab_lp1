#include <iostream>
#include "Account.h"
#include "SpecialAccount.h"

int main() {

    Account account("Name01", 15000, "111111", 0);
    SpecialAccount specialAccount("Name02", 20000, "222222", 0);

    cout << "Before operations" << endl;
    account.print();
    account.setMensalSalary(17000);
    account.deposit(10000);
    account.withdraw(5000);
    cout << "After operations" << endl;
    account.print();
    cout << endl;

    cout << "Before operations" << endl;
    specialAccount.print();
    specialAccount.setMensalSalary(17000);
    specialAccount.deposit(10000);
    specialAccount.withdraw(5000);
    cout << "After operations" << endl;
    specialAccount.print();
    cout << endl;

    cout << "--------- Polymorphism ---------" << endl;
    AbstractAccount* abstractAccount1 = &account;
    abstractAccount1->print();
    cout << endl;

    AbstractAccount* abstractAccount2 = &specialAccount;
    abstractAccount2->print();
    cout << endl;

    AbstractAccount* abstractAccount3 = new Account("Name3", 20000, "333333", 0);
    abstractAccount3->print();
    abstractAccount3->deposit(20000);
    abstractAccount3->withdraw(5000);
    abstractAccount3->print();
    cout << endl;

    AbstractAccount* abstractAccount4 = new Account("Name4", 10000, "333333", 0);
    abstractAccount4->print();
    abstractAccount4->deposit(5000);
    abstractAccount4->withdraw(1000);
    abstractAccount4->print();
    cout << endl;

    delete abstractAccount3;
    delete abstractAccount4;
    abstractAccount3 = NULL;
    abstractAccount4 = NULL;

    return 0;
}