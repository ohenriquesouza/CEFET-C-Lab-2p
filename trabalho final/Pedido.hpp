#ifndef __PEDIDO_HPP
#define __PEDIDO_HPP
#include "Cliente.hpp"
#include "Vendedor.hpp"
using namespace std;

class Pedido{
    private:
        Pedido* prox;
        string dataPedido;
        Vendedor Vendedor_infos;
        string Observacoes;
        int nm_pedido;
    public:
        Pedido();
        Pedido(string dataPedido, Vendedor Vendedor_infos, string Observacoes, int nm_pedido);

        void setdataPedido(string dataPedido);
        string getdataPedido();

        void setVendedor(Vendedor Vendedor_infos);
        Vendedor getVendedor();

        void setObservacoes(string Observacoes);
        string getObservacoes();

        void setnm_pedido(int nm_pedido);
        int getnm_pedido();

        void setprox(Pedido* prox);
        Pedido* getprox();

};
#endif