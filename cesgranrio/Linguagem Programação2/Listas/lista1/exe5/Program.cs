using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe5
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //            Desenvolva um programa que leia uma string dividida em 3 campos: “Produto”, 
            //            “Quantidade” e “Preço”. A saída deverá ser o produto com o seu preço final

            string[] vetor = new string[3];
            float valor = 0,qtd = 0,preco = 0;
            //preenchendo vetor
            for(int i = 0; i < vetor.Length; i++)
            {
                Console.WriteLine("Itens: 1=produto 2=quantidade,3=preço");
                Console.WriteLine($"Digite o item {i+1}");
                vetor[i] = Console.ReadLine();
                
            }
            //convertendo o necessário
            qtd = float.Parse(vetor[1]);
            preco = float.Parse(vetor[2]);
            valor = qtd*preco;

            /* vizualiza vetor
            for (int i =0;i<vetor.Length;i++)
            {
                Console.WriteLine(vetor[i]);
            }
            */
            //Resultado final
            Console.WriteLine($"O Valor total de todos(as) {vetor[0]} é {valor}.");

            
            Console.ReadKey();
        }
    }
}
