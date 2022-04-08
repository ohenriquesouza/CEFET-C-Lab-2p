#ifndef ListaPedido_HPP
#define ListaPedido_HPP
using namespace std;
class Pedido;
class ListaPedido{
    private: 
       Pedido* Primeiro;
       Pedido* Ultimo;
    public:
        ListaPedido();
        ListaPedido(Pedido Pedido_infos);
        bool Lista_vazia();
        void Inserir_inicio(Pedido Pedido_infos);
        void Inserir_final(Pedido Pedido_infos);
        void MostrarTodos();
        bool Pesquisa(int nm_pedido);
        Pedido* getPrimeiro();
        Pedido* getUltimo();


        Pedido* ObterAnt(int nm_pedido);
        Pedido* Remover_Pesquisa(int nm_pedido);

        Pedido* PesquisaPedido(int nm_pedido);
};
#endif