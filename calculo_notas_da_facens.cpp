#include <iostream>
#include <stdlib.h>
using namespace std;
//inserindo bibliotecas
int main() {
    //nomeando as variaveis da nota
    double ac1, ac2, af;
    //digitando o valor da variavel ac1
    cout << "Digite a sua nota da ac1 >>>";
    //variavel ac1 trancrita
    cin >> ac1;
    //digitando o valor da variavel ac2
    cout << "Digite a sua nota da ac2 >>>";
    //variavel ac2 trancrita
    cin >> ac2;
    //digitando o valor da variavel af
    cout << "Digite a sua nota da af >>>";
    //variavel af transcrita
    cin >> af;
    //tranformando nota em media
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    af = (af * 0.50);
    //Inserindo medidas de condições da nota (aprovado ou reprovado)
    double soma = (ac1 + ac2 + af);
    //resultado da soma de media 
    cout << "A sua média do semestre foi: " << soma << endl << endl;
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{
        cout << "Eita! Você foi reprovado" << endl;
    }
    return 0;

}