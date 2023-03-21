#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
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