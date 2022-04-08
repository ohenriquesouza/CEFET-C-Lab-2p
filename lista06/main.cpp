#include "funcionario.hpp"
#include "caixaAgencia.hpp"
#include "empresa.hpp"
#include "gerente.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <caixaAgencia> vet_caixas;
    vector <gerente> vet_gerente;
    empresa e;
    funcionario f;
    caixaAgencia c;
    gerente g;
    string nivel, funcao, nome_caixa, cpf_caixa, dataDeAdmissao_c;
    string nome_gerente, cpf_gerente, dataDeAdmissao_g;
    int cont_g=0, cont_c=0,novo_bonus;
    float salario_caixa, salario_gerente, bonus_caixa, bonus_gerente;
    char escolha, opcao;
    do{ 
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Alterar bonus para o gerente.";
        cout<<"\n2- Alterar bonus para o caixa.";
        cout<<"\n3- Cadastrar caixa.";
        cout<<"\n4- Remover caixa.";
        cout<<"\n5- Cadastrar gerente.";
        cout<<"\n6- Remover gerente.\n";
        cin>>escolha;
        if(escolha=='1'){
            if(cont_g>0){
                cout<<"\nSelecione o que deseja: ";
                cout<<"\n1- Aumentar bonus;";
                cout<<"\n2- Remover bonus;";
                cin>>opcao;
                if(opcao=='1'){
                    e.cadastraBonus_g(novo_bonus, cpf_gerente, g);
                }
                if(opcao =='2'){
                    e.removerBonus_g(cpf_gerente, g);
                }
            }else{
                cout<<"\nImpossivel, nenhum gerente cadastrado.";
            }  
        }
        if(escolha=='2'){
            if(cont_c>0){
                cout<<"\nSelecione o que deseja: ";
                cout<<"\n1- Aumentar bonus;";
                cout<<"\n2- Remover bonus;";
                cin>>opcao;
                if(opcao=='1'){
                    e.cadastraBonus_c(novo_bonus, cpf_caixa, c);
                }
                if(opcao =='2'){
                    e.removerBonus_c(cpf_caixa, c);
                }  
            }else{
                cout<<"\nImpossivel, nenhum caixa cadastrado.";
            }     
        }
        if(escolha=='3'){
            cont_c++;
            e.cadastrarCaixa(nome_caixa, cpf_caixa, salario_caixa, dataDeAdmissao_c, bonus_caixa, nivel, c);
            vet_caixas.push_back(c);
        }
        if(escolha=='4'){
            if(cont_c>0){
                e.removerCaixa(cpf_caixa, vet_caixas);
            }else{
                cout<<"\nImpossivel, nenhum caixa cadastrado.";
            }  
        }
        if(escolha=='5'){
            cont_g++;
            e.cadastrarGerente(nome_gerente, cpf_gerente, salario_gerente, dataDeAdmissao_g, funcao, g);
            vet_gerente.push_back(g);
        }
        if(escolha=='6'){
            if(cont_g>0){
                e.removerGerente(cpf_gerente, vet_gerente);
            }else{
                cout<<"\nImpossivel, nenhum gerente cadastrado.";
            }
        }
    }while(escolha != 7);
}