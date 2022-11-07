#include<iostream>
#include<string>
using namespace std;

struct item{
    string nome;
    int codigo;
    int tempo;
    int valor;
};

struct cliente{
    string nome;
    item x1;
    item x2;
    item x3;
    cliente *prox_cliente;
};

typedef cliente *pont_cliente;

class fila{
    public:
    fila();
    ~fila();
    void append(cliente x);
    void serve(cliente &x);
    bool empty();
    void clear();
    void show(fila x);

    private:
    pont_cliente primeiro, ultimo;
};