#include <iostream>
#include "No.hpp"
#include "Lista.hpp"
Lista::Lista(){
    Primeiro=NULL;
    Ultimo=NULL;
}
Lista::Lista(int v){
    Primeiro= new No(v);
    Ultimo = Primeiro;
}
Lista::~Lista(){
    delete Primeiro;
}
bool Lista::Lista_vazia(){
    return (Primeiro==NULL);
}
void Lista::Inserir_inicio(int v){
    No* novo_no = new No(v);
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        novo_no->setProx(Primeiro);
        Primeiro= novo_no;
    }
}
void Lista::Inserir_final(int v){
    No* novo_no= new No(v);
    if(Lista_vazia()){
        Primeiro= novo_no;
        Ultimo= novo_no;
    }else{
        Ultimo->setProx(novo_no);
        Ultimo= novo_no;
    }
}
int Lista::Size(){
    if(Lista_vazia()){
        return 0;
    }
    No* c= Primeiro;
    int tam=0;
    do{
        c=c->ObterProx();
        tam++;
    }while(c);
    return tam;
}
bool Lista::Existe(int v){
    No* c= Primeiro;
    while(c){
        if(c->ObterValor() == v){
            return true;
        }
        c = c->ObterProx();
    }
    return false;
}
int Lista::Remover_Inicio(){
    if(!Lista_vazia()){
        No* removido;
        int aux;
        removido = Primeiro;
        aux= Primeiro->ObterValor();
        Primeiro=Primeiro->ObterProx();
        delete removido;
        return aux;
    }
}

No* Lista::Remover_Final(){
    if(!Lista_vazia()){
        No* aux;
        if(Primeiro->ObterProx()==NULL){
            aux=Primeiro;
            Primeiro = NULL;
        }
        else if(Primeiro->ObterProx()->ObterProx()==NULL){
            aux=Primeiro->ObterProx();
            Primeiro->setProx(NULL);
        }
        else
		{
			No* ant_ant = Primeiro;
			No* ant = Primeiro->ObterProx();
			No* corrente = Primeiro->ObterProx()->ObterProx();

			while(corrente)
			{
				No* aux = ant;
				ant = corrente;
				ant_ant = aux;
				corrente = corrente->ObterProx();
			}
            aux= ant_ant->ObterProx();
			delete ant_ant->ObterProx(); 
			ant_ant->setProx(NULL); 
			Ultimo = ant_ant;
		}
        return aux;
    }
}
void Lista::MostrarTodos(){
    cout<<"\nConcatenando..."<<endl;
    No* c= Primeiro;

    if(Lista_vazia()){
        cout<<"\nImpossivel, a lista nao possui elementos!";
    }else{
        while(c){
            cout<<c->ObterValor()<<endl;
            c= c->ObterProx();
        }
        cout<< endl;
    }
}