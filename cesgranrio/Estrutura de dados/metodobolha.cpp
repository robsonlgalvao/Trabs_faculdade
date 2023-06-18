#include <stdio.h>
#include <stdlib.h>


#define max 5

int main(int argc, char *argv[]) {
	int i, j, aux;
	int vetor[max]={9,2,8,4,3};
		
			
			for(i=0;i<max-1;i++){
				for(j=i+1;j<max;j++){
					if(vetor[i]>vetor[j]){
						aux=vetor[i];
						vetor[i]=vetor[j];
						vetor[j]=aux;
					}
				}
				
			}
			
			
			
	for(i=0;i<max;i++){
		printf("%d \t",vetor[i]);
	}
	return 0;
	
	
}
