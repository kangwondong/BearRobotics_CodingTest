// atm.hpp

#ifndef ATM_HPP
#define ATM_HPP

#include <iostream>
#include <unordered_map>

// Simple Account class to represent bank accounts
class Account {
public:
    int balance;

    Account() : balance(0) {} // Default constructor

    Account(int initialBalance) : balance(initialBalance) {}
};

// Simple ATM class to handle the ATM operations
class ATM {
public:
    // Map to store account numbers and their corresponding Account objects
    std::unordered_map<int, Account> accounts;

    // Function to insert the card and enter the PIN
    bool insertCard(int cardNumber, int pin);

    // Function to select the account based on the card number
    bool selectAccount(int cardNumber, int accountNumber);

    // Function to check the balance of the selected account
    int checkBalance(int accountNumber);

    // Function to deposit money into the selected account
    void deposit(int accountNumber, int amount);

    // Function to withdraw money from the selected account
    bool withdraw(int accountNumber, int amount);

private:
    // Dummy functions to simulate bank API validations
    bool bankValidatePIN(int cardNumber, int pin);

    bool bankValidateAccount(int cardNumber, int accountNumber);
};

#endif
