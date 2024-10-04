#include <operatoroverload.hpp>


void operatorOverload(void)
{

    Fraction fracObj(1,2);
    Fraction fracObj2(1,3);

    fracObj.display();

    fracObj2.display();

    Fraction fracRes = fracObj + fracObj2;

    fracRes.display();

    fracRes = fracObj - fracObj2;

    fracRes.display();

    fracRes = fracObj == fracObj2;

    fracRes.display();

}