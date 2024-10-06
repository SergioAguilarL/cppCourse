#ifndef MANAGERCLASS_HPP
#define MANAGERCLASS_HPP

#include <empoloyeeClass.hpp>

class Manager : public Employee
{
    public:

        /*Contructor and destructor declaration in Empleyee Class*/
        Manager() = default;

        ~Manager(){};

        /*Methods for Manager class*/

        /*Getters*/

        int getSubordinates(void) const;

        float getSalaryBandFactor(void) const;

        /*Setters*/

        void setSubordinates(int numSub);

        void setSalaryBandFactor(float factor);
        
        /*override functions*/


         float calculateSalary() const override;


    private:

    int numSubordinates; 
    float salaryBandfactor;

};

#endif /*MANAGERCLASS_HPP*/