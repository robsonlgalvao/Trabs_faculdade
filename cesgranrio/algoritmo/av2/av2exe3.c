/*Faça um programa em C que tenha uma função que que receba dois valores inteiros a e b.
Esta função deverá retornar (passagem por referência) o QUOCIENTE, e o RESTO divisão de a por b.
No programa principal leia os dois valores de entrada e depois imprima o quociente e o resto, chamando a função.*/
#include <stdio.h>
#include <locale.h>

void div(int n1, int n2,int *quocie,int *rest){
		
	*quocie=n1/n2;
	*rest=n1%n2;
	
	printf("\nO resultado da divisão é %d e resto %d. ",*quocie,*rest);
	
}


int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,ciente,resto;
	
	printf("Digite um número para divisão: ");
	scanf("%d",&a);
	printf("Digite outro número para divisão: ");
	scanf("%d",&b);
	
	div(a,b,&ciente,&resto);
	
}
