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
			inspilha(valor);
		}else{
			if (opc == 2){
				retpilha();
			}
		}
		for (i=0;i<=ult;i++){
			printf("%d\t",vetpilha[i]);
		}
	}while(opc != 3);
	return 0;
}

