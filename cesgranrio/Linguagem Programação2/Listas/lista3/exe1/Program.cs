using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exe1
{
    internal class Program
    {
        static void Main(string[] args)
        {/*Desenvolva um programa no qual o usuário entre com dois números quaisquer. 
          Em seguida será exibido na tela as opções de operação: Adição, Subtração, Multiplicação e Divisão. 
          Após a seleção da operação o programa exibirá a operação escolhida e o resultado.
          */
            int num1 = 0, num2 = 0;
            char op;
            //entrada do usuário
            Console.Write("Digite um número: ");
            num1 = int.Parse(Console.ReadLine());
            Console.Write("Digite outro número: ");
            num2 = int.Parse(Console.ReadLine());
            Console.Write("Agora digite a operação:ex +,-,*,/: ");
            op = char.Parse(Console.ReadLine());

            Console.Clear();
            //saida de acordo com a escolha
            switch (op)
            {
                case '+':
                    Console.WriteLine($"Você escolheu a soma veja o resultado:\n{num1} + {num2} = {num1+num2}");
                    break;
                case '-':
                    Console.WriteLine($"Você escolheu a subtração veja o resultado:\n{num1} - {num2} = {num1-num2}");
                    break;
                case '*':
                    Console.WriteLine($"Você escolheu a multiplicação veja o resultado:\n{num1} * {num2} = {num1*num2}");
                    break;
                case '/':
                    Console.WriteLine($"Você escolheu a divisão veja o resultado:\n{num1} / {num2} = {num1/num2}");
                    break;  
                default: 
                    Console.WriteLine("Opção inválida");
                    break;
            }
            Console.ReadKey();
        }
    }
}
