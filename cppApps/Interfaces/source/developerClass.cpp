#include <developperClass.hpp>


/*The porpuse of this file is to implement the methods assoiated to the Developer class*/

  float Developer::calculateSalary() const  
    {


        return (getBaseSalary() * getHoursWorked());
    }
