//inserindo bibliotecas
#include <iostream>
using namespace std;
//inicio do codigo
int main() {
    //inserindo valor das variaveis num1 e num2
    int num1 = 10, num2 = 4;
    //inserindo variaveis de operações
    int soma, multi, divi, modulo, subt;
    //inserindo operação de soma
    soma = num1 + num2;
    //inserindo operação de multiplicação
    multi = num1 * num2;
    //inserindo operação de divisão
    divi = num1 / num2;
    //inserindo operação de modulo
    modulo = num1%num2;
    //inserindo operação de subtração
    subt = num1 - num2;
    //resultado das operações
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    
    return 0;
}
