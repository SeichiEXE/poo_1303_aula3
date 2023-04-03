//Início do código
#include <iostream>
using namespace std;
//inserção namespace
int main() {
    //Valor principal
    float raio, area;
    //inserindo a variável PI
    const float PI = 3.14159;
    //Interface do usuário
    cout << "Digite o raio do circulo: ";
    //Inserção do valor do raio
    cin >> raio;

    //raio colocado
    area = PI * raio * raio;
    //fórmula da resolução
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}
