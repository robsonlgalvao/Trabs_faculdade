#include<stdio.h>
#include<locale.h>
#include"md.h"
int main (){
	setlocale(LC_ALL,"portuguese");
	int num1, num2;
	printf("Digite um n�mero para m�dia: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("Valor da M�dia �: %.1f",media(num1,num2));
	
}
