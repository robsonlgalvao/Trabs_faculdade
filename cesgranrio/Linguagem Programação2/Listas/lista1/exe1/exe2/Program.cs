using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe2
{//            Desenvolva um programa para ler o valor do raio de um círculo, e depois mostrar o
 //            valor da área deste círculo com quatro casas decimais.
 //            a.Fórmula da área: area = π.raio2
 //            b.Considere o valor de π = 3.14159
    internal class Program
    {
        static void Main(string[] args)
        {
            double raio = 0 ,area = 0,pi = 3.14159;
            
            Console.WriteLine("Digite o Raio do círculo: ");
            raio = float.Parse(Console.ReadLine());

            area = pi * Math.Pow(raio, 2);
            Console.WriteLine($"A área desse círculo é: {area.ToString("F4")}");

            Console.ReadKey();
        }
    }
}
