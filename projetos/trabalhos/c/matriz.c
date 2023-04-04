/*Desenvolver um programa que leia uma matriz de 3 x 3 elementos usando um comando for, multiplique cada elemento por cinco e imprima o resultado.*/
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"portuguese");  
  
int m[3][3],cont1,cont2;
  
	printf ("\nDigite valores para matriz 3x3: \n\n");

	for ( cont1=0; cont1<3; cont1++ ){

		for ( cont2=0; cont2<3; cont2++ ){
			printf ("\nValor[%d][%d] = ", cont1, cont2);
			scanf ("%d", &m[ cont1 ][ cont2 ]);
		}
	}

system("cls");
printf("Valores inseridos: \n");
	
	for ( cont1=0; cont1<3; cont1++ ){
		for ( cont2=0; cont2<3; cont2++ ){
		printf ("Valor[%d][%d] = %d\n", cont1, cont2,m[ cont1 ][ cont2 ]);
		}
	}

printf("\nMultiplicado por 5\n\n");

	for ( cont1=0; cont1<3; cont1++ ){
		for ( cont2=0; cont2<3; cont2++ ){
			m[cont1][cont2]=m[cont1][cont2]*5;
			printf ("Valor[%d][%d] = %d\n", cont1, cont2,m[ cont1 ][ cont2 ]);
		}
	}
	
system("pause");
return(0);
}