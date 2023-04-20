#include <iostream>
using namespace std;

int main(){
    cout << "*******************************" << endl;
    cout << "Bem Vindo ao Jogo de advinhacao" << endl;
    cout << "*******************************" << endl;

    int num_secreto = 42;
    cout << "Numero secreto eh: " << num_secreto << endl;

    int chute;
    cout << "Qual seu chute:" << endl;
    cin >> chute;
    cout << "O numero do chute foi " << chute << endl;
}