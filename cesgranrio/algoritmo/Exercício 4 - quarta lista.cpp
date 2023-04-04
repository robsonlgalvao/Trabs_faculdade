#include <stdio.h>
#include <locale.h>
#include <string.h>

int Primo(int N){
int i,cont=0;
for(i=1;i<=N;i++){
if(N%i==0)
cont++;
}
if (cont==2)
return 1;
else
return 0;

}

int main(){
setlocale(LC_ALL,"Portuguese");
int num, result;

printf("Digite um número: ");
scanf("%d", &num);
result=Primo(num);
if(result==1)
printf("Número primo!");
else
printf("Número não primo!");

}
