using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string produto1 = "Telefone";
            string produto2 = "Capa";
            byte idade = 30;
            int codigo = 5290;
            char genero = 'M';
            double preco1 = 4100.0;
            double preco2 = 150.50;
            double medida = 52.234567;


            Console.WriteLine("Produtos: ");
            Console.WriteLine($"{produto1}, cujo preco é {preco1:C2}");
            Console.WriteLine($"{produto2}, cujo preco é {preco2:C2}");
            Console.WriteLine();
            Console.WriteLine($"Registro: {idade} anos de idade, código {codigo} e gênero: {genero}");
            Console.WriteLine($"Medida com oito casas decimais: {medida:N8}");
            Console.WriteLine($"Arredondado (três casas decimais): {medida:N3}");
            Console.WriteLine("Separador decimal Invariant Culture: {0}",medida.ToString("F3", CultureInfo.InvariantCulture));
            Console.ReadKey();
        }
    }
}
