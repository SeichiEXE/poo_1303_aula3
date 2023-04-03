//inserindo bibliotecas
#include <iostream>
using namespace std;
//inicio de codigo
int main() {
    //inserindo variavel e valor de "a" 
    int a = 5;
    //inserindo variavel e valor de "b"
    int b = 10;
    //inserindo variavel e valor de "c"
    int c = 15;
    
    //exemplo de uso do operador AND (&&)
    if (a < b && b < c) {
        cout << "A ordem é: a, b, c" << endl;
    }
    //exemplo de uso do operador OR (||)
    if (a > b || b > c) {
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    //exemplo de uso do operador NOT (!)
    if (!(a == b)) {
        cout << "a é diferente de b" << endl;
    }
    
    return 0;
}
