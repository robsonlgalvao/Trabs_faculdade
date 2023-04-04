#include <stdio.h>
#include <locale.h>
#include <string.h>

float Adicao(float num1, float num2){
return num1+num2;
}
float menos(float num1, float num2){
return num1-num2;
}
float mult(float num1, float num2){
return num1*num2;
}
float div(float num1, float num2){
return num1/num2;
}
float media(float num1, float num2){
return (num1+num2)/2;
}



int main(){
	setlocale(LC_ALL,"Portuguese");
	float N1, N2;
	int OP;
	
	printf("Digite dois números, separados por espaço: ");
	scanf("%f %f", &N1, &N2);
	printf("\n\n *** Menu de Opções ***\n");
	printf("1 - Adição\n");
	printf("2 - Subtração\n");
	printf("3 - Multiplicação\n");
	printf("4 - Divisão\n");
	printf("5 - Média\n");
	printf("Escolha uma opção: ");
	scanf("%d", &OP);
	
	switch(OP){
		case 1:
			printf("A soma dos números é: %.0f", Adicao(N1,N2));
		break;
		case 2:
			printf("A subtração dos números é: %.0f", menos(N1,N2));
		break;
		case 3:
			printf("A Multiplicação dos números é: %.0f", mult(N1,N2));
		break;	
		case 4:
			printf("A soma dos números é: %.2f", div(N1,N2));
		break;	
		case 5:
			printf("A soma dos números é: %.2f", media(N1,N2));
		break;	
		default:
		printf("Opção é inválida!");
		
	}
}
