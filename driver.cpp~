//Name: Mavey Ma
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
    cout << "==================================" << endl;
    cout << "NEW CAR SAVINGS" << endl;
    cout << newCarSavings;
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
    cout << "==================================" << endl;
    cout << "TONY'S FUND FOR COLLEGE" << endl;
    cout << tonysFund4College;
    //Now for each account apply the interest (use function). newCarSavings balance should now be 3030.00, tonysFund4College’s balance should now be 10,500.00
    newCarSavings.applyInterest();
    tonysFund4College.applyInterest();
    cout << "==================================" << endl;
    cout << "NEW CAR SAVINGS" << endl;
    cout << newCarSavings;
    cout << "==================================" << endl;
    cout << "TONY'S FUND FOR COLLEGE" << endl;
    cout << tonysFund4College;
    return 0;
}//END MAIN
