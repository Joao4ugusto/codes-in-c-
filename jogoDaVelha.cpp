#include <iostream>
using namespace std;

int main(){
    cout << "*******************************" << endl;
    cout << "Bem Vindo ao Jogo de advinhacao" << endl;
    cout << "*******************************" << endl;

    int num_secreto = 42;
    cout << "Numero secreto eh: " << num_secreto << endl;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O numero do chute foi " << chute << endl;

    if(chute == num_secreto){
        cout << "Prabens vc acertou!!";
    } else {
        cout << "Esse nao eh o numero!!";
    }
}