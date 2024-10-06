#ifndef DEVELOPERCLASS_HPP
#define DEVELOPERCLASS_HPP

#include <empoloyeeClass.hpp>

class Developer : public Employee
{
    public:

        /*Contructor and destructor declaration in Empleyee Class*/
        Developer() = default;

        ~Developer(){};


         float calculateSalary() const override;




};

#endif /*DEVELOPERCLASS_HPP*/