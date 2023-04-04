/*Escreva um programa em C que receba um número N, inteiro e positivo (utilize um mecanismo no código que obrigue o 
usuário a digitar um número inteiro e positivo), digitado no programa principal. Faça uma função que retorne o número de divisores deste valor. 
Imprimir no final a quantidade de divisores deste número no Programa Principal.*/
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
	printf("\nSão no total %d divisores desse número. ",j);
	
}

int main (){
	int n;
	setlocale(LC_ALL,"portuguese");
	
	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d",&n);
	while(n<0){
	
		
		printf("Digite um número inteiro e positivo: ");
		scanf("%d",&n);
		
	}
	teste(n);

	
}
