#include <stdio.h>

typedef struct
{
    int matricula;
    float notas[3];
} Aluno;


int menu(void){
    int opc;
    system("pause");
    system("cls");
    printf("\n\nSISTEMA DE CADASTRO DE NOTAS DE ALUNOS\n\n");
    printf("\n 1 - Incluir nota;");
    printf("\n 2 - Exibir Turma;");
    printf("\n 3 - Exibir nota Aluno;");
    printf("\n 4 - Excluir;");
    printf("\n 5 - sair;");
    printf("\n Escolha sua opcao: ");
    scanf("%d",&opc);
    return opc;
}



void LeAluno(int I,Aluno *Turma)
{
    int j;
   // printf("Digite a matricula do aluno:");
   // scanf("%d",&Turma[I].matricula);
    Turma[I].matricula=I+1;
    for (j=0; j<3; j++)
    {
        printf("Digite a %d nota do aluno %d:",j+1,I+1);
        scanf("%f",&Turma[I].notas[j]);
    }
    printf("\n");
}
void ImprimeTurma(Aluno *Turma)
{
    int I,j;
    for (I=0; I< 5; I++)
    {
        printf("Matricula:%d\n",Turma[I].matricula);
        for (j=0; j<3; j++)
        {
            printf("%d Nota:%.2f ",j+1,Turma[I].notas[j]);
        }	
        printf("\n\n");
    }
}
float CalculaMediaAluno(int I,Aluno *Turma)
{
    float soma=0;
    int j;
    for (j=0; j<3; j++)
    {
        soma=soma+Turma[I].notas[j];
    }
    return soma/3;
}
void imprimedadosAluno(int I,float MEDIA)
{
    printf("Aluno da matricula:%d\n",I+1);
    printf("Media:%.2f\n\n",MEDIA);
}


