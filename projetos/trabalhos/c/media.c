/*criar um programa que peça 2 notas do aluno e calcular a media e no final perguntar que quer calcular outra media*/
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");

int n1,n2,resp; float media; 
	
	do{
	
		printf("Digite a primeira nota: ");
		scanf("%d",&n1);
		printf("Digite a segunda nota: ");
		scanf("%d",&n2);
		
		media=(n1+n2)/2;
	
		printf("A media do aluno é: %.2f\n",media);
		if(media<6){
			printf("\nAluno reprovado :(\n");
		}else{
			printf("\nAluno aprovado :)\n");
		}
		printf("\nDeseja calcular media de outro aluno? 1=sim qualquer outra=não \n");
		scanf("%d",&resp);
		system("cls");
	}while(resp==1);
	
	
	
	system("pause");
return 0;
}
