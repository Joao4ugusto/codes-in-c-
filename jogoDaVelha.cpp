#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "*******************************" << endl;
    cout << "Bem Vindo ao Jogo de advinhacao" << endl;
    cout << "*******************************" << endl;

    cout << "Escolha seu nivel: " << endl;
    cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;

    char dificuldade;

    cin >> dificuldade;

    int numero_de_tentativas; 

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    } else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    } else {
        numero_de_tentativas = 5;
    }
    
    srand(time(NULL));
    const int NUM_SECRETO = rand() % 100;
    // cout << "Numero secreto eh: " << NUM_SECRETO << endl;

    bool nao_acertou = true;
    int tentativas;
    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){
       int chute;
       cout << "Tentativa " << tentativas << endl;
       cout << "Qual seu chute? ";
       cin >> chute;
       cout << "O numero do chute foi " << chute << endl;
       

       double pontos_perdidos = abs(chute - NUM_SECRETO)/2.0;
       pontos = pontos - pontos_perdidos;

       bool acertou = chute == NUM_SECRETO;
       bool maior = chute > NUM_SECRETO;

       if(acertou){
        cout << "Parabens vc acertou!!" << endl;
        nao_acertou = false;
        break;
       } else if (maior){
        cout << "Seu chute foi maior do que numero secreto!!\n\n" << endl;
       } else {
        cout << "Seu chute foi menor!!\n\n" << endl;
       }
       }
       cout << "Fim de Jogo!\n";
       
       if(nao_acertou){
        cout << "Voce perdeu!! tente novamente" << endl;
       } else {
        cout << "Voce acertou na sua tentativa de numero " << tentativas - 1 << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Voce ficou com " << pontos << " de pontuacao!!" << endl;        
       }

}