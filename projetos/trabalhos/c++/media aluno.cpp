#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,media;
	
	cout<<"digite a nota 1 do aluno "<<endl;
	cin>>n1;
	cout<<"digite a nota 2 do aluno "<<endl;
	cin>>n2;
	media = (n1+n2)/2;
	
	cout<<"A media desse aluno foi ";cout<<media;
	
	return 0;
}
