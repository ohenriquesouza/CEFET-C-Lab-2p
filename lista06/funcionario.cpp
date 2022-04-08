#include "funcionario.hpp"
#include "gerente.hpp"
#include "caixaAgencia.hpp"
#include <vector>
funcionario::funcionario(){
    this->nome="";
    this->cpf="";
    this->salario=0;
    this->dataDeAdmissao="";
}
funcionario::funcionario(string nome, string cpf, float salario, string dataDeAdmissao, float bonus){
    this->nome=nome;
    this->cpf=cpf;
    this->salario=salario;
    this->dataDeAdmissao=dataDeAdmissao;
}
void funcionario::setnome(string nome){
    this->nome=nome;
}
string funcionario::getnome(){
    return this->nome;
}
void funcionario::setcpf(string cpf){
    this->cpf=cpf;
}
string funcionario::getcpf(){
    return this->cpf;
}
void funcionario::setsalario(float salario){
    this->salario=salario;
}
float funcionario::getsalario(){
    return this->salario;
}
void funcionario::setdataDeAdmissao(string dataDeAdmissao){
    this->dataDeAdmissao=dataDeAdmissao;
}
string funcionario::getdataDeAdmissao(){
    return dataDeAdmissao;
}