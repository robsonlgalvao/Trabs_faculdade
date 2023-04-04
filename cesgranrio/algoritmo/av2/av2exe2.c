/*Escreva um programa em C que leia a média final de um indeterminado número de alunos 
(quando for digitado um valor menor que 0 o laço de repetição deverá ser encerrado, no programa principal).  
Crie uma função que receba como parâmetro a média final (utilize um mecanismo no código que obrigue o usuário a digitar um número maior ou igual a 0). 
A função deverá retornar o número do conceito deste aluno*/
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
	printf("Digite a Média do aluno: ");
	scanf("%f",&nota);
	
	while(nota<0){
	printf("*****A média do não pode ser menos que 0!!!********\nDigite a Média do aluno: ");
	scanf("%f",&nota);
	}
	switch(media(nota)){
		case(1):{
			printf("O conceito é D ");
			break;
		}
		case(2):{
			printf("O conceito é C ");
			break;
		}
		case(3):{
			printf("O conceito é B ");
			break;
		}
		case(4):{
			printf("O conceito é A ");
			break;
		}
		case(5):{
			printf("Nota Inválida!!! ");
			break;
		}
	}
}
