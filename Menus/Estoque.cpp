#include "funcoesgerais.h"

void MenuEstoque() {
    //Variaveis
    string Op;
    while (true) {
        system("cls");

        cout << "[1] Ler Estoque" << endl;
        cout << "[2] Add Estoque" << endl;
        cout << "[3] Avisos Estoque" << endl;
        cout << "[0] Sair" << endl;
        cout << ": " << endl;
        cin >> Op;

        if (Op == "1") {
            LerEstoque();
        }else if (Op == "2") {
            AddItemEstoque();
        }else if (Op == "3") {
            AvisosEstoque();
        }else if (Op == "0") {
            break;
        }
    }
}