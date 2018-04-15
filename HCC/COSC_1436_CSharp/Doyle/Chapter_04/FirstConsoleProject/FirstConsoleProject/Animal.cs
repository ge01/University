using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstConsoleProject
{
    class Animal
    {


        // CLASS VARIABLES
        
        //public string name = "Spotty";
        //public int age = 6;
        //public float happiness = 0.5f;

        public static int Count = 0;

        public string name;
        public int age;
        public float happiness;

        // CLASS CONTRUCTORS
        public Animal()
        {
            name = "Spotty";
            age = 6;
            happiness = 0.5f;

            Count++;
        }

        public Animal(string _name, int _age, float _happiness)
        {
            name = _name;
            age = _age;
            happiness = _happiness;

            Count++;
        }

        // Access modifiers
            // Types: private, public, static

        // CLASS METHODS
        public void Print()
        {
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Age: " + age);
            Console.WriteLine("Happiness: " + happiness);
        }


        
    }
}
