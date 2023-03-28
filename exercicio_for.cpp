//declaração de bibliotecas
#include <iostream>
using namespace std;
//inicio do codigo
int main () {
    //declaração de variavel num
    int num;
    //interface de usuario 
    cout << "Digite um numero inteiro positivo: ";
    //variavel num declarada
    cin >> num;
    //declaração de condição 
    cout << "Os primeiros " << num << "numeros pares sao ";
    //calculo para funcionamento do codigo 
    for (int i = 2; 1 <= num * 2; i += 2) {
        cout << i << " ";
    }
    
    return 0;
}