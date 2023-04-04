#include<stdio.h>
#include<locale.h>
#include"md.h"
int main (){
	setlocale(LC_ALL,"portuguese");
	int num1, num2;
	printf("Digite um número para média: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("Valor da Média é: %.1f",media(num1,num2));
	
}
