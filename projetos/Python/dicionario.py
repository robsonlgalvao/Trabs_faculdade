#Dicionario Identifica os valores

"""
dicionario{} dicionario vazio
dicionario=dict()
"""
dicionario={'nome': 'Robson','idade':35,'altura':1.65}

print(dicionario)
print(dicionario["idade"])

#adicionar elementos no dicionario

dicionario['programador']=True #criando campo de nome programador

print(dicionario)

#percorrer pelo dicionario

for chave in dicionario:
    print (chave,dicionario[chave])#Chave mostra elemento dicionario[chave] mostra o valor da chave
#testanto existencia da chave

print('peso'in dicionario) #verificar se chave peso existe
print('nome'in dicionario)#verificar se chave nome existe
