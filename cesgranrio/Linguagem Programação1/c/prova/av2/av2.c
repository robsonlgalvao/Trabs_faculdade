#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char placa[10];
    int horas;
    float valor;
} Veiculo;

void bolha(Veiculo* vetor, int tamanho) {
    int i, j;
    Veiculo temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j].valor < vetor[j + 1].valor) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int binarioBusca(Veiculo* vetor, int tamanho, float valor) {
    int esquerda = 0;
    int direita = tamanho - 1;
    int meio;

    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;

        if (vetor[meio].valor == valor) {
            return meio;
        } else if (vetor[meio].valor < valor) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return -1; // Valor não encontrado
}

void escreveBinario(Veiculo* vetor, int tamanho) {
    FILE* arquivo = fopen("carros.dat", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo carros.dat.\n");
        return;
    }

    fwrite(vetor, sizeof(Veiculo), tamanho, arquivo);

    fclose(arquivo);
}

void escreverTexto(Veiculo* vetor, int tamanho) {
    int i;
	FILE* arquivo = fopen("carros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo carros.txt.\n");
        return;
    }

    for (i = 0; i < tamanho; i++) {
        fprintf(arquivo, "Placa: %s | Horas: %d | Valor: %.2f\n", vetor[i].placa, vetor[i].horas, vetor[i].valor);
    }

    fclose(arquivo);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int n,i;
    printf("Digite o número de veiculos: ");
    scanf("%d", &n);

    Veiculo* veiculos = (Veiculo*)malloc(n * sizeof(Veiculo));

    for (i = 0; i < n; i++) {
        printf("Veiculo %d:\n", i + 1);
        printf("Placa: ");
        scanf("%s", veiculos[i].placa);
        printf("Horas: ");
        scanf("%d", &veiculos[i].horas);
        veiculos[i].valor = veiculos[i].horas * 8.0; // Valor da hora é 8,00
    }

    bolha(veiculos, n);

    printf("\nVeiculos ordenados por valor total a pagar (decrescente):\n");
    for (i = 0; i < n; i++) {
        printf("Placa: %s | Horas: %d | Valor: %.2f\n", veiculos[i].placa, veiculos[i].horas, veiculos[i].valor);
    }

    float valorBusca;
    printf("\nDigite um valor para buscar: ");
    scanf("%f", &valorBusca);

    int posicao = binarioBusca(veiculos, n, valorBusca);

    if (posicao != -1) {
        printf("Valor encontrado na posição %d.\n", posicao);
    } else {
        printf("Valor não encontrado no vetor.\n");
    }

    escreveBinario(veiculos, n);
    escreverTexto(veiculos, n);

    free(veiculos);

    return 0;
}

