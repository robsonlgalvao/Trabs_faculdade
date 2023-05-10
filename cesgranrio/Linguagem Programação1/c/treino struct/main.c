#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define n 3

typedef struct{
	float n1;
	float n2;
	float media;
	char nome[30];
	
}aluno;


int main(){
	setlocale(LC_ALL,"portuguese");
	aluno turma[n];
	int i;
	
	
	for(i=0;i<n;i++){
		printf("Digite informações do aluno %d\n",i+1);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(turma[i].nome);
		printf("Digite a primeira nota: ");
		scanf("%f",&turma[i].n1);
		printf("Digite a segunda nota:  ");
		scanf("%f",&turma[i].n2);
		turma[i].media=(turma[i].n1+turma[i].n2)/2;
	}
	
	for(i=0;i<n;i++){
		printf("\nO Aluno %s\n",turma[i].nome);
		printf("\nPrimeira nota %.2f",turma[i].n1);
		printf("\nSegunda nota %.2f",turma[i].n2);
		printf("\nE média %.2f\n",turma[i].media);
	}
	
	
	
}
/*ordenavet(*v, int valor){
	int i,j;
	
	
	
	
}*/
