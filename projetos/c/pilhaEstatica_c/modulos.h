
#include "dados.h"

int cheia(void){
	if (ult == tam){
		ult--;
		return 1;
	}
	return 0;
}
int vazia(void){
	if(ult == -1)
		return 1;
	return 0;
}
void inspilha(int cod){
	ult++;
	if (!cheia()){
		vetpilha[ult]=cod;
	}else{
		printf("A pilha esta cheia.\n");
	}
}
void retpilha(void){
	if (!vazia()){
		ult--;
	}else{
		printf("a pilha esta Vazia.");
	}
}
void menu(void){
	printf("\n1- insere\t2- retira\t3- sair\n0pcao: ");
	scanf("%d",&opc);
}
