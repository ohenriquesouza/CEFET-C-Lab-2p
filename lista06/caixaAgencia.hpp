#include "funcionario.hpp"
#include <vector>
#ifndef __CAIXAAGENCIA_HPP
#define __CAIXAAGENCIA_HPP
using namespace std;

class caixaAgencia:public funcionario{
    private:
        string nivel;
    public:
        void setnivel(string nivel);
        string getnivel();
};


#endif