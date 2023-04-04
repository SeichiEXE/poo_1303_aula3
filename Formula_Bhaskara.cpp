//declarando bibliotecas
#include <iostream>
#include <cmath>
using namespace std;
//inserindo variaveis
int main () {
    //declarando variaveis para formula
    float a, b, c, x1, x2, delta;
    //declarando valor de variavel a
    cout << "Digite o valor de a ";
    //resultado da declaração a
    cin >> a;
    //declarando valor de variavel b
    cout << "Digite o valor de b ";
    //resultado da declaração b
    cin >> b;
    //declarando valor da variavel c
    cout << "Digite o valor de c ";
    //resultado da declaração c
    cin >> c;
    //formula do calculo de delta
    delta = pow(b, 2) - 4 * a * c;
    //se delta for positivo
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);//calculo de x1
        x2 = (-b + sqrt(delta)) / (2 * a);//calculo de x2
        //resultado das raizes da equação
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl; 
    }
    else {//resultado negativo
        cout << "A equacao nao possui raizes reais. " << endl; 
    }
    return 0;
}