
#include <FractionClass.hpp>
#include <utils.hpp>

using namespace std;


/*the poorpuse of this file is to define the methods of class Fraction*/

void Fraction::simplyfy()
{
    int gcdResult; 

    gcdResult = gcd(numerator,denominator );

    numerator /= gcdResult;
    denominator /= gcdResult;


}


void Fraction::display()
{
    cout << endl <<numerator << "/" << denominator;
    
}


