#ifndef __CADASTRO_HPP
#define __CADASTRO_HPP
#include <vector>
#include <string>
#include "Veiculo.hpp"
#include "Carro.hpp"
#include "Caminhao.hpp"
#include "Proprietario.hpp"
using namespace std;
class Cadastro{
    private:
        vector <Proprietario> vetDono;
        vector <Carro> vetCarro;
        vector <Caminhao> vetCaminhao;
    public:
        void setvetCarro(vector <Carro> vetCarro);
        void setvetCaminhao(vector <Caminhao> vetCaminhao);
        void setvetDono(vector <Proprietario> vetDono);
        void cadastraDono(Proprietario p);
        void cadastraCaminhao(Caminhao cm);
        void cadastraCarro(Carro ca);
        void imprimir();
        void pesquisaDono(string nome, Proprietario p);
};
#endif