/*Faça um programa que tenha uma função que receberá um valor X (lido no programa
principal) e retornará o cálculo de Y = X+2X+3X+4X+5X+…+20X.*/
#include<stdio.h>
#include<locale.h>
#include"exe.h"
int main(){
	int num;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	exe2(num);
	
}
