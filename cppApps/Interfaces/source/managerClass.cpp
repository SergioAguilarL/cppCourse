#include <managerClass.hpp>

    /*the porpuse of this file is to impelement methods asossiated to the MAnager classs*/

    int Manager::getSubordinates(void) const
    {
        return numSubordinates;
    }

    float Manager::getSalaryBandFactor(void) const
    {
        return salaryBandfactor;
    }

    void Manager::setSubordinates(int numSub)
    {
        numSubordinates = numSub;
    }

    void Manager::setSalaryBandFactor(float factor)
    {
        salaryBandfactor = factor;
    }

    /*override functions*/

    float Manager::calculateSalary() const  
    {
        float calculatedSalary_t = 0.0;
        float bonus_t = 0.0;
        
        calculatedSalary_t = getBaseSalary() * getHoursWorked();

        bonus_t = calculatedSalary_t * (getSubordinates()/getSalaryBandFactor());

        calculatedSalary_t+= bonus_t;

        return calculatedSalary_t;
    }

