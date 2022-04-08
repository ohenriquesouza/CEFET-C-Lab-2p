#include "gerente.hpp"
#include "funcionario.hpp"
#include <vector>
void gerente::setfuncao(string funcao){
    this->funcao=funcao;
}
string gerente::getfuncao(){
    return this->funcao;
}