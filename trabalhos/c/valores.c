/*Fa�a um programa em "C" que l� dois valores e imprime:
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro at�
o segundo;
 - se o primeiro valor for menor que o segundo a lista de valores do segundo at�
o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais". */
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int n1,n2;

	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	if(n1==n2){
		printf("\nN�meros iguais\n");
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

