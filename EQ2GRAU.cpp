 #include <iostream> 
#include <cstdlib>
#include <cmath> //informe de bibliotecas utilizadas
using namespace std;

int main(int argc, char** argv){ //definição de argumentos, numeros inteiros e uso de caractéres
	float x1,x2; //declaração de variáveis flutuantes
	float a,b,c;
	float delta;
	
	cout<<"Digite o coeficiente a"<<endl; //Descrição do input de variável
	cin>>a; //substituição do valor da variável para o digitado
	cout<<"Digite o coeficiente b"<<endl;
	cin>>b;
	cout<<"Digite o coeficiente c"<<endl;
	cin>>c;
	
	delta = b*b-4*a*c; //formulas das variáveis
	//calculo de raízes
	x1=(-b+sqrt(delta))/2*a;//formula de raiz quadrada (sqrt) incluida pela biblioteca cmath
	x2=(-b-sqrt(delta))/2*a;
	
	cout<<"x1 = "<<x1<<endl; //apresentação dos resultados
	cout<<"x2 = "<<x2<<endl;
	
	
}


