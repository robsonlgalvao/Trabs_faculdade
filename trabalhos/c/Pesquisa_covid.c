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
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int cont,cont2,part,idade,sexo,sint,dias_sint,ajuda,teste,result,assin=0,melhor_idade=0,sint_ajuda;
float m_dias_sint,media_dias,m_idade,perc_melhor,media_mulher;

	printf("Quantas pessoas para pesquisar hoje? ");
	scanf("%d",&part);
	
		for(cont=1;cont<=part;cont++){
		printf("Pessoa de numero %d\n\n",cont);	
		printf("Qual idade da pessoa: ");
		scanf("%d",&idade);
		printf("Qual o Sexo (1-masculino / 2-Feminino) ");
		scanf("%d",&sexo);
		printf("Teve sintomas de Covid? (1-Sim / 2-Nao) ");
		scanf("%d",&sint);
			if(sint==1){
				printf("Por quantos dias? ");
				scanf("%d",&dias_sint);
				printf("Precisou de ajuda medica? 1-Emergencia 2-Consulta 3-Nao: ");
				scanf("%d",&ajuda);
			}
		printf("Realizou Teste do covid? 1-Sim 2-Nao: ");
		scanf("%d",&teste);
			if(teste==1){
				printf("Qual foi Resultado? 1-Positivo 2-Negativo: ");
				scanf("%d",&result);
			}
		if(result==1&&sint==2){
			assin++;
		}	
		if(idade>=65&&ajuda==1){
			melhor_idade++;
		}			
		if(sint==1&&ajuda==3){
			sint_ajuda++;
		}
		if(sexo==2&&sint==1&&result==2){
			m_idade=m_idade+idade;
			cont2++;
		}	
		m_dias_sint=m_dias_sint+dias_sint;
		system("cls");
		}
	perc_melhor=(part/100)*melhor_idade;
	media_mulher=m_idade/cont2;
	media_dias=m_dias_sint/part;	
	printf("Resultado");
	printf("\n\nA quantidade de pessoas assintomaticas: %d\n",assin);	
	printf("Percentual de Pessoas com mais de 65 anos e Procuraram Emergencia: %.2f\n",perc_melhor);
	printf("A media de dias dos sintomas:%.1f\n",media_dias);
	printf("A quantidade de pessoas que tiveram sintomar e nao precisaram de ajuda medica: %d\n",sint_ajuda);
	printf("A media de mulheres que tiveram sintomas e teste deu negativo:%.0f\n",media_mulher);

system("pause");
return 0;
}