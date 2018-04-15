using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmployeeAssignment
{
    class Program
    {
        static void Main(string[] args)
        {
            Employee empl1 = new Employee("Walter", "White", (decimal)8000000.50);
            Employee empl2 = new Employee("Jesse", "Pinkman", (decimal)5000000.50);

            Console.WriteLine("Employee 1 First Name: {0}", empl1.FirstName);
            Console.WriteLine("Employee 1 Last Name: {0}", empl1.LastName);
            Console.WriteLine("Employee 1 Salary: {0:C}", empl1.Salary);

            Console.WriteLine("Employee 2 First Name: {0}", empl2.FirstName);
            Console.WriteLine("Employee 2 Last Name: {0}", empl2.LastName);
            Console.WriteLine("Employee 2 Salary: {0:C}", empl2.Salary);

            Console.WriteLine();
            Console.WriteLine("After 10% raise");

            empl1.Salary = empl1.Salary * (decimal)1.1;
            empl2.Salary = empl2.Salary * (decimal)1.1;
            Console.WriteLine("Employee 1 new salary: {0:C}", empl1.Salary);
            Console.WriteLine("Employee 2 new salary: {0:C}", empl2.Salary);
        }
    }
}
