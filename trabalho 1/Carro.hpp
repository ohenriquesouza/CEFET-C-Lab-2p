#ifndef __CARRO_HPP
#define __CARRO_HPP
#include <vector>
#include "Veiculo.hpp"
using namespace std;
class Carro:public Veiculo{
    private:
        string dono;
        string dono2;
        int numPortas;
        int capacidadePortaMalas;
    public:
        Carro();
        Carro(int numPortas, int capacidadePortaMalas, string motorizacao, string combustivel, int capacidadeTanque);
        void setnumPortas(int numPortas);
        int getnumPortas();
        void setcapacidadePortaMalas(int capacidadePortaMalas);
        int getcapacidadePortaMalas();
        void setdono(string nome);
        string getdono();
        void setdono2(string nome2);
        string getdono2();
};
#endif