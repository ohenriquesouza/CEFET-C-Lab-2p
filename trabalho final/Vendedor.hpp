#ifndef __VENDEDOR_HPP
#define __VENDEDOR_HPP
#include "Pessoa.hpp"
#include "ListaPedido.hpp"
using namespace std;

class Vendedor:public Pessoa{
    private:
        ListaPedido LPD;
        Vendedor* prox;
        int matricula;
    public:
        Vendedor();
        Vendedor(string nome, string endereco, int telefone, string dataNasc, int CPF, int matricula);

        void setmatricula(int matricula);
        int getmatricula();

        void setprox(Vendedor* prox);
        Vendedor* getprox();

        void InserirPedidoNoVendedor(Pedido* PD);

        void setLPD(ListaPedido LPD);
        ListaPedido getLPD();

        void MostrarPedidos();
};
#endif