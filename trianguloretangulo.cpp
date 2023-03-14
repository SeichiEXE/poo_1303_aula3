//Insert biblioteca
#include <iostream>
using namespace std;
//iniciar codigo calculo

int main() {
    //Variaveis triangulo retangulo
    float cateto_oposto, cateto_adjacente, area;
    //colocar variavel cateto oposto
    cout << "Digite o valor do cateto_oposto";
    //valor cateto oposto 
    cin >> cateto_oposto;
    //colocar variavel cateto adjacente
    cout << "digite o valor do cateto_adjacente";
    //valor cateto adjacente
    cin >> cateto_adjacente;
    //formula calculo triangulo retangulo
    area = (cateto_oposto * cateto_adjacente) / 2;
    //resultado calculo 
    cout << "A area do triangulo retangulo eh: " << area << endl;
    
    return 0;
}