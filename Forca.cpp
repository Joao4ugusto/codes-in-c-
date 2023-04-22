#include <iostream>
#include <string>
using namespace std;

 string PALAVRA_SECRETA = "MELANCIA";

 bool letraExiste(const char chute){
    for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if(chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
 }

int main(){

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
       char chute;
       cout << "Digite seu chute ";
       cin >> chute;

       cout << "seu chute foi " << chute << endl;

       if(letraExiste(chute)){
        cout << "Voce acertou!! Seu chute esta na palavra!!" << endl;
       } else {
        cout << "Voce errou!! Seu chute nao esta na palavra!!" << endl;
       }
    }
}