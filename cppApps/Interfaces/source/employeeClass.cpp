#include <empoloyeeClass.hpp>


        /*The porpuse of this file is to impelemt native methods to the Employee base class*/

        float Employee::getBaseSalary() const
        {
            return baseSalary;
        }


        int Employee::getHoursWorked() const
        {
            return hoursWork;
        }

        void Employee::setBaseSalary(float newSalary)
        {
            baseSalary = newSalary;
        }

        void Employee::setHoursWorked(int hours)
        {
            hoursWork = hours;
        }