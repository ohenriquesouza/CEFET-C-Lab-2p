#include "funcionario.hpp"
#include <vector>
#ifndef __GERENTE_HPP
#define __GERENTE_HPP
#include <string>
using namespace std;

class gerente:public funcionario{
    private:
        string funcao;
    public:
        void setfuncao(string funcao);
        string getfuncao();
};
#endif