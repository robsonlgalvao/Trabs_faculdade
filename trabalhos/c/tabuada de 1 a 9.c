/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9 */
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int n1,n2=1,n3;
	
	while(n2<10){
		n1=1;
		while(n1<=10){
			
			n3=n2*n1;
			
			printf("%d",n2);printf(" x %d",n1);printf(" = %d",n3);printf("\n");
			n1=n1+1;
		
		}
	n2=n2+1;printf("\n");
	}
	
	system("pause");
return 0;	
}

