#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <fstream>
using namespace std;

class BankAccount
{
    protected:
        string accountNumber,
               accountType,
               routingNumber,
               socialSecNumber;
        string firstName,
               middleName,
               lastName;
        int pinNumber;
        double balance,
               minimumBalance,
               monthlyFee;
    public:
        BankAccount();
        BankAccount(string firstName, string middleName, string lastName, 
                    string socialSecNumber, double balance, 
                    string accountType, int pinNumber);
        void withdraw(double amount);
        void deposit(double amount);
        double getBalance();
        bool transfer(string accountNumber);
        friend ostream& operator << (ostream& output, const BankAccount& bA);
        //GETTERS AND SETTERS
        double getBalance()const{return balance;}
        void setBalance(double balance){this->balance=balance;}

        string getAccountNumber()const{return accountNumber;}
        void setAccountNumber(string accountNumber){this->accountNumber=accountNumber;}

        string getAccountType()const{return accountType;}
        void setAccountType(string accountType){this->accountType=accountType;}

        string getRoutingNumber()const{return routingNumber;}
        void setRoutingNumber(string routingNumber){this->routingNumber=routingNumber;}

        string getSocialSecNumber()const{return socialSecNumber;}
        void setSocialSecNumber(string socialSecNumber){this->socialSecNumber=socialSecNumber;}
        
        string getFirstName()const{return firstName;}
        void setFirstName(string firstName){this->firstName=firstName;}
        string getMiddleName()const{return middleName;}
        void setMiddleName(string middleName){this->middleName=middleName;}
        string getLastName()const{return lastName;}
        void setLastName(string lastName){this->lastName=lastName;}

        int getPinNumber()const{return pinNumber;}
        void setPinNumber(int pinNumber){this->pinNumber=pinNumber;}

        double getMinimumBalance()const{return minimumBalance;}
        void setMinimumBalance(double minimumBalance){this->minimumBalance=minimumBalance;}

        double getMonthlyFee()const{return monthlyFee;}
        void setMonthlyFee(double monthlyFee){this->monthlyFee=monthlyFee;}
};

#endif //BANK_ACCOUNT_H
