/*Faça um programa em "C" que lê dois valores e imprime:
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até
o segundo;
 - se o primeiro valor for menor que o segundo a lista de valores do segundo até
o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais". */
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int n1,n2;

	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	if(n1==n2){
		printf("\nNúmeros iguais\n");
	}else{
		while(n1<n2){
		
			printf("%d\n",n1);
		 n1=n1+1;
		}
		while(n1>=n2){
			printf("%d\n",n1);
		 n1=n1-1;
		}
	}
	
	system("pause");
return 0;	
}

