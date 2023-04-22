#include <iostream>
using namespace std;

int main(){
    cout << "*******************************" << endl;
    cout << "Bem Vindo ao Jogo de advinhacao" << endl;
    cout << "*******************************" << endl;

    const int NUM_SECRETO = 42;
    // cout << "Numero secreto eh: " << num_secreto << endl;

    bool nao_acertou = true;
    int tentativas = 1;
    double pontos = 1000.0;

    while(nao_acertou){
       int chute;
       cout << "Tentativa " << tentativas << endl;
       cout << "Qual seu chute? ";
       cin >> chute;
       cout << "O numero do chute foi " << chute << endl;
       tentativas++; 

       double pontos_perdidos = abs(chute - NUM_SECRETO)/2.0;
       pontos = pontos - pontos_perdidos;

       bool acertou = chute == NUM_SECRETO;
       bool maior = chute > NUM_SECRETO;

       if(acertou){
        cout << "Prabens vc acertou!!" << endl;
        nao_acertou = false;
       } else if (maior){
        cout << "Seu chute foi maior do que numero secreto!!\n\n" << endl;
       } else {
        cout << "Seu chute foi menor!!\n\n" << endl;
       }
       }
       cout << "Fim de Jogo!\n";
       cout << "Voce acertou na sua tentativa de numero " << tentativas - 1 << endl;
       cout.precision(2);
       cout << fixed;
       cout << "Voce ficou com " << pontos << " de pontuacao!!" << endl;
}