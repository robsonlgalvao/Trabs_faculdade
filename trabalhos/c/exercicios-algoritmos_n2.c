#include <stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL,"portuguese");

char nome[10];
	
	printf("Qual seu nome? ");
	scanf("%s",&nome);
	printf ("Muito prazer %s",nome);	
	printf("\n");
system("pause");
	
return 0;
}