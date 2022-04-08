#include <iostream>
#include "ListaVendedor.hpp"
using namespace std;
ListaVendedor::ListaVendedor(){
    Primeiro=NULL;
    Ultimo=NULL;
}
ListaVendedor::ListaVendedor(Vendedor Vendedor_infos){
    Primeiro = new Vendedor(Vendedor_infos);
    Ultimo = Primeiro;
}
bool ListaVendedor::Lista_vazia(){
    return (Primeiro==NULL);
}
void ListaVendedor::Insierir_inicio(Vendedor Vendedor_infos){
    Vendedor* novo_no = new Vendedor(Vendedor_infos.getnome(), Vendedor_infos.getendereco(), Vendedor_infos.gettelefone(), Vendedor_infos.getdataNasc(), Vendedor_infos.getCPF(), Vendedor_infos.getmatricula());
    if(Lista_vazia()){
        Primeiro = novo_no;
        Ultimo = novo_no;
    }else{
        novo_no->setprox(Primeiro);
        Ultimo = novo_no;
    }  
}

void ListaVendedor::Insierir_final(Vendedor Vendedor_infos){
     Vendedor* novo_no = new Vendedor(Vendedor_infos.getnome(), Vendedor_infos.getendereco(), Vendedor_infos.gettelefone(), Vendedor_infos.getdataNasc(), Vendedor_infos.getCPF(), Vendedor_infos.getmatricula());
     if(Lista_vazia()){
         Primeiro = novo_no;
         Ultimo = novo_no;
     }else{
         Ultimo->setprox(novo_no);
         Ultimo = novo_no;
     }
}

bool ListaVendedor::Pesquisa(int matricula){
    Vendedor* c = Primeiro;
    while(c){
        if(c->getmatricula() == matricula){
            return true;
        }
        c = c->getprox();
    }
    cout<<"\nA matricula pesquisada nao foi encontrada.\n";
    return false;
}

void ListaVendedor::MostrarTodos(){
    Vendedor* c = Primeiro;
    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui elementos.\n";
    }else{
        while(c){
            cout<<"/////////////////\n";
            cout<<"Nome: "<<c->getnome()<<endl;
            cout<<"Endereco: "<<c->getendereco()<<endl;
            cout<<"Telefone: "<<c->gettelefone()<<endl;
            cout<<"Data de nascimento: "<<c->getdataNasc()<<endl;
            cout<<"CPF: "<<c->getCPF()<<endl;
            cout<<"Matricula: "<<c->getmatricula()<<endl;
            c = c->getprox();
        }
        cout<<endl;
    }
}

Vendedor* ListaVendedor::getPrimeiro(){
    return Primeiro;
}

Vendedor* ListaVendedor::getUltimo(){
    return Ultimo;
}

Vendedor* ListaVendedor::Obter_Ant(int matricula){
    Vendedor* aux;
    aux = this->Primeiro;
    if(aux == NULL || aux->getmatricula() == matricula){
        return aux;
    }
    while(aux->getprox() != NULL && matricula != aux->getprox()->getmatricula()){
        aux = aux->getprox();
    }
    return aux;
}

Vendedor* ListaVendedor::Remover_Pesquisa(int matricula){
   Vendedor* aux;
   Vendedor* aux2;

    if(!this->Lista_vazia()){

        aux=this->Obter_Ant(matricula);

        if(aux== this->Primeiro && matricula == this->Primeiro->getmatricula()){
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