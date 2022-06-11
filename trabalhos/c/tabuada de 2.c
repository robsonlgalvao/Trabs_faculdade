/*Calcular a tabuada de 2 */
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int n1=1,n2;
	
	while(n1<=10){
		
		n2=2*n1;
		
		printf("%d",2);printf(" x %d",n1);printf(" = %d",n2);printf("\n");
		n1=n1+1;
	
	}
	
	
	system("pause");
return 0;	
}

