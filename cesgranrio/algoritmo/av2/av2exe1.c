/*Escreva um programa em C que receba um n�mero N, inteiro e positivo (utilize um mecanismo no c�digo que obrigue o 
usu�rio a digitar um n�mero inteiro e positivo), digitado no programa principal. Fa�a uma fun��o que retorne o n�mero de divisores deste valor. 
Imprimir no final a quantidade de divisores deste n�mero no Programa Principal.*/
#include <stdio.h>
#include <locale.h>

void teste(int n1){
	int i=1,j=0;
	while(i<=n1){
		if(n1%i==0){
			j++;
		}
	i++;	
	}
	printf("\nS�o no total %d divisores desse n�mero. ",j);
	
}

int main (){
	int n;
	setlocale(LC_ALL,"portuguese");
	
	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d",&n);
	while(n<0){
	
		
		printf("Digite um n�mero inteiro e positivo: ");
		scanf("%d",&n);
		
	}
	teste(n);

	
}
