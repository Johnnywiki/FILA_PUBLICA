#include"LPTD-TRABALHO2.h"
using namespace std;

fila::fila(){  // Atribuimos o começo e o fim da fila para zeros.
    primeiro = ultimo = NULL; // NULL é um sinonimo em computação para o valor 0! Isso significa que não existe algo na fila.
}

fila::~fila(){ // Aqui criamos um objeto para deletar, neste caso: delete.
    cliente x;
    while(!empty()){ //Enquanato a função "empty" não for completa, nesse caso, estiver vazia...
        serve(x); //...iremos a servir delientex, ou seja, tira-lo da fila até não existir mais um delete a ser apagado.
    }
}

bool fila::empty(){
    if(primeiro == NULL){
        return true;
    }
    else return false;
}

void fila::append(cliente x){
    pont_cliente clientex;
    clientex = new cliente;

    if(clientex==NULL){
        cout << "Memoria insuficiente" << endl;
        abort();
    }
    clientex->nome=x.nome;
    if(empty()){
        primeiro=ultimo=clientex;
    }else{
        ultimo->prox_cliente=clientex;
        ultimo=clientex;
    }
    clientex->prox_cliente=NULL;
    cout<<endl<<"APPEND FEITO COM SUCESSO"<<endl;
}

void fila::serve(cliente &x){
    pont_cliente clientex;

    if(empty()){
        cout << "FILA VAZIA" << endl;
        abort();
    }

    x.nome=primeiro->nome;
    clientex=primeiro;
    primeiro=primeiro->prox_cliente;
    delete clientex;

    if(primeiro==NULL){
        ultimo=NULL;
    }
    cout<<endl<<"SERVE FEITO COM SUCESSO"<<endl;
}

void fila::show(fila xx){
    cliente x;
         cout << "FILA:" << endl;
    while(!xx.empty()){
         //xx.primeiro->nome = "JOHNNNNNNYNYNYNYNYNYNYN";
         cout << xx.primeiro->nome << endl;
         cout << "  |" << endl;
         cout << "  V" << endl;
        //  xx.serve(x);
         cout << endl;
    }
    if(xx.empty()){
        cout << "FILA VAZIA!" << endl;
    }
}