#ifndef HELLLOWORLD_HPP
#define HELLLOWORLD_HPP

#include <iostream>
#include <utils.hpp>

using namespace std;


/*The porpuse of this file is to define the class Fraction */

class Fraction
{
    public: 

        Fraction(int num = 0, int den = 0) : numerator(num) , denominator(den) {}

        ~Fraction(){};

        void simplyfy();
        void display();

    Fraction operator+(const Fraction &Frac)
    {

        Fraction newFraction; 
        newFraction.numerator = ((numerator * Frac.denominator) +  (denominator * Frac.numerator) );
        newFraction.denominator = denominator * Frac.denominator;

        newFraction.simplyfy();

        return newFraction;



    }

    Fraction operator-(const Fraction &Frac)
    {

        Fraction newFraction; 
        newFraction.numerator = ((numerator * Frac.denominator) -  (denominator * Frac.numerator) );
        newFraction.denominator = denominator * Frac.denominator;

        newFraction.simplyfy();

        return newFraction;

    }

    Fraction operator ==(const Fraction &Frac)
    {

        Fraction newFraction; 
        newFraction.numerator = ((numerator * Frac.denominator) >= (denominator * Frac.numerator)) ? numerator:Frac.numerator;
        newFraction.denominator = ((numerator * Frac.denominator) >= (denominator * Frac.numerator)) ? denominator:Frac.denominator;

        newFraction.simplyfy();

        return newFraction;
        
    }


    private: 

    int numerator; 
    int denominator;



};



#endif //HELLLOWORLD_HPP