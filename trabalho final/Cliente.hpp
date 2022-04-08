#ifndef __CLIENTE_HPP
#define __CLIENTE_HPP
#include "Pessoa.hpp"
#include "ListaPedido.hpp"
using namespace std;

class Cliente:public Pessoa{
    private:
        ListaPedido LPD;
        Cliente* prox;
        double limiteCredito;
        Pessoa contato;
    public:
        Cliente();
        Cliente(string nome, string endereco, int telefone, string dataNasc, int CPF, double limiteCredito, Pessoa contato);

        void setlimiteCredito(double limiteCredito);
        double getlimiteCredito();

        void setcontato(Pessoa contato);
        Pessoa getcontato();

        void setprox(Cliente* prox);
        Cliente* getprox();

        void InserirPedidoNoCliente(Pedido* PD);

        void setLPD(ListaPedido LPD);
        ListaPedido getLPD();

        void MostrarPedidos();
};
#endif