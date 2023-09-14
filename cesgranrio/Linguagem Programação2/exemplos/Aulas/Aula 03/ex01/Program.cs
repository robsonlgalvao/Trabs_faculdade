using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random gerador = new Random(); //
            int n1 = gerador.Next();
            int n2 = gerador.Next(10);
            int n3 = gerador.Next(10, 50);

            Console.WriteLine(n1);
            Console.WriteLine(n2);
            Console.WriteLine(n3);
            Console.ReadKey();
        }
    }
}
