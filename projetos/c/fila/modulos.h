
#include "dados.h"
//Verifica cheio
int cheia(void){
	if (ult == tam){
		ult--;
		return 1;
	}
	return 0;
}
//Verifica vazio
int vazia(void){
	if(ult == -1)
		return 1;
	return 0;
}
//coloca na fila
void inspilha(int cod){
	ult++;
	if (cheia()){
		printf("A Fila esta cheia.\n");
	}else{
		vetpilha[ult]=cod;
	}

}
//retira da fila
void retpilha(void){
	if (vazia()){
		printf("A Fila já esta Vazia.");
	}else{
	/*	for(i=0;pri<ult;i++){
			
		}	*/
		ult++;
	}

}
//Menu do programa
void menu(void){
	printf("\n1- insere\t2- retira\t3- sair\n0pcao: ");
	scanf("%d",&opc);
}
