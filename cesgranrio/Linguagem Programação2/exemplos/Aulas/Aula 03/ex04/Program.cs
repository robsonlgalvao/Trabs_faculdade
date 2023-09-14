using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace ex04
{
    internal class Program
    {
        static void Main(string[] args)
        {
             int dia = DateTime.Now.Day;
             int mes = DateTime.Now.Month;
             int ano = DateTime.Now.Year;

             string agora = DateTime.Now.ToString();

             //Console.WriteLine(dia+ "/" + mes + "/" + ano);
             Console.WriteLine(agora);
           

            int hora = DateTime.Now.Hour;
            int minuto = DateTime.Now.Minute;
            int segundo = DateTime.Now.Second;
            int milissegundos = DateTime.Now.Millisecond;

            Console.WriteLine($"{dia}/{mes:D2}/{ano}  {hora}:{minuto:D2}:{segundo:D2}");
            Console.ReadKey();  
        }
    }
}
