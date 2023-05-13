# funcões 
#exemplos

"""
print()# Imprimi uma mensagem
input()#Retorna um dado informado pelo usuário(entrada padrão)
len()#Recebe uma lista e retorna o tamanho dela
max()#Retorna o maior valor de uma lista"""

#Criação de funcões

#Funcão inicial

def saudacao():#criando um função com nome de saudação
    print("Seja bem vindo:")
    print("Olá é um prazer")

saudacao()#chamando a funcão saudação

#função com parametros

def saudacao(nome, curso):#criando um função com nome de saudação e paramentro que dei o nome de 'nome'
    print(f"Seja bem vindo {nome}")
    print(f"Olá é um prazer ver vc no curso {curso}")

saudacao("Robson","python")#chamando a funcão saudação passando o nome

#funcões com retorno

def soma(num, num1):#criando uma função de nome soma, com parametros com variáveis num e num1
    return num + num1 #comando para retornar resultado

resultado=soma(5,6) #variável resultado recebendo função soma passando paramentro para num e num1 no caso 5 e 6
print("O resultado é: ",resultado)

def calculadora(num1,num2,oper='+'):
    if oper=="+":
        return num1+num2
    elif oper =="-":
        return num1-num2
    elif oper =="*":
        return num1*num2
    elif oper =="/":
        return num1/num2
    else:
        print("Operação inválida")

result=calculadora(30,20,"-")
print("resultado é: ", result)