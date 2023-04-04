#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");

	char nome[10];
	float salario;
	
	printf("Digite o nome: ");	
	scanf("%s",&nome);
	printf("Digite o Valor: ");
	scanf("%f",&salario);
	
	printf("\n%s",nome);
	printf(" Recebeu o valor de R$%.2f",salario);
	printf("\n");
system("pause");	
	
return 0;
}