using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("--------------------------------");
            Console.WriteLine("Média do aluno");
            Console.WriteLine("--------------------------------");
            string nome;
            Console.Write("Digite o nome do aluno: ");
            nome= Console.ReadLine();
            float n1, n2,m;
            Console.Write("Digite a nota 1: ");
            n1 = float.Parse(Console.ReadLine());
            Console.Write("Digite a nota 2: ");
            n2 = float.Parse(Console.ReadLine());
            m = (n1 + n2) / 2;
            Console.WriteLine("O aluno " + nome + " tirou notas  " + n1 + "  e  " + n2 + " e media igual: "+ m);
            Console.ReadKey();

        }
    }
}