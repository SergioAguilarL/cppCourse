#ifndef EMPLOYEECLASS_HPP
#define EMPLOYEECLASS_HPP


class Employee
{
    public:

/*         /*Contructor and destructor declaration in Empleyee Class*/
       /* Employee() = default;

        ~Employee(){}; */

        /*Methdos for Employee class*/

        /* Getters*/

        float getBaseSalary() const;

        int getHoursWorked() const;

        /*Setters*/
        void setBaseSalary(float newSalary); 

        void setHoursWorked(int hours);

        /*Virtual methods for overide fucntions*/

        virtual float calculateSalary() const = 0;




    protected:

    float baseSalary;
    int hoursWork; 

};

#endif /*EMPLOYEECLASS_HPP*/