//Biblioteca bootada
#include <iostream>
using namespace std;
//Inicio do codigo 

int main() {
    //Variaveis usadas no calculo
    float base, altura, area;
    //digitar base do retangulo
    cout << "Digite a base do retangulo";
    //valor da variavel base aplicado
    cin >> base;
    //digitar altura do retangulo
    cout << "Digite a altura do retangulo";
    //valor da variavel altura aplicado
    cin >> altura;
    //formula calculo area do retangulo 
    area = base * altura;
    //resultado dos valores das variaveis
    cout << "A area do retangulo eh: " << area << endl;
    
    return 0;
}