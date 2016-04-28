#include "SavingsAccount.h"
#include <fstream>
using namespace std;

SavingsAccount::SavingsAccount()
{
    setInterestRate(0);
    setWithdrawLimit(0);
    setMonthlyTransferAmount(0);
    setIsMonthlyTransferActive(false);
    setIsFrozen(true);
    setBalance(0);
}//END DEFAULT CONSTRUCTOR

SavingsAccount::SavingsAccount(double interestRate, double withdrawLimit,
                               bool isMonthlyTransferActive, double monthlyTransferAmount,
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
    setIsMonthlyTransferActive(isMonthlyTransferActive);
    setMonthlyTransferAmount(monthlyTransferAmount);
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

ostream& operator << (ostream& output, const SavingsAccount& sA)
{
    output << "********************************" << endl;
    output << "* * B A N K*  *A C C O U N T * * " << endl;
    output << "Name: " << sA.firstName << " "
                       << sA.middleName << " "
                       << sA.lastName << endl;
    output << "Account Number: " << sA.accountNumber << endl;
    output << "Account Type: " << sA.accountType << endl;
    output << "Routing Number: " << sA.routingNumber << endl;
    output << "Social Security #: " << sA.socialSecNumber << endl;
    output << "Pin #: " << sA.pinNumber << endl;
    output << "Balance: $" << sA.balance << endl;
    output << "Minimum Balance: $" << sA.minimumBalance << endl;
    output << "Monthly Fee: $" << sA.monthlyFee << endl;
    output << "********************************" << endl;
    output << "* S A V I N G S  A C C O U N T * " << endl;
    output << "Interest Rate: " << sA.interestRate << "%" << endl;
    output << "Withdraw Limit: $" << sA.withdrawLimit << endl;
    output << "Monthly Transfer Active: " << sA.isMonthlyTransferActive << endl;
    output << "Monthly Transfer Amount: $" << sA.monthlyTransferAmount << endl;
    output << "Account Frozen: " << sA.isFrozen << endl;
    output << "********************************" << endl;
    return output;
}
