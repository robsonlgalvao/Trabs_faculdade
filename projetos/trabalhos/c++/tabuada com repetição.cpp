#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	string s;
	int cont, mult,tab;
	s="s";
	cont=1;
	while(s=="s"){
	
		cout<<"Digite o número para calcular a tabuada: ";
		cin>>tab;
		while(cont<=10){
						
			mult = cont * tab;
			cout<<tab;cout<<" x "<<cont;cout<<" = "<<mult<<endl;
			
			cont=cont+1;
			
		}
		cout<<"\nDeseja Calcular outra Tabuada? (s=sim ou n=não):";
		cin>>s;
		cont=1;
	}
	
	
	return 0;
}
