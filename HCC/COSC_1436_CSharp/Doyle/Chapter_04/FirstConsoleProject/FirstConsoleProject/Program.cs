using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstConsoleProject
{
    class MainClass
    {
        static void Main(string[] args)
        {
            // Instaniate a class
            Animal dog = new Animal();
            Console.WriteLine(dog.name);
            dog.name = "Test";
            Console.WriteLine(dog.name);

            dog.Print();

            Console.WriteLine();

            // Animal.Count += 2;

            Animal cat = new Animal("Mr. Beans", 10, 0.8f);
            cat.Print();

            Console.WriteLine();
            Console.WriteLine("Num of Animals: " + Animal.Count);

            //Console.WriteLine(Animal.Count);

        }
    }
}
