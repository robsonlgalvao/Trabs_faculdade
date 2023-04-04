//Desenvolva um algoritmo em c que leia dois números inteiros e mostre o somatório entre eles.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2,soma;
	
	printf("Vamos somar 2 valores: \n");
	printf("\nDigite o primeiro valor: ");
	scanf("%d",&n1);
	printf("\nDigite o segundo valor: ");
	scanf("%d",&n2);
	
	soma=n1+n2;
	
	printf("A soma de %d",n1);printf(" e %d",n2);printf(" = %d",soma);
	printf("\n");
system("pause");	
	
return 0;	
}

