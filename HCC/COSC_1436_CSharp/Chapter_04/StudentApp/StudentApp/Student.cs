using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentApp
{
    class Student
    {
        // Data members, data fields, or characteristics
        private int studentNumber;
        private string studentName;
        private int score1;
        private int score2;
        private int score3;
        private string major;

        // default constructor
        public Student()
        {

        }

        // constructor with one argument
        public Student(int sID)
        {
            studentNumber = sID;
        }

        // constructor with two arguments
        public Student(int sID, string name)
        {
            studentNumber = sID;
            studentName = name;
        }

        // constructor with six arguments
        public Student(int sID, string name,
            int s1, int s2, int s3, string maj)
        {
            studentNumber = sID;
            studentName = name;
            score1 = s1;
            score2 = s2;
            score3 = s3;
            major = maj;
        }

        // Properties
        public string StudentName
        {
            get
            {
                return studentName;
            }
            set
            {
                studentName = value;
            }
        }

        public int StudentNumber
        {
            get
            {
                return studentNumber;
            }
            set
            {
                studentNumber = value;
            }
        }

        public string Major
        {
            get
            {
                return major;
            }
            set
            {
                major = value;
            }
        }

        public int Score1
        {
            get
            {
                return score1;
            }
            set
            {
                score1 = value;
            }
        }

        public int Score2
        {
            get
            {
                return Score2;
            }
            set
            {
                Score2 = value;
            }
        }

        public int Score3
        {
            get
            {
                return Score3;
            }
            set
            {
                Score3 = value;
            }
        }

        public double CalculateAverage()
        {
            return (score1 + score2 + score3) / 3.0;
        }

        public override string ToString()
        {
            return "Name: " +
                studentName +
                "\nMajor: " +
                major +
                "\nScore Average: " +
                CalculateAverage().ToString("f2");
        }
    }
}
