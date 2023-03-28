//declaração de bibliotecas
#include <iostream>
using namespace std;
//inicio do codigo
int main () {
    //declaração da variavel num
    int num;
    //uso do comando do
    do {
        //interface de usuario
        cout << "Digite um numero entre 1 e 10: ";
        //variavel num declarada
        cin >> num;
        //uso do comando while
    }while (num < 1 || num > 10);
    //resultado da interface
    cout << "Voce digitou o numero " << num << ".";
   
    return 0;
}