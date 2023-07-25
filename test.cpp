// test.cpp

#include "atm.hpp"
#include <cassert>

void testATM() {
    ATM atm;

    // Test inserting a valid card and PIN
    assert(atm.insertCard(123456, 1234) == true);

    // Test selecting a valid account
    assert(atm.selectAccount(123456, 789) == true);

    // Test checking the balance
    assert(atm.checkBalance(789) == 1000);

    // Test depositing money
    atm.deposit(789, 500);
    assert(atm.checkBalance(789) == 1500);

    // Test withdrawing money with sufficient balance
    assert(atm.withdraw(789, 200) == true);
    assert(atm.checkBalance(789) == 1300);

    // Test withdrawing money with insufficient balance
    assert(atm.withdraw(789, 1400) == false);
    assert(atm.checkBalance(789) == 1300); // Balance should remain unchanged
}
