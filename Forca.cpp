#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib> // para usar system("pause")
using namespace std;

string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

bool letraExiste(const char chute){
    for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if(chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
}

bool nao_acertou(){
    for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if(!chutou[PALAVRA_SECRETA[i]]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
  return chutes_errados.size() < 5;
}


int main(){
    
    cout << "*******************" << endl;
    cout << "**Jogo da Forca***"  << endl;
    cout << "*******************" << endl;

    int tentativas = 0; // número de tentativas feitas pelo jogador

    while(nao_acertou() && nao_enforcou()){ // adicionado o limite de tentativas
        
        cout << "Letras chutadas: ";
        for(int i = 0; i < chutes_errados.size(); i++){
            cout << chutes_errados[i];
        }
        cout << endl;
        for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
            if(chutou[PALAVRA_SECRETA[i]]){
                cout << PALAVRA_SECRETA[i] << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl; 
        cout << endl;
        cout << "Seu chute:";
        cout << endl;
        char chute;
        cin >> chute;
       
        chutou[chute] = true;
        tentativas++; // incrementa o número de tentativas

        cout << "seu chute foi " << chute << endl;

        if(letraExiste(chute)){
            cout << "Voce acertou!! Seu chute esta na palavra!!" << endl;
        } else {
            cout << "Voce errou!! Seu chute nao esta na palavra!!" << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;

    }

    system("pause"); // pausa a execução para visualizar o resultado
    return 0; // indica que o programa terminou com sucesso
}