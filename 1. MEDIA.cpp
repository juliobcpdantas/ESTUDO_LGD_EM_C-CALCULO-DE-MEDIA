#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	cout<<"digite a primeita nota: "<<endl;
	cin>>nota1;
	cout<<"digite a segunda nota: "<<endl;
	cin>>nota2;
	cout<<"digite a terceira nota: "<<endl;
	cin>>nota3;
	cout<<"digite a quarta nota: "<<endl;
	cin>>nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	cout<<"A media do aluno eh: "<<media<<endl;
	return 0;
	
}
