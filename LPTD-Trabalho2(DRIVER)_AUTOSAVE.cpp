#include<iostream>
#include<string>
#include<vector>
#include"LPTD-TRABALHO2.h"
#include<fstream>
using namespace std;

fila clientez;

int main(){
    item lista_itens[21]; //ta 21 pra pular a posição 0.
    int count=0;
    int choice=0;
    cliente atual;
    string nomeatual;

    ofstream saveitems("ITENS_SALVOS.txt", ios::out);
    string nome_save;
    int codigo_save;
    int preco_save;
    int tempo_save;
    saveitems << lista_itens[count].nome << ", " << lista_itens[count].codigo << ", " << lista_itens[count].valor << ", " << lista_itens[count].tempo << ", " << endl;
    
    do{
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        cout << endl;
        cout << endl;
        cout << "                                " << "Bem-vindo a tela inicial! O que gostaria de fazer?" << endl;
        cout << "                                " << "1.Criar item." << endl;
        cout << "                                " << "2.Cadastrar um pedido" << endl;
        cout << "                                " << "3.Fechar um pedido" << endl;  
        cout << "                                " << "4.Mostrar fila" << endl;  
        cout << "                                " << "5.Manual" << endl;
        cout << endl;
        cout << endl;
        cout << "                                " << "Sua escolha: ";
        cin >> choice;
        cout << endl;
        cout << endl;
        cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;


        switch(choice){
        case 1:
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            cout << endl;
            cout << endl;
                cout << "Nome do item:\t" << endl;
                cin >> lista_itens[count].nome;
                cout << "Codigo do item:\t" << endl;
                cin >> lista_itens[count].codigo;
                cout << "Valor do item:\t" << endl;
                cin >> lista_itens[count].valor;
                cout << "Tempo de espera media do item" << endl;
                cin >> lista_itens[count].tempo;
                saveitems << lista_itens[count].nome << ", " << lista_itens[count].codigo << ", " << lista_itens[count].valor << ", " << lista_itens[count].tempo << ", " << endl;
                count++;
            cout << endl;
            cout << endl;
            cout << "                            " << "RETORNANDO A TELA INICIAL" << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            break;

        case 2:
            int escolha1,escolha2,escolha3;
            for(int i = 0; i < count; i++){
                cout << "----------------------------------" << endl;
                cout << "CARDAPIO:\t " << i << endl;
                cout << "Nome:\t" << lista_itens[i].nome << endl; 
                cout << "Valor:\t" <<lista_itens[i].valor << " R$" << endl;
                cout << "Tempo medio de espera:\t" << lista_itens[i].tempo << " minutos" << endl;
                cout << "----------------------------------" << endl;
            }
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            cout << endl;
            cout << endl;
            cout << "Selecione os 3 itens desejados" << endl;
            cout << "Escolha:\t";
            cin >> escolha1;
            cin >> escolha2;
            cin >> escolha3;
            cout << escolha1 << escolha2 << escolha3 << endl;
            cout << "Item escolhido" << endl;
            cout << "----------------------------------" << endl;
            cout << "Item " << escolha1 << endl;
            cout << lista_itens[escolha1].nome << endl; 
            cout << lista_itens[escolha1].valor << endl;
            cout << lista_itens[escolha1].tempo << endl;
            cout << "----------------------------------" << endl;
            cout << "----------------------------------" << endl;
            cout << "Item " << escolha2 << endl;
            cout << lista_itens[escolha2].nome << endl; 
            cout << lista_itens[escolha2].valor << endl;
            cout << lista_itens[escolha2].tempo << endl;
            cout << "----------------------------------" << endl;
            cout << "----------------------------------" << endl;
            cout << "Item " << escolha3 << endl;
            cout << lista_itens[escolha3].nome << endl; 
            cout << lista_itens[escolha3].valor << endl;
            cout << lista_itens[escolha3].tempo << endl;
            cout << "----------------------------------" << endl;
            atual.x1 = lista_itens[escolha1];
            atual.x2 = lista_itens[escolha2];
            atual.x3 = lista_itens[escolha3];
            cout << "Nome do cliente:\t";
            cin >> nomeatual;
            atual.nome=nomeatual;
            clientez.append(atual);
            cout << endl;
            cout << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            break;
        
        case 3:
            clientez.serve(atual);
            break;

        case 4:
            clientez.show(clientez);
            break;
            
        case 5:
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            cout << endl;
            cout << endl;
            cout << "                                " << "OPCÃO 1: Responsavel por criar itens do seu catalogo" << endl;
            cout << "                                " << "OPCÃO 2: Faz pedidos e os adiciona a fila comum" << endl;
            cout << "                                " << "OPCÃO 3: Retira um pedido da fila" << endl;
            cout << "                                " << "OPCÃO 4: Mostra os clientes da fila" << endl;
            cout << "                                " << "OPCÃO 5: Mostra este manual" << endl;
            cout << endl;
            cout << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            break;
        
        default:
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
            cout << endl;
            cout << endl;
            cout << "                                " << "INPUT INVALIDO" << endl;
            cout << endl;
            cout << endl;
            cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        };
    }while(choice!=0);
}