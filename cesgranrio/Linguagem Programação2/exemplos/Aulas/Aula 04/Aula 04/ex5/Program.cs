using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("--------------------------------");
            Console.WriteLine("Preço do produto");
            Console.WriteLine("--------------------------------");
            string nome;
            float preco, des, fim;
            Console.Write("Digite o produto: ");
            nome = Console.ReadLine();
            Console.Write("Qual o preço do  produto: ");
            preco = float.Parse(Console.ReadLine());
            Console.Write("Qual o desconto em (%): ");
            des = float.Parse(Console.ReadLine());
            fim = (preco * des) / 100;
            Console.WriteLine($"O produto  {nome} custava {preco} com  {des} de desconto, passa a custar: {preco-fim}" );
            Console.ReadKey();


        }
    }
}
