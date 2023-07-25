// main.cpp

#include "atm.hpp"

using namespace std;

// Function definitions for the ATM class

bool ATM::insertCard(int cardNumber, int pin) {
    // Assume the bank API validates the PIN and returns a boolean result
    bool isValidPIN = bankValidatePIN(cardNumber, pin);
    return isValidPIN;
}

bool ATM::selectAccount(int cardNumber, int accountNumber) {
    // Assume the bank API validates the account number and returns a boolean result
    bool isValidAccount = bankValidateAccount(cardNumber, accountNumber);
    return isValidAccount;
}

int ATM::checkBalance(int accountNumber) {
    return accounts[accountNumber].balance;
}

void ATM::deposit(int accountNumber, int amount) {
    accounts[accountNumber].balance += amount;
}

bool ATM::withdraw(int accountNumber, int amount) {
    // Check if the account has sufficient balance
    if (accounts[accountNumber].balance >= amount) {
        accounts[accountNumber].balance -= amount;
        return true;
    }
    return false;
}

// Dummy functions to simulate bank API validations
bool ATM::bankValidatePIN(int cardNumber, int pin) {
    // Assume some logic here to validate the PIN with the bank API
    // Return true for demonstration purposes
    return true;
}

bool ATM::bankValidateAccount(int cardNumber, int accountNumber) {
    // Assume some logic here to validate the account number with the bank API
    // Return true for demonstration purposes
    return true;
}

int main() {
    ATM atm;

    // Insert Card and enter PIN
    int cardNumber, pin;
    cout << "Enter card number: ";
    if (!(cin >> cardNumber)) {
        cout << "Invalid input" << endl;
        return 1;
    }

    cout << "Enter PIN: ";
    if (!(cin >> pin)) {
        cout << "Invalid input" << endl;
        return 1;
    }

    bool isValidPIN = atm.insertCard(cardNumber, pin);

    if (isValidPIN) {
        cout << "PIN is valid!" << endl;

        // Select Account
        int accountNumber;
        cout << "Enter account number: ";
        if (!(cin >> accountNumber)) {
            cout << "Invalid input" << endl;
            return 1;
        }

        bool isValidAccount = atm.selectAccount(cardNumber, accountNumber);

        if (isValidAccount) {
            cout << "Account is valid!" << endl;

            // Check Balance
            int balance = atm.checkBalance(accountNumber);
            cout << "Account Balance: $" << balance << endl;

            // Deposit
            int depositAmount;
            cout << "Enter deposit amount: ";
            if (!(cin >> depositAmount)) {
                cout << "Invalid input" << endl;
                return 1;
            }

            atm.deposit(accountNumber, depositAmount);
            cout << "Deposited: $" << depositAmount << endl;

            // Check Updated Balance
            balance = atm.checkBalance(accountNumber);
            cout << "Updated Balance: $" << balance << endl;

            // Withdraw
            int withdrawAmount;
            cout << "Enter withdraw amount: ";
            if (!(cin >> withdrawAmount)) {
                cout << "Invalid input" << endl;
                return 1;
            }

            bool isWithdrawSuccessful = atm.withdraw(accountNumber, withdrawAmount);
            if (isWithdrawSuccessful) {
                cout << "Withdrawn: $" << withdrawAmount << endl;
            } else {
                cout << "Insufficient Balance for Withdrawal!" << endl;
            }

            // Check Updated Balance after Withdrawal
            balance = atm.checkBalance(accountNumber);
            cout << "Updated Balance after Withdrawal: $" << balance << endl;
        } else {
            cout << "Invalid Account!" << endl;
        }
    } else {
        cout << "Invalid PIN!" << endl;
    }

    return 0;
}