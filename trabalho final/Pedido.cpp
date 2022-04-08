#include "Pedido.hpp"
Pedido::Pedido(){
    this->prox = NULL;
}
Pedido::Pedido(string dataPedido, Vendedor Vendedor_infos, string Observacoes, int nm_pedido){
    this->dataPedido=dataPedido;
    this->prox= NULL;
    this->Vendedor_infos=Vendedor_infos;
    this->Observacoes=Observacoes;
    this->nm_pedido=nm_pedido;
}

void Pedido::setdataPedido(string dataPedido){
    this->dataPedido=dataPedido;
}
string Pedido::getdataPedido(){
    return this->dataPedido;
}

void Pedido::setVendedor(Vendedor Vendedor_infos){
    this->Vendedor_infos=Vendedor_infos;
}
Vendedor Pedido::getVendedor(){
    return this->Vendedor_infos;
}

void Pedido::setnm_pedido(int nm_pedido){
    this->nm_pedido=nm_pedido;
}
int Pedido::getnm_pedido(){
    return this->nm_pedido;
}

void Pedido::setObservacoes(string Observacoes){
    this->Observacoes=Observacoes;
}
string Pedido::getObservacoes(){
    return this->Observacoes;
}

void Pedido::setprox(Pedido* prox){
    this->prox=prox;
}
Pedido* Pedido::getprox(){
    return this->prox;
}