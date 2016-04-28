#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "BankAccount.h"
#include <fstream>
using namespace std;
class SavingsAccount : public BankAccount
{
    protected:
        double interestRate,
               withdrawLimit,
               monthlyTransferAmount;
        bool isMonthlyTransferActive,
             isFrozen;
    public:
        SavingsAccount();
        SavingsAccount(double interestRate, double withdrawLimit,
                       bool isMonthlyTransferActive, double monthlyTransferAmount,
                       bool isFrozen, double balance);
        void applyInterest();
        friend ostream& operator << (ostream& output, const SavingsAccount& sA);
        //GETTERS AND SETTERS
        double getInterestRate()const{return interestRate;}
        void setInterestRate(double interestRate){this->interestRate=interestRate;}

        double getWithdrawLimit()const{return withdrawLimit;}
        void setWithdrawLimit(double withdrawLimit){this->withdrawLimit=withdrawLimit;}

        double getMonthlyTransferAmount()const{return monthlyTransferAmount;}
        void setMonthlyTransferAmount(double monthlyTransferAmount){this->monthlyTransferAmount=monthlyTransferAmount;}

        bool getIsMonthlyTransferActive()const{return isMonthlyTransferActive;}
        void setIsMonthlyTransferActive(bool isMonthlyTransferActive){this->isMonthlyTransferActive=isMonthlyTransferActive;}
        
        bool getIsFrozen()const{return isFrozen;}
        void setIsFrozen(bool isFrozen){this->isFrozen=isFrozen;}
};

#endif //SAVINGS_ACCOUNT_H


