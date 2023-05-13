#listas

#antes
nota1=7.9
nota2=9.7
nota3=8.2

# com listas

#notas=[7.9, 9.7, 8.2]

# Criando listas
listas=[]
listas=list()
listas=[26,'Robson',36,5,True]

#Indexação

lista=[10,'Robson',35,5,True]

for i in range(len(listas)):#len()conta os quantidades de elementos da array 
    print(listas[i])

list = [1, 3, 12, 8, 2]

#append insere no final quando sem paramentro
list.append(3)
print ("depois de append: ",list)

#insert

list.insert(2,10)
print("depois do insert: ",list)

#extend

lista.extend(list)
print("depoisdo extend ", lista)

#pop (removendo)

lista.pop()
print("lista após POP", lista)

lista.pop(2)
print("Removendo indice 2 de lista: ", lista)

#remove 

lista.remove(2) #remove o valor desejado(nesse caso o 2)
print("Depois do remove: ", lista)

#cont serve para contar quantar vezes aparesse um elemento

print("Contando quantos 10 tem na lista(array) ", lista.count(10))

#index Mostra em qual posição está o valor indicado  

print("Local do elemento 5: ",lista.index(5))

lista.pop(1)
#sort Ordenar a lista
#lista.sort() crescente
lista.sort(reverse=True)
print(lista)
lista.pop(6)
#funcões de lista
#len
print(len(lista)) #mostra o tamanho da lista
#sum
print(sum(lista))#mostra a soma dos valores da lista
#max
print("Maior elemento da lista: ",max(lista))
#min
print("Menor elemento da lista: ", min(lista))