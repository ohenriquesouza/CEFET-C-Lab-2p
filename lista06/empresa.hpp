#ifndef __EMPRESA_HPP
#define __EMPRESA_HPP
#include <iostream>
#include "funcionario.hpp"
#include "caixaAgencia.hpp"
#include "gerente.hpp"
#include <vector>
using namespace std;

class empresa{
    private:
        vector <caixaAgencia> vet_caixas;
        vector <gerente> vet_gerente;
        float bonus;
    public: 
        void setbonus(float bonus);
        float getbonus();
        void setvet_caixas(vector <caixaAgencia> vet_caixas);
        void setvet_gerente(vector <gerente> vet_gerente);
        void cadastraBonus_g(float novo_bonus, string cpf_gerente, gerente g);
        void cadastraBonus_c(float novo_bonus, string cpf_caixa, caixaAgencia c);
        void removerBonus_g(string cpf_gerente, gerente g);
        void removerBonus_c(string cpf_caixa, caixaAgencia c);
        gerente cadastrarGerente(string nome, string cpf, float salario, string dataDeAdmissao, string funcao, gerente g);
        void removerGerente(string cpf_gerente, vector <gerente> vet_gerente);
        caixaAgencia cadastrarCaixa(string nome_caixa, string cpf_caixa, float salario_caixa, string dataDeAdmissao_c, float bonus_caixa, string nivel, caixaAgencia c);
        void removerCaixa(string cpf_caixa, vector <caixaAgencia> vet_caixas);
};
#endif