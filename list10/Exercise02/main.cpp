#include <iostream>
#include "Account.h"
#include "SpecialAccount.h"

int main() {

    AbstractAccount* abstractAccount = new Account("PersonName", 20000, "333333", 0);
    try{
        abstractAccount->print();
        cout << "try to withdraw 5000..." << endl;
        abstractAccount->withdraw(5000);
    }
    catch(exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    delete abstractAccount;
    abstractAccount = NULL;

    return 0;
}