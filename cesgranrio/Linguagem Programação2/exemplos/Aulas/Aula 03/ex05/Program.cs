using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ex05
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*
             string agora = DateTime.Now.ToString();
             Console.WriteLine(agora);
             Thread.Sleep(4000);
             string agora1 = DateTime.Now.ToString();
             Console.WriteLine(agora1);
             Thread.Sleep(4000);
             string agora2 = DateTime.Now.ToString();
             Console.WriteLine(agora2);

             Console.ReadKey();  
            */
            /*
            string agora = DateTime.Now.ToString();
            Console.WriteLine(agora);
            Thread.Sleep(4000);
    
            agora = DateTime.Now.ToString();
            Console.WriteLine(agora);
            Thread.Sleep(4000);

            agora = DateTime.Now.ToString();
            Console.WriteLine(agora);
            Console.ReadKey();
            */
            
            for(int i = 0; i < 9; i++)
            {
                string agora = DateTime.Now.ToString();
                Console.WriteLine(agora);
                Thread.Sleep(1000);
            }
            Console.ReadKey();
            
        }
    }
}
