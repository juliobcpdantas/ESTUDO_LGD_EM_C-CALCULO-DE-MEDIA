#include <iostream>
using namespace std;                                               //uso de biblioteca para funcionamento do comando cin e cout 

int main(int argc, char** argv) {                                  //linha que indica o iniciador do programa principal 
float nota1;                                                       //declaração de variáveis uilizados no programa
float nota2;
float media;

cout<<"Digite a primeira nota:"<<endl;                             //leitura dos dados pra o usuário, cin = input de dados, cout = output de descrição do dado para o usuário
cin>>nota1;
cout<<"digite a segunda nota:"<<endl;
cin>>nota2;
media = (nota1+nota2)/2;

(media>=6)? count<<"Media = "<<media<<" - Aprovado"<<endl:cout<<"Media = "<<media<<" - Reprovado"<<endl;       //tentativa de substituir o teste logico com operador ternario
cout<<"Excute novamente para calcular outra media"<<endl;     
         
return 0;
}
