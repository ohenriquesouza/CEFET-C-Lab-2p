#include "Cliente.hpp"
#include <iostream>
Cliente::Cliente(){
    this->prox= NULL;
}
Cliente::Cliente(string nome, string endereco, int telefone, string dataNasc, int CPF, double limiteCredito, Pessoa contato):Pessoa(nome, endereco, telefone, dataNasc, CPF){
    this->prox = NULL;
    this->limiteCredito=limiteCredito;
    this->contato=contato;
}

void Cliente::setprox(Cliente* prox){
    this->prox=prox;
}

Cliente* Cliente::getprox(){
    return prox;
}

void Cliente::setlimiteCredito(double limiteCredito){
    this->limiteCredito=limiteCredito;
}
double Cliente::getlimiteCredito(){
    return this->limiteCredito;
}

void Cliente::setcontato(Pessoa contato){
    this->contato=contato;
}
Pessoa Cliente::getcontato(){
    return this->contato;
}

void Cliente::setLPD(ListaPedido LPD){
    this->LPD=LPD;
}
ListaPedido Cliente::getLPD(){
    return this->LPD;
}

void Cliente::InserirPedidoNoCliente(Pedido* PD){
    LPD.Inserir_final(*PD);
}
void Cliente::MostrarPedidos(){
    LPD.MostrarTodos();
}