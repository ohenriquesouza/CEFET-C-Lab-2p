#ifndef LISTA_HPP
#define LISTA_HPP
#include "No.hpp"
using namespace std;
class Lista{
    private: 
        No* Primeiro;
        No* Ultimo;
    public:
        Lista();
        Lista(int v);
        virtual ~Lista();
        
        bool Lista_vazia();
        
        void Inserir_inicio(int v);
        void Inserir_final(int v);

        void MostrarTodos();
        
        int Size();
        
        bool Existe(int v);
        
        No* Remover_Final();

        int Remover_Inicio();
};
#endif