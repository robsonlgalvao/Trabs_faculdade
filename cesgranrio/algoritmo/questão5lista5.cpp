//Questão 5 - quinta lista:

#include <stdio.h>
#include <locale.h>
#include <string.h>

float Media (float n1, float n2, float n3, char l){
if(l=='A')
return (n1+n2+n3)/3;

if(l='P')
return ((n1*5)+(n2*3)+(n3*2))/10;
}

int main(){
setlocale(LC_ALL,"Portuguese");

float N1, N2, N3;
char letra;

printf("Digite a primeira nota: ");
scanf("%f", &N1);
printf("Digite a segunda nota: ");
scanf("%f", &N2);
printf("Digite a terceira nota: ");
scanf("%f", &N3);
getchar();
printf("Digite A para média aritmética e P para média ponderada: ");
scanf("%c", &letra);

printf("A média é: %.2f", Media (N1, N2, N3, letra) );

}
