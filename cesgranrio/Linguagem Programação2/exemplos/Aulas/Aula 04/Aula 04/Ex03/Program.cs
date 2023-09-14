using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n;
            Console.WriteLine("---------------------------------");
            Console.WriteLine("Antecessor e sucessor");
            Console.WriteLine("---------------------------------");
            Console.Write("Digite um numero:");
            n = int.Parse(Console.ReadLine());
            // int s = n+1;
            //int a = n-1;
            Console.Write($"Analisando o numero {n--} seu antecessor é {n++} e seu sucessor é {++n}");
            Console.ReadKey();

          

        }
    }
}
