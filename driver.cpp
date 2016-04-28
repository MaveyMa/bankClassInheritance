#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CollegeFund.h"
#include <iostream>
using namespace std;

int main()
{
    SavingsAccount newCarSavings;
    CollegeFund tonysFund4College;

    newCarSavings.setBalance(3000);
    newCarSavings.setFirstName("Tony");
    newCarSavings.setLastName("Suarez");
    newCarSavings.setSocialSecNumber("123-45-6789");
    newCarSavings.setIsFrozen(false);
    newCarSavings.setMinimumBalance(100);
    newCarSavings.setMonthlyFee(0);
    newCarSavings.setIsMonthlyTransferActive(true);
    newCarSavings.setMonthlyTransferAmount(200);
    newCarSavings.setInterestRate(0.01);
    newCarSavings.setWithdrawLimit(5000);

    tonysFund4College.setFirstName("Tony");
    tonysFund4College.setLastName("Suarez");
    tonysFund4College.setRecipientFirstName("Tony");
    tonysFund4College.setRecipientMiddleName("Suarez");
    tonysFund4College.setRecipientLastName("Jr.");
    tonysFund4College.setRecipientSocialSecNum("123-45-8890");
    tonysFund4College.setRecipientAge(10);
    tonysFund4College.setIs18(false);
    tonysFund4College.setBalance(10000);
    tonysFund4College.setInterestRate(0.05);
    
    cout << "HELLO PANDA!" << endl; 
    return 0;
}//END MAIN
