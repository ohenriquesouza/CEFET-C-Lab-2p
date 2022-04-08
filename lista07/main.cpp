#include <iostream>
#include "Lista.hpp"
#include "Lista.cpp"
#include "No.hpp"
#include "No.cpp"

Lista concatena(Lista* L1, Lista* L2){
    while(!L2->Lista_vazia()){
        int aux;
        aux=L2->Remover_Inicio();
        L1->Inserir_final(aux);
    }
    return *L1;
}

int main(){
    Lista L1;
    Lista L2;
    L1.Inserir_inicio(10);
    L1.Inserir_final(20);
    L2.Inserir_inicio(30);
    L2.Inserir_final(40);
    concatena(&L1, &L2);

    L1.MostrarTodos();
}