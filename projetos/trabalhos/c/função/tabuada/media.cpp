#include<stdio.h>
#include <locale.h>
#include"mat.h"

int main(){
	int num1,num2;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu Primeiro n�mero para m�dia: ");
	scanf("%d",&num1);
	printf("Digite seu Segundo n�mero para m�dia: ");
	scanf("%d",&num2);
		
	printf("A m�dia do aluno �: %.1f",media(num1,num2));
}
