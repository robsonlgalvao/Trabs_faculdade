/*Fa�a um programa que tenha uma fun��o que receber� um valor X (lido no programa
principal) e retornar� o c�lculo de Y = X+2X+3X+4X+5X+�+20X.*/
#include<stdio.h>
#include<locale.h>
#include"exe.h"
int main(){
	int num;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	exe2(num);
	
}
