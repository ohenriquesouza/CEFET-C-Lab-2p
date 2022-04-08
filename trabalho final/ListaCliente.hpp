#ifndef ListaCLIENTE_HPP
#define ListaCLIENTE_HPP
#include "Cliente.hpp"
using namespace std;
class ListaCliente{
    private:
        Cliente cliente;
        ListaPedido LPD;
        Cliente* Primeiro;
        Cliente* Ultimo;
    public:
        ListaCliente();
        ListaCliente(Cliente Cliente_infos);
        bool Lista_vazia();
        void Insierir_inicio(Cliente Cliente_infos);
        void Insierir_final(Cliente Cliente_infos);
        void MostrarTodos();
        bool Pesquisa(int CPF);

        void setcliente(Cliente cliente);
        Cliente getcliente();

        Cliente* Remover_Pesquisa(int CPF);
        Cliente* getPrimeiro();
        Cliente* getUltimo();
        Cliente* Obter_Ant(int CPF);
        Cliente* Obter_Cliente(int CPF);
};
#endif