#include <stdio.h>
#include <locale.h>
#define tam 3
#include"funcoes.h"


int main(){
setlocale(LC_ALL,"Portuguese");
struct Aluno Turma[tam];
float chave, pos;
int i;
//Preenchimento do vetor
	for(i=0;i<tam;i++){
		printf("Digite a matrícula: ");
		scanf("%ld", &Turma[i].mat);
		printf("Digite a quantidade de disciplinas cursadas: ");
		scanf("%d", &Turma[i].qtd);
		printf("Digite a soma das notas: ");
		scanf("%f", &Turma[i].soma);
		Turma[i].CR=Turma[i].soma/Turma[i].qtd;
	}
Ordena(Turma, tam);
//Exibir o vetor ordenado
	for(i=0;i<tam;i++){
		printf("\n\nMatrícula: %ld\n", Turma[i].mat);
		printf("Quantidade de disciplinas: %d\n", Turma[i].qtd);
		printf("Soma das médias: %.2f\n", Turma[i].soma);
		printf("CR: %.2f\n", Turma[i].CR);
	}
//Chamando a função Busca
printf("Digite um CR para verificar se existe no vetor: ");
scanf("%f", &chave);
pos=Busca (Turma, tam, chave);
	if(pos==-1)
		printf("\n\nEsse valor não está no vetor!");
	else
		printf("\n\nEsse valor está na posição %d!", pos);
//Chamando a função Maior
	printf("\n\nO maior CR da turma foi: %.2f", Maior(Turma, tam));
}
