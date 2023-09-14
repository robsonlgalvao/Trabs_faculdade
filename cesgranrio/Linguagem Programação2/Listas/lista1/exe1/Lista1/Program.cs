using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;

namespace Lista1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Desenvolva um programa para ler dois valores inteiros, e depois mostrar na tela a
            //soma desses números com uma mensagem explicativa.
            int n1,n2,soma;

            Console.WriteLine("Digite um número: ");
            n1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite agora outro número: ");
            n2 = int.Parse(Console.ReadLine());
            soma = n1 + n2;
            Console.WriteLine($"O resultado de {n1}+{n2} = {soma}");

            Console.ReadKey();

        }
    }
}
