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
	
	printf("Digite dois n�meros, separados por espa�o: ");
	scanf("%f %f", &N1, &N2);
	printf("\n\n *** Menu de Op��es ***\n");
	printf("1 - Adi��o\n");
	printf("2 - Subtra��o\n");
	printf("3 - Multiplica��o\n");
	printf("4 - Divis�o\n");
	printf("5 - M�dia\n");
	printf("Escolha uma op��o: ");
	scanf("%d", &OP);
	
	switch(OP){
		case 1:
			printf("A soma dos n�meros �: %.0f", Adicao(N1,N2));
		break;
		case 2:
			printf("A subtra��o dos n�meros �: %.0f", menos(N1,N2));
		break;
		case 3:
			printf("A Multiplica��o dos n�meros �: %.0f", mult(N1,N2));
		break;	
		case 4:
			printf("A soma dos n�meros �: %.2f", div(N1,N2));
		break;	
		case 5:
			printf("A soma dos n�meros �: %.2f", media(N1,N2));
		break;	
		default:
		printf("Op��o � inv�lida!");
		
	}
}
