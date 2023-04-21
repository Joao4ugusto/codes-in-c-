#include <iostream>
using namespace std;

int main(){
    cout << "*******************************" << endl;
    cout << "Bem Vindo ao Jogo de advinhacao" << endl;
    cout << "*******************************" << endl;

    int num_secreto = 42;
    // cout << "Numero secreto eh: " << num_secreto << endl;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O numero do chute foi " << chute << endl;

    bool acertou = chute == num_secreto;
    bool maior = chute > num_secreto;

    if(acertou){
        cout << "Prabens vc acertou!!" << endl;
    } else if (maior){
        cout << "Seu chute foi maior do que numero secreto!!" << endl;
    } else {
        cout << "Seu chute foi menor!!" << endl;
    }
}