/*Fa�a um programa em C que tenha uma fun��o que que receba dois valores inteiros a e b.
Esta fun��o dever� retornar (passagem por refer�ncia) o QUOCIENTE, e o RESTO divis�o de a por b.
No programa principal leia os dois valores de entrada e depois imprima o quociente e o resto, chamando a fun��o.*/
#include <stdio.h>
#include <locale.h>

void div(int n1, int n2,int *quocie,int *rest){
		
	*quocie=n1/n2;
	*rest=n1%n2;
	
	printf("\nO resultado da divis�o � %d e resto %d. ",*quocie,*rest);
	
}


int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,ciente,resto;
	
	printf("Digite um n�mero para divis�o: ");
	scanf("%d",&a);
	printf("Digite outro n�mero para divis�o: ");
	scanf("%d",&b);
	
	div(a,b,&ciente,&resto);
	
}
