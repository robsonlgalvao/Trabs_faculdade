//Quest�o 9, quinta lista:

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

printf("Digite um n�mero: ");
scanf("%d", &num);

calculo (num, &antecessor, &sucessor);

printf("O antecessor do n�mero �: %d\n", antecessor);

printf("O sucessor do n�mero �: %d", sucessor);
}
