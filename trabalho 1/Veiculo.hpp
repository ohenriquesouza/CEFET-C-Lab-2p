#ifndef __VEICULO_HPP
#define __VEICULO_HPP
#include <string>
using namespace std;
class Veiculo{
    private:
        string motorizacao;
        int capacidadeTanque;
        string combustivel;
    public:
        Veiculo();
        Veiculo(string motor, string combu, int capa);
        void setmotorizacao(string motorizacao);
        string getmotorizacao();
        void setcapacidadeTanque(int capacidadeTanque);
        int getcapacidadeTanque();
        void setcombustivel(string combustivel);
        string getcombustivel();
};
#endif