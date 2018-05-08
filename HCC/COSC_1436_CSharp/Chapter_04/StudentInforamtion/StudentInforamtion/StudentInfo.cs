using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentInforamtion
{
    class StudentInfo
    {
        private string studentNumber;
        private string studentFirstName;
        private string studentLastName;
        private string studentClassification;
        private string studentMajor;
        private double studentTuition;

        // Read-only property
        public string StudentNumber
        {
            get
            {
                return studentNumber;
            }
        }

        // Read-only property
        public string StudentFirstName
        {
            get
            {
                return studentFirstName;
            }
        }

        // Read-only property
        public string StudentLastName
        {
            get
            {
                return studentLastName;
            }
        }

        // Read-only property
        public string StudentClassification
        {
            get
            {
                return studentClassification;
            }
        }

        // Read-only property
        public string StudentMajor
        {
            get
            {
                return studentMajor;
            }
        }

        // Property acting as mutator and accessor
        public double StudentTuition
        {
            set
            {
                studentTuition = value;
            }
            get
            {
                return studentTuition;
            }
        }

        // Default constructor
        public StudentInfo()
        {
        }

        // Five parameter constructor
        public StudentInfo(string sNumber, string firstName, 
                           string lastName, string sClassification, 
                           string sMajor)
        {
            studentNumber = sNumber;
            studentFirstName = firstName;
            studentLastName = lastName;
            studentClassification = sClassification;
            studentMajor = sMajor;
        }

        // Returns first and last name
        public string FirstAndLast()
        {
            return studentFirstName + " " + studentLastName;
        }
    }
}
