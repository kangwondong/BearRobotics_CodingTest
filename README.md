# BearRobotics_CodingTest


# ATM Application

This repository contains a simple ATM application implemented in C++. The application allows users to simulate ATM operations, such as inserting a card, entering a PIN, selecting an account, checking the balance, depositing, and withdrawing money.

## Build and Run Tests

To build and run the tests, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/kangwondong/BearRobotics_CodingTest.git
cd BearRobotics_CodingTest
```


2. Compile the code using g++:

```bash
g++ -o atm_app atm.cpp test.cpp
```

3. Run the tests:

```bash
./atm_app
```


# How to Use the ATM Application
Insert Card and enter PIN: When you run the ATM application, it will prompt you to enter your card number and PIN. Please provide valid numeric inputs for testing purposes.

Select Account: After entering the card number and PIN, the application will prompt you to enter the account number. Again, provide a valid numeric input for testing.

Check Balance: The application will display the current balance of the selected account.

Deposit: Enter the amount you want to deposit into the selected account.

Withdraw: Enter the amount you want to withdraw from the selected account. The application will check if there's enough balance before processing the withdrawal.

Please remember that this is a simple demonstration of an ATM application, and it lacks real security features or actual banking functionalities. It's not meant for production use but rather as a learning exercise or starting point for more complex projects.

## Example 1 : Valid Case

![example1](https://github.com/kangwondong/BearRobotics_CodingTest/assets/79675366/e73496f4-09b9-4ab8-a2e4-dbc63ba00770)

## Example 2 : Invalid Casea

![example2](https://github.com/kangwondong/BearRobotics_CodingTest/assets/79675366/8d328a53-301e-4eec-818b-c3d53392e09d)
