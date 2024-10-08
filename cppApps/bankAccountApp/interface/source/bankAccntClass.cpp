#include <BankAccntClass.hpp>

/*The porpuse fo this file is to implement d3efinition for Class Bank Accnt*/



        /*Constructor */
        bankAccnt::bankAccnt(float balance, string accntNumber): balance(balance), accntNumber(accntNumber){}

        /*Destructor*/
        bankAccnt::~bankAccnt() {}

        /* Methods*/

        void bankAccnt::deposit(float deposit_t )
        {

                balance += deposit_t;
                

        }
        void bankAccnt::withDraw(float withDraw_t)
        {

                balance -= withDraw_t;
                
        }

        void bankAccnt::displayAccountInfo () const
        {
                cout << endl << "Account Balance " << balance <<  " Account Number: " << accntNumber << endl;
        }

        /*overloading the operator + to pass infor form bankaccnts*/
        bankAccnt& bankAccnt::operator+(bankAccnt &sourceAccnt)
        {
        float transferAmount = 0.0;
        
        cout << "Enter transfer amount: ";
        cin >> transferAmount;

        if (transferAmount > 0 && sourceAccnt.balance >= transferAmount)
        {
                sourceAccnt.withDraw(transferAmount);
                this->deposit(transferAmount);
                cout << "Transfer successful."  << endl;
        }
        else
        {
                cout << "Invalid transfer amount or insufficient funds." << endl;
        }
        
        return *this; // Returning reference to allow chaining
        }