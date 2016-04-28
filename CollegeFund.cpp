#include "CollegeFund.h"

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
