using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Desenvolva um programa com finalidade de calcular uma equação do segundo grau.
            //x = (-b ± √(b² - 4ac)) / (2a)
            //O usuário deverá entrar com as variáveis reais a,b e c.
            //O resultado impresso será de X1 e X2 representando a solução.
            int a = 0, b = 0, c = 0;
            Double x1 = 0,x2 = 0, d = 0;

            Console.WriteLine("Agora vamos ver a Equação do segundo grau: ");
            Console.WriteLine("Digite o termo A:");
            a = int.Parse(Console.ReadLine());
            Console.WriteLine("Agora o termo B:");
            b = int.Parse(Console.ReadLine());
            Console.WriteLine("Por fim o termo C:");
            c = int.Parse(Console.ReadLine());

            d = Math.Pow(b, 2) - 4*a*c;
            x1 = (-b - Math.Sqrt(d)) / (2 * a);
            x2 = (-b + Math.Sqrt(d)) / (2 * a);

            Console.WriteLine($"O resultado de x1 é {x1} e de x2 é {x2}");



            Console.ReadKey();
        }
    }
}
