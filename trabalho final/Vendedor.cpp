#include "Vendedor.hpp"
#include <iostream>

Vendedor::Vendedor(){
    this->prox =  NULL;
}
Vendedor::Vendedor(string nome, string endereco, int telefone, string dataNasc, int CPF, int matricula):Pessoa(nome, endereco, telefone, dataNasc, CPF){
    this->prox = NULL;
    this->matricula=matricula;
}
void Vendedor::setmatricula(int matricula){
    this->matricula=matricula;
}
int Vendedor::getmatricula(){
    return this->matricula;
}

void Vendedor::setprox(Vendedor* prox){
    this->prox=prox;
}

Vendedor* Vendedor::getprox(){
    return prox;
}

void Vendedor::setLPD(ListaPedido LPD){
    this->LPD=LPD;
}
ListaPedido Vendedor::getLPD(){
    return this->LPD;
}

void Vendedor::InserirPedidoNoVendedor(Pedido* PD){
    LPD.Inserir_final(*PD);
}
void Vendedor::MostrarPedidos(){
    LPD.MostrarTodos();
}

Vendedor* ListaVendedor::Obter_Vendedor(int matricula){
    Vendedor* c = Primeiro;
    while(c){
        if(c->getmatricula() == matricula){
            return c;
        }
        c = c->getprox();
    }
}