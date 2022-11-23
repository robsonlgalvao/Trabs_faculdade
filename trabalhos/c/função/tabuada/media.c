#include<stdio.h>
#include <locale.h>
#include"mat.h"

int main(){
	int num1,num2;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu Primeiro número para média: ");
	scanf("%d",&num1);
	printf("Digite seu Segundo número para média: ");
	scanf("%d",&num2);
		
	printf("A média do aluno é: %.1f",media(num1,num2));
}
