#ifndef BANKACCNTCLASS_HPP
#define BANKACCNTCLASS_HPP

#include <iostream>
using namespace std;

class bankAccnt
{
    public:

        /*Constructor and destructor declaration for bankAccnt class*/

        bankAccnt(float balance, string accntNumber);

        ~bankAccnt();

        /* Methods declarations for bankAccnt*/

        void deposit(float deposit_t );
        void withDraw(float withDraw_t);
        void displayAccountInfo() const;

        /*operator overlaods*/

        bankAccnt& operator+(bankAccnt &bankAccntObj);




    private:
        float balance;
        string accntNumber;  

};


#endif /*BANKACCNTCLASS_HPP*/