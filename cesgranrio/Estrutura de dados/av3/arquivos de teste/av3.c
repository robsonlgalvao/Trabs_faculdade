#include <stdio.h>
#include<locale.h>
#define MAX_VAGAS 100

typedef struct {
    char placa[20];
    char horaEntrada[10];
    char horaSaida[10];
}carro;

carro estacionamento[MAX_VAGAS];

void adiciona_carro() {
    static int vagasOcupadas = 0;
    
    if (vagasOcupadas >= MAX_VAGAS) {
        printf("O estacionamento está lotado.\n");
        return;
    }
    
    carro novoCarro;
    
    printf("Digite a placa do carro: ");
    scanf("%s", novoCarro.placa);
    
    printf("Digite a hora de entrada: ");
    scanf("%s", novoCarro.horaEntrada);
    
    printf("Digite a hora de saída: ");
    scanf("%s", novoCarro.horaSaida);
    
    estacionamento[vagasOcupadas] = novoCarro;
    vagasOcupadas++;
    
    FILE *arquivo = fopen("dados_carros.txt", "a");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    
    fprintf(arquivo, "Placa: %s, Hora de entrada: %s, Hora de saída: %s\n",
            novoCarro.placa, novoCarro.horaEntrada, novoCarro.horaSaida);
    
    fclose(arquivo);
    
    printf("Carro adicionado com sucesso!\n");
}

int main() {
	setlocale(LC_ALL,"portuguese");
    adiciona_carro();
    
    return 0;
}

