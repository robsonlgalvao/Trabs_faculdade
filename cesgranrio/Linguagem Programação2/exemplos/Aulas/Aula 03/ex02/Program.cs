using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ex02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int idade;
            double sal;
            string Nome;

            Console.WriteLine("Digite seu nome: ");
            Nome = Console.ReadLine();
            Console.WriteLine("Digite sua Idade: ");
            idade = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Digite Seu salário: ");
            sal = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("{0} tem {1} anos e seu salário é {2}", Nome, idade, sal); //mostra na ordem que as variaveis são escritas PLACEHOLDER
            

            Console.WriteLine("{0} tem {1} anos e seu salário é {2:F2}", Nome, idade, sal); // apenas duas casas decimais

            Console.WriteLine(Nome + " tem " + idade + " anos e possui um salário de " +
                               sal.ToString("F2", CultureInfo.InvariantCulture) + " reais"); //converte sal para string(To String) e irá utilizar apenas 2 casas decimais, CultureInfo irá usar . ao invés de ,

            //CONCATENAÇÃO
            //Console.WriteLine("Bem Vindo " + Nome);

            //interpolação de strings
            // Console.WriteLine($"Bem vindo {Nome}"); 
            Console.WriteLine($"Bem vindo {Nome,20}"); //tabulação
            

            double N1 = sal;
            Console.WriteLine($"O valor foi de {N1:N2}");
            Console.WriteLine($"O valor foi de {N1:C2}");
            Console.WriteLine($"O valor foi de {N1:D3}");
            Console.ReadKey();

        }
    }
}
