#ifndef __FUNCIONARIO_HPP
#define __FUNCIONARIO_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class funcionario{
    private:
        string nome;
        string cpf;
        float salario;
        string dataDeAdmissao;
    public:
        funcionario();
        funcionario(string nome, string cpf, float salario, string dataDeAdmissao, float bonus);
        void setcpf(string cpf);
        string getcpf();
        void setsalario(float salario);
        float getsalario();
        void setdataDeAdmissao(string dataDeAdmissao);
        string getdataDeAdmissao();
        void setnome(string nome);
        string getnome();
}; 

#endif