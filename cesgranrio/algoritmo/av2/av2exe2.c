/*Escreva um programa em C que leia a m�dia final de um indeterminado n�mero de alunos 
(quando for digitado um valor menor que 0 o la�o de repeti��o dever� ser encerrado, no programa principal).  
Crie uma fun��o que receba como par�metro a m�dia final (utilize um mecanismo no c�digo que obrigue o usu�rio a digitar um n�mero maior ou igual a 0). 
A fun��o dever� retornar o n�mero do conceito deste aluno*/
#include<stdio.h>
#include<locale.h>

int media(float n){
	int result;
	if(n>=0&&n<=4.9){
		
		return 1;
		
	}if(n>=5&&n<=6.9){
			
		return 2;	
			
	}if(n>=7&&n<=8.9){
		
		return 3;
		
	}if(n>=9&&n<=10){
		
		return 4;
	}else{
		
		return 5;
	}
}


int main(){
	float nota;
	setlocale(LC_ALL,"portuguese");
	printf("Digite a M�dia do aluno: ");
	scanf("%f",&nota);
	
	while(nota<0){
	printf("*****A m�dia do n�o pode ser menos que 0!!!********\nDigite a M�dia do aluno: ");
	scanf("%f",&nota);
	}
	switch(media(nota)){
		case(1):{
			printf("O conceito � D ");
			break;
		}
		case(2):{
			printf("O conceito � C ");
			break;
		}
		case(3):{
			printf("O conceito � B ");
			break;
		}
		case(4):{
			printf("O conceito � A ");
			break;
		}
		case(5):{
			printf("Nota Inv�lida!!! ");
			break;
		}
	}
}
