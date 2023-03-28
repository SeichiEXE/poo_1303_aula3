//incluindo bibliotecas
#include <iostream>
using namespace std;
//inicio codigo
int Soma (int a, int b)
//inserindo variavel soma e seus componentes
{
    //declaração de variavel resultado
    int Resultado;
    //formula da variavel resultado
    Resultado = a + b;
    //retorno para resultado
    return Resultado;
}
//inserindo valores para resultado da variavel soma
int main()
{
    cout << Soma(70,90) << endl;
}