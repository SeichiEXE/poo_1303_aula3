//declaração de bibliotecas
#include <iostream>
using namespace std;
//inicio do codigo
int main () {
    //declaração de variavel
    int num, i = 1;
    //interface de usuario com valores
    cout << "Digite um numero inteiro positivo: ";
    //valor do numero inteiro declarado
    cin >> num;
    //utilização do comando while
    while (1 <= num) {
        //variavel i utilizada
        cout << i << " ";
        i++;
    }
    return 0;
}
