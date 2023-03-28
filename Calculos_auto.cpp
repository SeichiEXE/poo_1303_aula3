//incluindo bibliotecas
#include <iostream>
using namespace std;
//inserindo variavel soma e componentes
int soma (int a, int b){
    //declaração de variavel resultado
    int Resultado;
    //formula da variavel resultado
    Resultado = a + b;
    //retorno para resultado
    return Resultado;
}
//inserindo varivel subtração e componentes
int sub(int a, int b){
    //declaração de variavel resultado
    int Resultado;
    //formula da variavel resultado
    Resultado = a - b;
    //retorno para resultado
    return Resultado;
}
//inserindo variavel multiplicação e componentes
int multi (int a, int b){
    //declaração de variavel resultado
    int Resultado;
    //formula da variavel resultado
    Resultado = a * b;
    //retorno para resultado
    return Resultado;
}
//inserindo variavel divisão e componentes
int divi (int a, int b){
    //declaração de variavel resultado
    int Resultado;
    //formula da variavel resultado
    Resultado = a / b;
    //retorno para resultado
    return Resultado;
}
//declaração de resultados
int main()
{
    cout << soma(70,90) << endl;
    cout << sub(50,35) << endl;
    cout << multi(7,6) << endl;
    cout << divi(50,10) << endl;
}