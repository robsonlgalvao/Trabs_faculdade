#include <stdio.h>
#include "funcoes.h"


int main()
{
	Aluno Turma[5];
	int i;
	float media;
	int op;
	do{
		op = menu();
		switch(op){
			case 1:{
				for (i=0; i< 5; i++){
	        		LeAluno(i,Turma); 
				} 
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			default:{
				
			}
				
		}
		ImprimeTurma(Turma); //Função que imprime os dados de todos os alunos
	    for (i=0; i< 5; i++)
	    {
	        media = CalculaMediaAluno(i,Turma);// função que calcula a média das notas de um aluno
	        imprimedadosAluno(i,media); // imprime os dados do aluno
	    }	
	}while(op!=5);
    
    return 0;
}

