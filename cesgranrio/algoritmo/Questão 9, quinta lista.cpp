//Questão 9, quinta lista:

#include <stdio.h>
#include <locale.h>
#include <string.h>

void calculo (int valor, int *ante, int *suce){
*ante=valor-1;
*suce=valor+1;
}

int main(){
setlocale(LC_ALL,"Portuguese");

int num, sucessor, antecessor;

printf("Digite um número: ");
scanf("%d", &num);

calculo (num, &antecessor, &sucessor);

printf("O antecessor do número é: %d\n", antecessor);

printf("O sucessor do número é: %d", sucessor);
}
