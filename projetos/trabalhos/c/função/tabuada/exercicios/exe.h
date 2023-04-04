#include<stdio.h>

void exe2(int n1){
	int i,j,tot=0;
	
	for(i=1;i<=20;i++){
		
		j=n1*i;
		tot=tot+j;
	}
	
	printf("Total: %d",tot);
}
