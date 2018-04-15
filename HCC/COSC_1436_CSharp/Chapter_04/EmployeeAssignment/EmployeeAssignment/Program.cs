using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmployeeAssignment
{
    class EmployeeApp
    {
        static void Main(string[] args)
        {
            Employee employee1 = new Employee("A000123456", "George", "Hopkins", "December 4, 2012", 
                                            "QA Inspector", (decimal)80000.50);
            Employee employee2 = new Employee("A000158963", "Juan", "Sandoval", "March 21, 2015", 
                                            "Test Technician", (decimal)50000.25);

            Console.WriteLine("Employee {0}: {1}, {2}, {3}, {4}, {5:C}", 
                                employee1.EmployeeNumber, employee1.FirstName, employee1.LastName,
                                employee1.DateOfHire, employee1.JobDescription, employee1.Salary);


            Console.WriteLine("Employee {0}: {1}, {2}, {3}, {4}, {5:C}",
                                employee2.EmployeeNumber, employee2.LastName, employee2.FirstName, 
                                employee2.DateOfHire, employee2.JobDescription, employee2.Salary);            
        }
    }
}
