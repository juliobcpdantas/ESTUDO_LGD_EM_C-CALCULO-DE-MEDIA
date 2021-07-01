#include <iostream>
using namespace std;                                               //uso de biblioteca para funcionamento do comando cin e cout 

int main(int argc, char** argv) {                                  //linha que indica o iniciador do programa principal 
int numero;                                                        //declaração de variáveis uilizados no programa
cout<<"Digite um numero:"<<endl;                                   //leitura dos dados pra o usuário, cin = input de dados, cout = output de descrição do dado para o usuário
cin>>numero;
(numero>=0)? numero++ : numero--;                                  //teste lógico de operador ternário, se o numero for positivo será incrementado, se negativo, decrementado
cout<<"o novo numero eh:"<<numero;                                 //feito isso, será mostrado esta mensagem para o usuário  
return 0;
}
