//Quest�o 4 - Quinta lista:

#include <stdio.h>
#include <locale.h>
#include <string.h>

int SomaDivisores(int N){
int i,soma=0;
for(i=1;i<N;i++){
if(N%i==0)
soma=soma+i;
}
return soma;

}

int main(){
setlocale(LC_ALL,"Portuguese");

int num, i;

for(i=1;i<=5;i++){

printf("Digite um n�mero: ");
scanf("%d", &num);

while(num<=0){
printf("O n�mero deve ser maior que zero!");
printf("Digite outro n�mero: ");
scanf("%d", &num);
}

printf("A soma dos divisores �: %d\n", SomaDivisores(num));

}
}
