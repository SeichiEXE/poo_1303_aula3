//Insert da biblioteca
#include <iostream>
using namespace std;
//codigo sendo iniciado

int main() {
    //Variaveis
    float base, altura, area;
    //Insert base
    cout << "Digite a base do triangulo";
    //base colocada
    cin >> base;
    //Insert altura
    cout << "Digite a altura do triangulo";
    //altura colocada
    cin >> altura;
    //calculo area
    area = (base * altura) / 2;
    //resposta area
    cout << "A area do triangulo eh: " << area << endl;
    
    return 0;
}
