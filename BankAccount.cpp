#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    accountNumber = "";
    accountType = "";
    routingNumber = "";
    socialSecNumber = "";
    firstName = "";
    middleName = "";
    lastName = "";
    pinNumber = 0;
    balance = 0;
    minimumBalance = 0;
    monthlyFee = 0;
}//END DEFAULT CONSTRUCTOR

BankAccount::BankAccount(string firstName, string middleName, string lastName, 
                         string socialSecNumber, double balance, 
                         string accountType, int pinNumber)
{
    setFirstName(firstName);
    setMiddleName(middleName);
    setLastName(lastName);
    setSocialSecNumber(socialSecNumber);
    setBalance(balance);
    setAccountType(accountType);
    setPinNumber(pinNumber);
}//END OVERLOADED CONSTRUCTOR

void BankAccount::withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Error: You cannot withdraw more than $" 
             << balance << ". Try again." << endl;
    }
    else
    {
        balance -= amount;
    }
    return;
}//END WITHDRAW

void BankAccount::deposit(double amount)
{
    if (amount <= 0)
    {
        cout << "Error: You must deposit more than $0. Try again." << endl;
    }
    else
    {
        balance += amount;
    }
    return;
}//END DEPOSIT

bool BankAccount::transfer(string accountNumber)
{
    double transfer;
    cout << "Enter amount to transfer to Account " << accountNumber << ": ";
    cin >> transfer;
    if (transfer > balance)
    {
        cout << "Error: You cannot transfer more than $" 
             << balance << ". Try again." << endl;
        return false;
    }
    else
    {
        balance -= transfer;
        return true;
    }
}//END DEPOSIT
