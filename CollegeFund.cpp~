#include "CollegeFund.h"

CollegeFund::CollegeFund()
{
    setRecipientFirstName("");
    setRecipientMiddleName("");
    setRecipientLastName("");
    setRecipientSocialSecNum("");
    setRecipientAge(0);
    setIs18(false);
    setBalance(0);
}//END DEFAULT CONSTRUCTOR

CollegeFund::CollegeFund(string recipientFirstName, string recipientMiddleName,
                        string recipientLastName, string recipientSocialSecNum,
                        int recipientAge, bool is18, double balance)
{
    setRecipientFirstName(recipientFirstName);
    setRecipientMiddleName(recipientMiddleName);
    setRecipientLastName(recipientLastName);
    setRecipientSocialSecNum(recipientSocialSecNum);
    if (recipientAge >= 0)
    {
        setRecipientAge(recipientAge);
    }
    else
    {
        setRecipientAge(0);
    }

    if (recipientAge >= 18)
    {
        setIs18(true);
    }
    else
    {
        setIs18(false);
    }
    if (balance >= 0)
    {
        setBalance(balance);
    }
    else
    {
        setBalance(0);
    }
}//END OVERLOADED CONSTRUCTOR

bool CollegeFund::canRecieve()
{
    return is18;
}//END CAN RECEIVE
        
void CollegeFund::addRestriction(string restriction)
{
    restrictions[numRestrictions] = restriction;
    numRestrictions++;
    return;
}//END ADD RESTRICTION

ostream& operator << (ostream& output, const CollegeFund& cF)
{

output << "********************************" << endl;
    output << "* * B A N K*  *A C C O U N T * * " << endl;
    output << "Name: " << cF.firstName << " "
                       << cF.middleName << " "
                       << cF.lastName << endl;
    output << "Account Number: " << cF.accountNumber << endl;
    output << "Account Type: " << cF.accountType << endl;
    output << "Routing Number: " << cF.routingNumber << endl;
    output << "Social Security #: " << cF.socialSecNumber << endl;
    output << "Pin #: " << cF.pinNumber << endl;
    output << "Balance: $" << cF.balance << endl;
    output << "Minimum Balance: $" << cF.minimumBalance << endl;
    output << "Monthly Fee: $" << cF.monthlyFee << endl;
    output << "********************************" << endl;
    output << "* S A V I N G S  A C C O U N T * " << endl;
    output << "Interest Rate: " << cF.interestRate << "%" << endl;
    output << "Withdraw Limit: $" << cF.withdrawLimit << endl;
    output << "Monthly Transfer Active: " << cF.isMonthlyTransferActive << endl;
    output << "Monthly Transfer Amount: $" << cF.monthlyTransferAmount << endl;
    output << "Account Frozen: " << cF.isFrozen << endl;
    output << "********************************" << endl;
    output << "* *C O L L E G E *  * F U N D* * " << endl;
    output << "Recipient Name: " << cF.recipientFirstName << " "
                                 << cF.recipientMiddleName << " "
                                 << cF.recipientLastName << endl;
    output << "Recipient Social Security #: " << cF.recipientSocialSecNum << endl;
    output << "Recipient Age: " << cF.recipientAge << endl;
    output << "Able to Withdraw: " << cF.is18 << endl;
    output << "Restrictions:" << endl;
    for (int i=0; i<cF.numRestrictions; i++)
    {
        output << i+1 << ". " << cF.restrictions[cF.numRestrictions] << endl;
    }
    output << "********************************" << endl;

    return output;
}
