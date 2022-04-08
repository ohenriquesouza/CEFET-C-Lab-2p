#ifndef __CAMINHAO_HPP
#define __CAMINHAO_HPP
#include <vector>
#include "Veiculo.hpp"
#include "Proprietario.hpp"
using namespace std;
class Caminhao:public Veiculo{
    private:
        float cargaSuportada;
        string dono;
        string dono2;
        int numEixos;
    public:
        Caminhao();
        Caminhao(int numEixos, float cargaSuportada, string motorizacao, string combustivel, int capacidadeTanque);
        void setnumEixos(int numEixos);
        int getnumEixos();
        void setcargaSuportada(float cargaSuportada);
        float getcargaSuportada();
        void setdono(string nome);
        string getdono();
        void setdono2(string nome2);
        string getdono2();
};
#endif