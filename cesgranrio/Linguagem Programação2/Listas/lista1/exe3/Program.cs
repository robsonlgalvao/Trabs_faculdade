using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe3
{
    //Desenvolva um programa com finalidade de calcular a média aritmética de 4 números
    //reais.
    internal class Program
    {
        static void Main(string[] args)
        {
            float media = 0;
            int soma = 0, num = 0;
            for (int i = 1;i<=4;i++)
            {
                Console.Write($"Digite o {i}º número:");
                num = int.Parse(Console.ReadLine());
                soma += num;
            }
            media = soma / 4;
            
            Console.WriteLine($"\nA média desses números é: {media}");
            Console.ReadKey();
        }
    }
}
