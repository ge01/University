using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmployeeAssignment
{
    class Employee
    {
        public string EmployeeNumber { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string DateOfHire { get; set; }
        public string JobDescription { get; set; }
        private decimal _salary;

        // Constructor
        public Employee(string employeeNumber, string firstName, string lastName, string dateOfHire,
                        string jobDescription, decimal salary)
        {
            EmployeeNumber = employeeNumber;
            FirstName = firstName;
            LastName = lastName;
            DateOfHire = dateOfHire;
            JobDescription = jobDescription;
            Salary = salary;
        }

        public decimal Salary
        {
            get { return _salary; }
            set
            {
                if (value >= 0)
                    _salary = value;
            }
        }
    }
}
