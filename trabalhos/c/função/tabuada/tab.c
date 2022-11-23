#include<stdio.h>
#include<locale.h>
#include"tabuada.h"
int main(){
	setlocale(LC_ALL,"portuguese");
	 int num;
	printf("Digite um número para calcular a tabuada: ");
	scanf ("%d",&num);
	tabuada(num);
}
