#include <iostream>
#include <EmployeeApp.hpp>

using namespace std;
void employeeApp(void)
{

   Employee *employeePtrObj; 

    Developer devObj;
    Manager managerObj;

    employeePtrObj = &devObj;

    devObj.setBaseSalary(187.5);
    devObj.setHoursWorked(160);

    

    
    cout << "Developer salary :" <<employeePtrObj->calculateSalary() << endl;

    employeePtrObj = &managerObj;

    managerObj.setBaseSalary(500.0);
    managerObj.setHoursWorked(220);
    managerObj.setSalaryBandFactor(1.3);
    managerObj.setSubordinates(10);

    cout << "Manager salary :" <<employeePtrObj->calculateSalary() << endl;



    


}
