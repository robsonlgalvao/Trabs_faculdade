#condicionais

idade=int(input("Digite sua idade: "))
if idade>=18:
    print("Você é maior de idade: ")
else:
    print("Você é menor de idade: ")

#exercicio

nota=float(input("Digite a nota do aluno: "))
if nota>=7.0:
    print("Aprovado ")
elif nota >=5:
    print("Recuperação ")
else:
    print("Reprovado ")