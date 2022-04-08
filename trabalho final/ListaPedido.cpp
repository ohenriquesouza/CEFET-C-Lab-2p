#include <iostream>
#include "Pedido.hpp"
#include "ListaPedido.hpp"
using namespace std;
ListaPedido::ListaPedido(){
    Primeiro=NULL;
    Ultimo=NULL;
}
ListaPedido::ListaPedido(Pedido Pedido_infos){
    Primeiro = new Pedido(Pedido_infos);
    Ultimo = Primeiro;
}

bool ListaPedido::Lista_vazia(){
    return (Primeiro == NULL);
}

void ListaPedido::Inserir_inicio(Pedido Pedido_infos){
    Pedido* novo_no = new Pedido(Pedido_infos.getdataPedido(), Pedido_infos.getVendedor(), Pedido_infos.getObservacoes(), Pedido_infos.getnm_pedido());
    if(Lista_vazia()){
        Primeiro = novo_no;
        Ultimo = novo_no;
    }else{
        novo_no->setprox(Primeiro);
        Primeiro = novo_no;
    }
}

void ListaPedido::Inserir_final(Pedido Pedido_infos){
    Pedido* novo_no = new Pedido(Pedido_infos.getdataPedido(), Pedido_infos.getVendedor(), Pedido_infos.getObservacoes(), Pedido_infos.getnm_pedido());
    if(Lista_vazia()){
        Primeiro = novo_no;
        Ultimo = novo_no;
    }else{
        Ultimo->setprox(novo_no);
        Ultimo = novo_no;
    }
}

bool ListaPedido::Pesquisa(int nm_pedido){
    Pedido* c = Primeiro;
    while(c){
        if(c->getnm_pedido() == nm_pedido){
            return true;
        }
        c = c->getprox();
    }
    cout<<"\nO numero do pedido nao foi encontrado.\n";
    return false;
}

void ListaPedido::MostrarTodos(){
    Pedido* c = Primeiro;
    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui elementos.\n";
    }else{
        while(c){
            cout<<"/////////////////\n";
            cout<<"Data do pedido: "<<c->getdataPedido()<<endl;
            cout<<"Observacoes: "<<c->getObservacoes()<<endl;
            cout<<"Numero do pedido: "<<c->getnm_pedido()<<endl;
            c = c->getprox();
        }
        cout<<endl;
    }
}

Pedido* ListaPedido::getPrimeiro(){
    return Primeiro;
}
Pedido* ListaPedido::getUltimo(){
    return Ultimo;
}

Pedido* ListaPedido::PesquisaPedido(int nm_pedido){
    Pedido* c = Primeiro;
    while(c){
        if(c->getnm_pedido() == nm_pedido){
            return c;
        }
        c = c->getprox();
    }
}

Pedido* ListaPedido::ObterAnt(int nm_pedido){
   Pedido* aux;

    aux=this->Primeiro;

    if(aux == NULL || aux->getnm_pedido() == nm_pedido){

        return aux;
    }
    while(aux->getprox() != NULL && nm_pedido != aux->getprox()->getnm_pedido()){
        aux =  aux->getprox();
    }
    return aux;
}

Pedido* ListaPedido::Remover_Pesquisa(int nm_pedido){
   Pedido* aux;
   Pedido* aux2;

    if(!this->Lista_vazia()){

        aux=this->ObterAnt(nm_pedido);

        if(aux== this->Primeiro && nm_pedido == this->Primeiro->getnm_pedido()){
            Primeiro = Primeiro->getprox();
            delete aux;
        }
        else{
            aux2 = aux->getprox();
            aux->setprox(aux2->getprox());
            delete aux2;
        }
    }
}