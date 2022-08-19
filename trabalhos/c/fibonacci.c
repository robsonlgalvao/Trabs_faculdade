/*calcular fubonacci*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int final,a,b=1,c=1,soma;
	printf("Digite até quantas vezes calcular o fibonacci:");
	scanf("%d",&final);
	
	for(a=1;a<final;a++){
		
		soma=b+c;
		printf ("Números fibonacci são: %d\n",soma);
		b=c;
		c=soma;
		
	}
	
	system("pause");
}
