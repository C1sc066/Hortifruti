#include "../include/funcoesgerais.h"

void MenuAdmin() {
    //Menu Admin
    string Op;
    while (true) {
        //Menu principal do admin
        system("cls");
        cout << "Voce esta logado como: " << "Admin" << endl;
        cout << "[1] - Estoque" << endl;
        cout << "[2] - Logins" << endl;
        cout << "[3] - Fornecedores" << endl;
        cout << "[0] - Sair" << endl;
        cout << ": ";
        cin >> Op;

        if (Op == "1") {//Submenu do Estoque
            while (true) {
                system("cls");
                cout << "[1] Ler Estoque" << endl;
                cout << "[2] Adicionar item ao estoque" << endl;
                cout << "[0] Sair" << endl;
                cout << ": ";
                cin >> Op;
                if (Op == "1") {
                    //Chamando a função de leitura do estoque
                    LerEstoque();
                }
                else if (Op == "2") {
                    //Chamando a função para adicionar um novo item
                    AddItemEstoque();
                }
                else if (Op == "0") {
                    system("cls");
                    cout << "voltando para o menu principal aguarde..";
                    sleep(2.5);
                    //quebra o while do submenu estoque
                    break;
                }
            }

        }
        else if (Op == "2") {//Submenu do login
            while (true) {
                system("cls");
                cout << "[1] - Logins" << endl;
                cout << "[2] - Cadastrar Login" << endl;
                cout << "[0] - Sair" << endl;
                cout << ": ";
                cin >> Op;
                if (Op == "1") {
                    //Chama a função lerlogin para ler todos os login do sistema
                    LerLogins();
                }
                else if (Op == "2") {
                    //Chama a função addlogin para adicionar um novo login para o sistema
                    AddLogin();
                }
                else if (Op == "0") {
                    system("cls");
                    cout << "Voltando para o menu principal aguarde..";
                    sleep(2.5);
                    //quebra o while do submenu login
                    break;
                }
            }
        }
        else if (Op == "3") {//Submenu dos fornecedores
            while (true) {
                system("cls");
                cout << "[1] - Mostrar Fornecedores" << endl;
                cout << "[2] - Cadastrar Fornecedor" << endl;
                cout << "[0] - Sair" << endl;
                cout << ": ";
                cin >> Op;
                if (Op == "1") {
                    LerFornecedores();
                }
                else if (Op == "2") {
                    AddFornecedores();
                }
                else if (Op == "0") {
                    system("cls");
                    cout << "Voltando para o menu principal aguarde..";
                    sleep(2.5);
                    //quebra o while do submenu login
                    break;
                }
            }
        }
        else if (Op == "0") {//Saida
            system("cls");
            cout << "Deslogando do sistema..";
            sleep(2);
            system("cls");
            break;
        }
    }
}