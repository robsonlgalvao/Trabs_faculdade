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
        {/* 
            Desenvolva um programa com finalidade similar à de uma loteria, no qual o usuário 
            entrará com seis números em um intervalo de 1 a 60. Então o programa irá “sortear” 
            as dezenas e informar quantos números o usuário acertou. Caso ele acerte 3 números 
            informar que ele fez um terno, caso acerte 4 números informar que ele fez uma 
            quadra, e assim sucessivamente até o limite de 6 números
         */
            int[] num = new int[6];
            Console.WriteLine("Digite 6 números para o sorteio: ");

            for (int i = 0; i < num.Length; i++)
            {
                Console.WriteLine($"Digite o{i+1}º número para sorteio");
                num[i] = int.Parse(Console.ReadLine());
            }


            Console.ReadKey();
        }
    }
}
