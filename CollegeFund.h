#ifndef COLLEGE_FUND_H
#define COLLEGE_FUND_H
#include <string>
#include "SavingsAccount.h"
using namespace std;

class CollegeFund : public SavingsAccount
{
    protected:
        string recipientFirstName,
               recipientMiddleName,
               recipientLastName,
               recipientSocialSecNum,
               restrictions[30];
        int recipientAge,
            numRestrictions;
        bool is18;    
    public:
        CollegeFund();
        CollegeFund(string recipientFirstName, string recipientMiddleName,
                    string recipientLastName, string recipientSocialSecNum,
                    int recipientAge, bool is18, double balance);
        bool canRecieve();
        void addRestriction(string restriction);
        friend ostream& operator << (ostream& output, const CollegeFund& cF);
        //GETTERS AND SETTERS
        string getRecipientFirstName()const{return recipientFirstName;}
        void setRecipientFirstName(string recipientFirstName){this->recipientFirstName=recipientFirstName;}

        string getRecipientMiddleName()const{return recipientMiddleName;}
        void setRecipientMiddleName(string recipientMiddleName){this->recipientMiddleName=recipientMiddleName;}

        string getRecipientLastName()const{return recipientLastName;}
        void setRecipientLastName(string recipientLastName){this->recipientLastName=recipientLastName;}

        string getRecipientSocialSecNum()const{return recipientSocialSecNum;}
        void setRecipientSocialSecNum(string recipientSocialSecNum){this->recipientSocialSecNum=recipientSocialSecNum;}
        
        int getRecipientAge()const{return recipientAge;}
        void setRecipientAge(int recipientAge){this->recipientAge=recipientAge;}

        int getNumRestrictions()const{return numRestrictions;}
        void setNumRestrictions(int numRestrictions){this->numRestrictions=numRestrictions;}

        bool getIs18()const{return is18;}
        void setIs18(bool is18){this->is18=is18;}
};

#endif //COLLEGE_FUND_H
