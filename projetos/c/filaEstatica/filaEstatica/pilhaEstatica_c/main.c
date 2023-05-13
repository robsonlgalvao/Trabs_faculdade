#include <stdio.h>
#include <stdlib.h>

#include "modulos.h"

int main(){
	int valor,i;
	ult=-1;
	do{
		menu();
		if (opc == 1){
			printf("\n\nInforme o codigo: ");
			scanf("%d",&valor);
			insfila(valor);
		}else{
			if (opc == 2){
				retfila();
			}
		}
		for (i=0;i<=ult;i++){
			printf("%d\t",vetfila[i]);
		}
	}while(opc != 3);
	return 0;
}

