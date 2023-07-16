#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int binaria(int vetor[], int chave, int inicio, int fim) {
    if (inicio > fim) {
        return -1; // Elemento não encontrado
    }

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == chave) {
        return meio; // Elemento encontrado
    } else if (vetor[meio] > chave) {
        return binaria(vetor, chave, inicio, meio - 1); // Busca na metade esquerda
    } else {
        return binaria(vetor, chave, meio + 1, fim); // Busca na metade direita
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int vetor[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
	int chave;
    
    printf("Digite o código que vc que encontrar?");
    scanf("%d",&chave);
    
    int indice = binaria(vetor, chave, 0, tamanho - 1);

    if (indice != -1) {
        printf("O elemento %d foi encontrado no índice %d.\n", chave, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", chave);
    }

    return 0;
}

