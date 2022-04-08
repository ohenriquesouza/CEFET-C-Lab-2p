#include "Pessoa.hpp"
Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome, string endereco, int telefone, string dataNasc, int CPF){
    this->nome=nome;
    this->endereco=endereco;
    this->telefone=telefone;
    this->dataNasc=dataNasc;
    this->CPF=CPF;
}

void Pessoa::setnome(string nome){
    this->nome=nome;
}
string Pessoa::getnome(){
    return this->nome;
}

void Pessoa::setendereco(string endereco){
    this->endereco=endereco;
}
string Pessoa::getendereco(){
    return this->endereco;
}

void Pessoa::settelefone(int telefone){
    this->telefone=telefone;
}
int Pessoa::gettelefone(){
    return this->telefone;
}

void Pessoa::setdataNasc(string dataNasc){
    this->dataNasc=dataNasc;
}
string Pessoa::getdataNasc(){
    return this->dataNasc;
}

void Pessoa::setCPF(int CPF){
    this->CPF=CPF;
}
int Pessoa::getCPF(){
    return this->CPF;
}
