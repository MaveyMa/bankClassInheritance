#include "BankAccount.h"
#include <iostream>
#include <fstream>
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

ostream& operator << (ostream& output, const BankAccount& bA)
{
    output << "********************************" << endl;
    output << "* * B A N K*  *A C C O U N T * * " << endl;
    output << "Name: " << bA.firstName << " "
                       << bA.middleName << " "
                       << bA.lastName << endl;
    output << "Account Number: " << bA.accountNumber << endl;
    output << "Account Type: " << bA.accountType << endl;
    output << "Routing Number: " << bA.routingNumber << endl;
    output << "Social Security #: " << bA.socialSecNumber << endl;
    output << "Pin #: " << bA.pinNumber << endl;
    output << "Balance: " << bA.balance << endl;
    output << "Minimum Balance: " << bA.minimumBalance << endl;
    output << "Monthly Fee: " << bA.monthlyFee << endl;
    output << "********************************" << endl;
    return output;
}//END OVERLOADED OPERATOR <<
