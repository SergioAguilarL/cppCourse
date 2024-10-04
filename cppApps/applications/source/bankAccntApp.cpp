

#include <bankAccntApp.hpp>

void bankAccntApp(void)
{

    bankAccnt bankAccntObj(0,"1234");
    bankAccnt bankAccntObj2(0,"5678");

    bankAccntObj.displayAccountInfo();
    
    bankAccntObj.deposit(50.0);

    bankAccntObj.displayAccountInfo();

    bankAccntObj.withDraw(25.0);

    bankAccntObj.displayAccountInfo();

    /*tranfer fonds from 1234 to 5678*/

    bankAccntObj2.displayAccountInfo();

    bankAccntObj2 + bankAccntObj;

    bankAccntObj.displayAccountInfo();

    bankAccntObj2.displayAccountInfo();


}