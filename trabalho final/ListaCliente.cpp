#include <iostream>
#include "ListaCliente.hpp"
using namespace std;
ListaCliente::ListaCliente(){
    Primeiro=NULL;
    Ultimo=NULL;
}
ListaCliente::ListaCliente(Cliente Cliente_infos){
    Primeiro = new Cliente(Cliente_infos);
    Ultimo = Primeiro;
}
bool ListaCliente::Lista_vazia(){
    return (Primeiro==NULL);
}
void ListaCliente::Insierir_inicio(Cliente Cliente_infos){
    Cliente* novo_no = new Cliente(Cliente_infos.getnome(), Cliente_infos.getendereco(), Cliente_infos.gettelefone(), Cliente_infos.getdataNasc(), Cliente_infos.getCPF(), Cliente_infos.getlimiteCredito(), Cliente_infos.getcontato());
    if(Lista_vazia()){
        Primeiro = novo_no;
        Ultimo = novo_no;
    }else{
        novo_no->setprox(Primeiro);
        Ultimo = novo_no;
    }  
}

void ListaCliente::Insierir_final(Cliente Cliente_infos){
     Cliente* novo_no = new Cliente(Cliente_infos.getnome(), Cliente_infos.getendereco(), Cliente_infos.gettelefone(), Cliente_infos.getdataNasc(), Cliente_infos.getCPF(), Cliente_infos.getlimiteCredito(), Cliente_infos.getcontato());
     if(Lista_vazia()){
         Primeiro = novo_no;
         Ultimo = novo_no;
     }else{
         Ultimo->setprox(novo_no);
         Ultimo = novo_no;
     }
}

bool ListaCliente::Pesquisa(int CPF){
    Cliente* c = Primeiro;
    while(c){
        if(c->getCPF() == CPF){
            return true;
        }
        c = c->getprox();
    }
    cout<<"\nO CPF pesquisado nao foi encontrado.\n";
    return false;
}

void ListaCliente::MostrarTodos(){
    Cliente* c = Primeiro;
    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui elementos.\n";
    }else{
        while(c){
            cout<<"\n/////////////////\n";
            cout<<"Nome: "<<c->getnome()<<endl;
            cout<<"Endereco: "<<c->getendereco()<<endl;
            cout<<"Telefone: "<<c->gettelefone()<<endl;
            cout<<"Data de nascimento: "<<c->getdataNasc()<<endl;
            cout<<"CPF: "<<c->getCPF()<<endl;
            cout<<"Limite de credito: "<<c->getlimiteCredito()<<endl;
            cout<<"|---///CONTATO///---|"<<endl;
            cout<<"Nome: "<<c->getcontato().getnome()<<endl;
            cout<<"Endereco: "<<c->getcontato().getendereco()<<endl;
            cout<<"Data de nascimento: "<<c->getcontato().getdataNasc()<<endl;
            cout<<"CPF: "<<c->getcontato().getCPF()<<endl;
            cout<<"Telefone: "<<c->getcontato().gettelefone()<<endl;
            cout<<"|-------------------|"<<endl;
            cout<<endl;
            c = c->getprox();
        }
        cout<<endl;
    }
}

Cliente* ListaCliente::getPrimeiro(){
    return Primeiro;
}

Cliente* ListaCliente::getUltimo(){
    return Ultimo;
}

Cliente* ListaCliente::Obter_Ant(int CPF){
    Cliente* aux;
    aux = this->Primeiro;
    if(aux == NULL || aux->getCPF() == CPF){
        return aux;
    }
    while(aux->getprox() != NULL && CPF != aux->getprox()->getCPF()){
        aux = aux->getprox();
    }
    return aux;
}

Cliente* ListaCliente::Remover_Pesquisa(int CPF){
   Cliente* aux;
   Cliente* aux2;

    if(!this->Lista_vazia()){

        aux=this->Obter_Ant(CPF);

        if(aux== this->Primeiro && CPF == this->Primeiro->getCPF()){
            Primeiro = Primeiro->getprox();
            delete aux;
        }
        else{
            aux2 = aux->getprox();
            aux->setprox(aux2->getprox()) ;
            delete aux2;
        }
    }
}

Cliente* ListaCliente::Obter_Cliente(int CPF){
    Cliente* c = Primeiro;
    while(c){
        if(c->getCPF() == CPF){
            return c;
        }
        c = c->getprox();
    }
}

void ListaCliente::setcliente(Cliente cliente){
    this->cliente=cliente;
}
Cliente ListaCliente::getcliente(){
    return this->cliente;
}