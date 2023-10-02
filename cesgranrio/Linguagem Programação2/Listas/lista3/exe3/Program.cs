using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace exe3
{
    internal class Program
    {
        static void Main(string[] args)
        {/* 
            Desenvolva um programa no qual exiba na tela por 10 vezes a data e hora do sistema 
            em um período de 4 segundos
            */
            
            for (int i = 0;i < 10;i++) {
                DateTime Atual = DateTime.Now;
                Console.WriteLine(Atual);
                Thread.Sleep(4000);

            }
            Console.ReadKey();
        }
    }
}
