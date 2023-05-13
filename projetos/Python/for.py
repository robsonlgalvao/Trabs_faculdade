soma=0
for i in range(1,4):
   nota=float(input(f"Digite a nota{i}: "))
   soma=soma+nota

media=soma/i
print(f"Sua média é: {media}")
