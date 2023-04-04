/*Calcular a tabuada de un numero informado pelo usuário e perguntar se quer que calcule outra tabuada. */
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int n1,n2,n3,r=1;
	
	while(r==1){
	
		printf("Digite um numero para fazer a tabuada: ");
		scanf("%d",&n2);
		n1=1;	
		while(n1<=10){
			
			n3=n2*n1;
			
			printf("%d",n2);printf(" x %d",n1);printf(" = %d",n3);printf("\n");
			n1=n1+1;
		
		}
	printf("Deseja calcular outra tabuada?: 1=SIM ou qualquer=Não ");
	scanf("%d",&r);
	system("cls");
	}
	
	system("pause");
return 0;	
}

