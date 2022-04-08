#include "empresa.hpp"
#include "funcionario.hpp"
#include <iostream>
#include <vector>
void empresa::setbonus(float bonus){
    this->bonus=bonus;
}
float empresa::getbonus(){
    return this->bonus;
}
void empresa::setvet_caixas(vector <caixaAgencia> vet_caixas){
    this->vet_caixas=vet_caixas;
}
void empresa::setvet_gerente(vector <gerente> vet_gerente){
    this->vet_gerente=vet_gerente;
}
void empresa::cadastraBonus_g(float novo_bonus, string cpf_gerente, gerente g){
    novo_bonus=0;
    cout<<"\n--AUMENTAR BONUS GERENTE--\n";
    cout<<"Insira o cpf: ";
    cin.ignore();
    getline(cin, cpf_gerente);
    for(auto it = vet_gerente.begin(); it != vet_gerente.end(); it++){
        if(cpf_gerente== it->getcpf()){
            cout<<"Insira quanto de bonus deseja adicionar: ";
            cin>>novo_bonus;   
        }
    }
    this->setbonus(getbonus()+novo_bonus);
    cout<<"\nNovo bonus = "<<this->getbonus()<<"R$."<<endl;
}
void empresa::cadastraBonus_c(float novo_bonus, string cpf_caixa, caixaAgencia c){
    novo_bonus=0;
    cout<<"\n--AUMENTAR BONUS Caixa--\n";
    cout<<"Insira o cpf: ";
    cin.ignore();
    getline(cin,cpf_caixa);
    for(auto it = vet_caixas.begin(); it != vet_caixas.end(); ++it){
        if(cpf_caixa== it->getcpf()){
            cout<<"Insira quanto de bonus deseja adicionar: ";
            cin>>novo_bonus;   
        }
    }
    this->setbonus(getbonus()+novo_bonus);
    cout<<"\nNovo bonus = "<<this->getbonus()<<"R$."<<endl;
}
void empresa::removerBonus_g(string cpf_gerente, gerente g){
    cout<<"\n--REMOVER BONUS GERENTE--\n";
    cout<<"Insira o cpf: ";
    cin>>cpf_gerente;
    for(auto it = vet_gerente.begin(); it != vet_gerente.end(); ++it){
        if(cpf_gerente== it->getcpf()){
            this->setbonus(0); 
            cout<<"\nBonus removido.";
        }
    }
}
void empresa::removerBonus_c(string cpf_caixa, caixaAgencia c){
    cout<<"\n--REMOVER BONUS CAIXA--\n";
    cout<<"Insira o cpf: ";
    cin>>cpf_caixa;
    for(auto it = vet_caixas.begin(); it != vet_caixas.end(); ++it){
        if(cpf_caixa== it->getcpf()){
            this->setbonus(0); 
            cout<<"\nBonus removido.";
        }
    }
}
gerente empresa::cadastrarGerente(string nome, string cpf, float salario, string dataDeAdmissao, string funcao, gerente g){
    cout<<"\n--CADASTRAR gerente--";
    cout<<"\nNome: ";
    cin.ignore();
    getline(cin,nome);
    g.setnome(nome);
    cout<<"CPF: ";
    getline(cin, cpf);
    g.setcpf(cpf);
    cout<<"Salario: ";
    cin>>salario;
    g.setsalario(salario);
    cout<<"Data de admissao: ";
    cin.ignore();
    getline(cin, dataDeAdmissao);
    g.setdataDeAdmissao(dataDeAdmissao);
    cout<<"Funcao: ";
    getline(cin, funcao);
    g.setfuncao(funcao);
    vet_gerente.push_back(g);
}
void empresa::removerGerente(string cpf_gerente, vector <gerente> vet_gerente){
    cout<<"\n--REMOVER GERENTE--";
    cout<<"\nInforme o cpf: ";
    cin.ignore();
    getline(cin, cpf_gerente);
    vector<gerente>::iterator it;
    for(auto it = vet_gerente.begin(); it != vet_gerente.end(); it++){
        if(cpf_gerente== it->getcpf()){
            vet_gerente.erase(it);
        }else{
            cout<<"\nO cpf nao esta cadastrado.";
        }
    }
}
void empresa::removerCaixa(string cpf_caixa, vector <caixaAgencia> vet_caixas){
    cout<<"\n--REMOVER CAIXA--";
    cout<<"\nInforme o cpf: ";
    cin.ignore();
    getline(cin, cpf_caixa);
    vector<caixaAgencia>::iterator it;
    for(auto it = vet_caixas.begin(); it != vet_caixas.end(); it++){
        if(cpf_caixa == it->getcpf()){
            vet_caixas.erase(it);
        }else{
            cout<<"\nO cpf nao esta cadastrado.";
        }
    }
}
caixaAgencia empresa::cadastrarCaixa(string nome_caixa, string cpf_caixa, float salario_caixa, string dataDeAdmissao_c, float bonus_caixa, string nivel, caixaAgencia c){
    cout<<"\n--CADASTRAR CAIXA--";
    cout<<"\nNome: ";
    cin.ignore();
    getline(cin,nome_caixa);
    c.setnome(nome_caixa);
    cout<<"CPF: ";
    getline(cin, cpf_caixa);
    c.setcpf(cpf_caixa);
    cout<<"Salario: ";
    cin>>salario_caixa;
    c.setsalario(salario_caixa);
    cout<<"Data de admissao: ";
    cin.ignore();
    getline(cin, dataDeAdmissao_c);
    c.setdataDeAdmissao(dataDeAdmissao_c);
    cout<<"Nivel: ";
    getline(cin, nivel);
    c.setnivel(nivel);
    vet_caixas.push_back(c);
}