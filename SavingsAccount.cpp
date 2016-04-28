#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double interestRate, double withdrawLimit,
                               bool isMonthlyTransferActive, bool monthlyTransferAmount,
                               bool isFrozen, double balance)
{
    if (interestRate >= 0)
    {
        setInterestRate(interestRate);
    }
    else
    {
        setInterestRate(0);
    }
    if (withdrawLimit >= 0)
    {
        setWithdrawLimit(withdrawLimit);
    }
    else
    {
        setWithdrawLimit(0);
    }
    setMonthlyTransferAmount(isMonthlyTransferActive);
    setIsMonthlyTransferActive(monthlyTransferAmount);
    setIsFrozen(isFrozen);
    if (balance >= 0)
    {
        setBalance(balance);
    }
    else
    {
        setBalance(0);
    }
}//END OVERLOADED CONSTRUCTOR


void SavingsAccount::applyInterest()
{
    //10% interest rate
    //add to balance the interest gained
    //balance * .10 == interest
    // add interest to balance
    balance += (interestRate * balance);
    return;
}//END APPLY INTEREST 
