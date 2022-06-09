#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){

setlocale(LC_ALL,"portuguese");
int cont1,cont2,tab,resp=1;

	while(resp==1){
	printf("Digite um numero para calcular tabuada: ");
	scanf("%d",&tab);
		
		for(cont1=1;cont1<=10;cont1++){
			cont2=tab*cont1;
			printf("%d",tab);printf(" x ");printf("%d",cont1);printf(" = ");printf("%d\n",cont2);
		}
		printf("\nDeseja calcular outro numero? 1=Sim OU qualquer outro=Sair ");
		scanf("%d",&resp);
		system("cls");
	}

system("pause");	
return 0;	
}