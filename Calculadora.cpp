//inserindo bibliotecas
#include <iostream>
#include <cmath>
using namespace std;
//inicio de codificação 
int main () {
    //declaração de variavel
    char op;
    //declaração de variavel num1 e num2
    float num1, num2;
    //interface de usuario com operador
    cout << "ENTRE COM O OPERADOR: +, -, *, /:";
    //operador declarado
    cin >> op;
    //interface de usuario com valores 
    cout << "ENTRE COM DOIS VALORES: ";
    //variaveis num1 e num2 declaradas
    cin >> num1 >> num2;
    //utilização do comando switch
    switch(op) {
    //declaração de caso soma
    case '+':
    //calculo de soma de valores
    cout << num1 <<  " + " << num2 << " = " << num1 + num2;
    //interromper operação
    break;
    //declaração de caso subtração
    case '-':
    //calculo de subtração de valores
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    //interromper operação
    break;
    //declaração de caso multiplicação
    case '*':
    //calculo de multiplicação de valores
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    //interromper operação
    break;
    //declaração de caso divisão
    case '/':
    //calculo de divisão de valores
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    //interromper operação
    break;
    //declaração de padrão do programa
    default:
    //interface de usuario com erro de operador
    cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO";
    //interromper ação
    break;
    }
    return 0;
    
}