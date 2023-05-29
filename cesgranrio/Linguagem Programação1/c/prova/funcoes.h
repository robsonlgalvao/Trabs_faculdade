
struct Aluno{
long mat;
int qtd;
float soma;
float CR;
};

void Ordena(struct Aluno *Vet, int valor){
int i,j;
struct Aluno aux;
	for (i=0;i<valor-1;i++){
		for(j=i+1;j<valor;j++){
			if(Vet[i].CR<Vet[j].CR){
				aux=Vet[i];
				Vet[i]=Vet[j];
				Vet[j]=aux;
			}
		}
	}
}
int Busca (struct Aluno *Vet, int valor, float cr){
int i, pos=-1;
	for(i=0;i<valor;i++){
		if(Vet[i].CR==cr){
		pos=i;
		i=valor;
		}
	}
return pos;
}
float Maior(struct Aluno *Vet, int valor){
int i,j;
struct Aluno aux;
	for (i=0;i<valor-1;i++){
		for(j=i+1;j<valor;j++){
			if(Vet[i].CR<Vet[j].CR){
				aux=Vet[i];
				Vet[i]=Vet[j];
				Vet[j]=aux;
			}
		}
	}
return Vet[0].CR;
}
/*Ou pode ser feito dessa forma:
float Maior(struct Aluno *Vet, int valor){
int i;
float maior=0;
	for (i=0;i<valor;i++){
		if (Vet[i].CR>maior){
		maior=Vet[i].CR;
	}
return maior;
}*/

