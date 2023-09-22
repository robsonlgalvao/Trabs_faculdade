using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe1
{
    internal class Program
    {   
        static void Main(string[] args)
        {
            /* Desenvolva um programa para ler um número inteiro, e depois dizer se este número é 
            negativo ou positivo*/
            int num;
            Console.WriteLine("Digite um número: ");
            num = int.Parse(Console.ReadLine());

            if(num<0) {
                Console.WriteLine("O número digitado é negativo");
            }
            else
            {
                Console.WriteLine("O número digitado é positivo");

            }
            Console.ReadKey();
        }
    }
}
