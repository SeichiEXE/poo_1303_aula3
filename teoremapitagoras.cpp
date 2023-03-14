//Insert Bibliotecas
#include <iostream>
#include <cmath>
using namespace std;
//iniciar codigo calculo

int main() {
    //Variaveis teorema pitagoras
    float cateto_a, cateto_b, hipotenusa;
    //Inserir valor  do cateto a
    cout << "Digite o valor do cateto_a:";
    //valor cateto a inserido
    cin >> cateto_a;
    //inserir valor do cateto b
    cout << "Digite o valor do cateto_b:";
    //cateto b inserido
    cin >> cateto_b;
    //formula para o resultado da operação
    hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));
    //valor calculado e resultado colocado
    cout << "O valor de c eh: " << hipotenusa << endl;
    
    return 0;
}