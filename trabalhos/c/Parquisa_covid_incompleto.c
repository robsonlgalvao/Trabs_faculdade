/*Em uma pesquisa com N pessoas (o usuário deverá informar no início quantas pessoas participaram da pesquisa) 

sobre o COVID foram levantados os seguintes dados: 
 - Idade da pessoa 
 - Sexo da pessoa (1- Masculino 2- Feminino) 
- Teve sintomas do CODIV? (1- Sim 2-Não) 
 - Se sim, por quantos dias a pessoa teve sintoma? 
 - Se sim, precisou procurar ajuda médica (1- Emergência, 2- Consulta Médica, 3- Não) 
 - Realizou algum teste de covid? (1- Sim 2- Não) 
 - Se sim, qual foi o resultado? (1- Positivo 2- Negativo)
  
Ao final deseja saber: 
 - A quantidade de pessoas assintomáticas (O exame deu positivo, mas não teve sintomas). 
 - Qual o percentual de pessoas com mais de 65 anos que procuraram um atendimento de Emergência.  
 - A média de duração (dias) dos sintomas do coronavírus entre todos os entrevistados da pesquisa.  
 - A quantidade de pessoas que tiveram sintomas e não precisaram procurar ajuda médica. 
 - A média de idade das mulheres que tiverem sintomas e o teste deu negativo.*/
#include<stdio.h>
#lnclude<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int cont,part,idade,sexo,sint,dias_sint,ajuda,teste,result;

	printf("Quantas pessoas participarão da pesquisa hoje? ");
	scanf("%d",&part);
	
		for(cont=1;cont<=part;cont++){
		printf("Qual idade da pessoa: ");
		scanf("%d",&idade);
		printf("Qual o Sexo (1-masculino / 2-Feminino) ");
		scanf("%d",&sexo);
		printf("Teve sintomas de Covid? (1-Sim / 2-Não) ");
		scanf("%d",&sint);
			if(sint==1){
				printf("Por quantos dias? ");
				scanf("%d",&dias_sint);
				printf("Precisou de ajuda médica? 1-emergencia 2-consulta 3-Não ");
				scanf("%d",&ajuda);
			}
		printf("Realizou Teste do covid? 1-Sim 2-Não");
		scanf("%d",&teste);
			if(teste==1){
				printf("Qual foi Resultado? 1-Positivo 2-Negativo: ");
				scanf("%d",result);
			}
			
					
			
		}
		
		
system("pause")	
return 0;
}