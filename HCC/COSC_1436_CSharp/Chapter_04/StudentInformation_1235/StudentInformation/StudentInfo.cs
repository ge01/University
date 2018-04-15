using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentInformation
{
    class StudentInfo
    {

        private int studentNumber;
        private string firstName;
        private string lastName;
        private string studentClass;
        private string studentMajor;

        public int StudentNumber
        {
            get
            {
                return studentNumber;
            }
        }
        public void setFirstName(String newFirstName)
        {
            firstName = newFirstName;
        }
        public string FirstName
        {
            get
            {
                return firstName;
            }
        }
        public void setLastName(String newLastName)
        {
            lastName = newLastName;
        }
        public string LastName
        {
            get
            {
                return lastName;
            }
        }
        public string StudentClass
        {
            get
            {
                return studentClass;
            }
        }
        public string StudentMajor
        {
            get
            {
                return studentMajor;
            }
        }
        //Default Constructor
        public StudentInfo()
        {
        }
        //Constructor 1
        public StudentInfo(int number, string first, string last, string classification, string major)
        {
            studentNumber = number;
            firstName = first;
            lastName = last;
            studentClass = classification;
            studentMajor = major;
        }
        //Constructor 2
        public StudentInfo(string first, string last)
        {
            firstName = first;
            lastName = last;
        }

    }
}
