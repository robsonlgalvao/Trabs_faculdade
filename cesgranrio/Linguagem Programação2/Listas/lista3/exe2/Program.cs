using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe2
{
    internal class Program
    {
        struct func{
            public string nome;
            public float salario;
            public int filhos,temptrab;            

        }
        static void Main(string[] args)
        {/*Desenvolva um programa no qual o usuário entrará com os seguintes dados:
            a. Nome do Funcionário;
            b. Salário;
            c. Número de filhos;
            d. Tempo de trabalho (Anos)
            *. O programa deverá fazer o seguinte processamento:
                1. Exibir o nome do funcionário;
                2. Exibir salário atual;
                3. Exibir Número de filhos.
                4. Exibir salário novo >> Se o tempo de trabalho na empresa for entre 3 e 5 anos. 
                    O salário será aumentado em 5%; 
            Se o tempo de trabalho na empresa for entre 5 e 9 anos. 
                    O salário será aumentado em 10%. 
            Se o tempo de trabalho na empresa for maior que 10 anos nos. 
                    O salário será aumentado em 20%.
                5. Acrescentar R$ 500,00 por filho. Com limite máximo de 3 filhos.
          */

            func empresa;

            Console.WriteLine("Digite o nome do Funcionário: ");
            empresa.nome = Console.ReadLine();
            Console.WriteLine($"Digite o salário de {empresa.nome}");
            empresa.salario = float.Parse( Console.ReadLine() );
            Console.WriteLine($"{empresa.nome} tem quantos filhos?");
            empresa.filhos = int.Parse(Console.ReadLine() );
            Console.WriteLine($"{empresa.nome} trabalha quantos anos na empresa?");
            empresa.temptrab = int.Parse(Console.ReadLine());

            if (empresa.filhos>=1 && empresa.filhos<=3)
            {   
                empresa.salario +=/* empresa.salario*/+(500 * empresa.filhos);

            }else
            {
                empresa.salario +=/* empresa.salario*/+(500 * 3);
            }
            if (empresa.temptrab >= 3 && empresa.temptrab < 5)
            {
                Console.WriteLine($"Funcionário(a){empresa.nome} recebe {empresa.salario * 1.05} e tem {empresa.filhos} filho(s) e trabalha a {empresa.temptrab} ano(s)");

            }
            if (empresa.temptrab > 5 && empresa.temptrab < 9)
            {
                Console.WriteLine($"Funcionário(a){empresa.nome} recebe {empresa.salario * 1.10} e tem {empresa.filhos} filho(s) e trabalha a {empresa.temptrab} ano(s)");

            }
            if (empresa.temptrab >= 10)
            {
                Console.WriteLine($"Funcionário(a){empresa.nome} recebe {empresa.salario * 1.20} e tem {empresa.filhos} filho(s) e trabalha a {empresa.temptrab} ano(s)");
            }
            if(empresa.temptrab<3) {
                Console.WriteLine($"Funcionário(a){empresa.nome} recebe {empresa.salario} e tem {empresa.filhos} filho(s) e trabalha a {empresa.temptrab} ano(s)");
            }
        Console.ReadKey(); 
        }
    }
}
