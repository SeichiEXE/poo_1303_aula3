//inserindo bibliotecas
#include <iostream>
#include <string>
using namespace std;
//Inserindo variveis usadas no personagem
int main() {
    //variavel de vida inserida
    int life;
    //variavel de energia da arma inserida
    float energy;
    //variavel de status de vida inserida (Vivo ou morto)
    bool status;
    //variavel do nome do personagem inserida (MegaMan)
    string character;
    //Inserir valor da variavel life
    life = 9;
    //inserir valor da variavel energy
    energy = 99.99f;
    //inserir valor da variavel status do personagem
    status = true;
    //inserir o nome da variavel character (nome do personagem)
    character = "Mega Man";
    //condições da variavel life
    cout<<life<<endl;
    //condições da variavel energy
    cout<<energy<<endl;
    //condições da variavel status
    cout<<status<<endl;
    //condições da variavel character
    cout<<character<<endl;
    
    return 0;
    
}
