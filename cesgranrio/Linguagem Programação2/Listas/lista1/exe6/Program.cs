using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* 
                Desenvolva um programa que leia três valores reais: A, B e C. Em seguida, calcule e 
                mostre:
                a. A área do triângulo retângulo que tem A por base e C por altura;
                b. A área do círculo de raio C. (pi = 3.14159);
                c. A área do trapézio que tem A e B por bases e C por altura;
                d. A área do quadrado que tem lado B;
                e. A área do retângulo que tem lados A e B.
            */
            float a = 0, b = 0, c = 0;
            double p = 3.14159;
            Console.WriteLine("Digite 3 parametros para para o calculos (A,B,C)");
            Console.WriteLine("Porfavor digite o parametro A:");
            a = float.Parse(Console.ReadLine());
            Console.WriteLine("Porfavor digite o parametro B:");
            b = float.Parse(Console.ReadLine());
            Console.WriteLine("Porfavor digite o parametro C:");
            c = float.Parse(Console.ReadLine());


            Console.WriteLine($"Calculo da área de um triangulo de base A e e altura C é {(a*c)/2}");
            Console.WriteLine($"Calculo da área do circulo de raio C é {p*Math.Pow(c,2)}");
            Console.WriteLine($"Calculo da área do que tem A e B por bases e C por altura é {((a+b)*c)/2}");
            Console.WriteLine($"Calculo da área do quadrado que tem lado B é {Math.Pow(b,2)}");
            Console.WriteLine($"Calculo da área do retângulo que tem lados A e B é {a*b}");

            Console.ReadKey();
        }
    }
}
