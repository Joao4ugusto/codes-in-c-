#include <iostream>
#include <string>
#include <map>
#include <cstdlib> // para usar system("pause")
using namespace std;

string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;

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
    
    int tentativas = 0; // número de tentativas feitas pelo jogador
    
    while(nao_acertou && nao_enforcou && tentativas < 7){ // adicionado o limite de tentativas
        
        for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
            if(chutou[PALAVRA_SECRETA[i]]){
                cout << PALAVRA_SECRETA[i] << " ";
            } else {
                cout << "_ ";
            }
        }
        
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
        }
        
    }
    
    system("pause"); // pausa a execução para visualizar o resultado
    return 0; // indica que o programa terminou com sucesso
}