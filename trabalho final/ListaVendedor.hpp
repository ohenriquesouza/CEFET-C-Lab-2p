#ifndef ListaVENDEDOR_HPP
#define ListaVENDEDOR_HPP
#include "Vendedor.hpp"
using namespace std;
class ListaVendedor{
    private:
        Vendedor* Primeiro;
        Vendedor* Ultimo;
    public:
        ListaVendedor();
        ListaVendedor(Vendedor Vendedor_infos);
        bool Lista_vazia();
        void Insierir_inicio(Vendedor Vendedor_infos);
        void Insierir_final(Vendedor Vendedor_infos);
        void MostrarTodos();
        bool Pesquisa(int matricula);
        
        Vendedor* getPrimeiro();
        Vendedor* getUltimo();
        Vendedor* PesquisaMatricula(int matricula);
        Vendedor* Obter_Ant(int matricula);
        Vendedor* Remover_Pesquisa(int matricula);

        Vendedor* Obter_Vendedor(int matricula);
};
#endif