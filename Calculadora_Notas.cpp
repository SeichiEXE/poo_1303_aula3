//inserindo bibliotecas
#include <iostream>
#include <stdlib.h>
using namespace std;
//inicio do codigo
int main() {
    //inserindo variaveis para a formula
    double nota1, nota2, nota3, nota4;
    //inserir variavel nota1
    cout << "Digite a sua primeira nota do semestre >>>";
    //variavel nota1 pronta
    cin >> nota1;
    //inserir variavel nota2
    cout << "Digite a sua segunda nota do semestre >>>";
    //variavel nota2 pronta
    cin >> nota2;
    //inserindo variavel nota3
    cout << "Digite a sua terceira nota do semestre >>>";
    //variavel nota3 pronta
    cin >> nota3;
    //inserindo variavel nota4
    cout << "Digite a sua quarta nota do semestre >>>";
    //variavel nota4 pronta
    cin >> nota4;
    //inserir formula para calculo de cada nota
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);
    //resultado do calculo
    cout << "A sua media do semestre foi:" << soma << endl << endl;
    //condições de aprovação e reprova
    if (soma >= 7) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{
        cout << "Eita! Você foi reprovado!" << endl;
    }
    return 0;
}
