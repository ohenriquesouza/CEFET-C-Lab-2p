#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
using namespace std;

class Pessoa{
    private:
        string nome;
        string endereco;
        int telefone;
        string dataNasc;
        int CPF;
    public:
        Pessoa();
        Pessoa(string nome, string endereco, int telefone, string dataNasc, int CPF);

        void setnome(string nome);
        string getnome();

        void setendereco(string endereco);
        string getendereco();

        void settelefone(int telefone);
        int gettelefone();

        void setdataNasc(string dataNasc);
        string getdataNasc();

        void setCPF(int CPF);
        int getCPF();
};
#endif