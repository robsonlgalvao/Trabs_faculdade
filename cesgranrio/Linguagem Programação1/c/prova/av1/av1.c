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
		printf("Digite a matr�cula: ");
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
		printf("\n\nMatr�cula: %ld\n", Turma[i].mat);
		printf("Quantidade de disciplinas: %d\n", Turma[i].qtd);
		printf("Soma das m�dias: %.2f\n", Turma[i].soma);
		printf("CR: %.2f\n", Turma[i].CR);
	}
//Chamando a fun��o Busca
printf("Digite um CR para verificar se existe no vetor: ");
scanf("%f", &chave);
pos=Busca (Turma, tam, chave);
	if(pos==-1)
		printf("\n\nEsse valor n�o est� no vetor!");
	else
		printf("\n\nEsse valor est� na posi��o %d!", pos);
//Chamando a fun��o Maior
	printf("\n\nO maior CR da turma foi: %.2f", Maior(Turma, tam));
}
