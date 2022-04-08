#include <iostream>
#include <vector>
#include "classes.hpp"
using namespace std;

void funcionario::setdepartamento(string departamento){
    this->departamento=departamento;
}
string funcionario::getdepartamento(){
    return this->departamento;
}

void funcionario::setsalario(double salario){
    this->salario=salario;
}
double funcionario::getsalario(){
    return this->salario;
}

void funcionario::setid(int id){
    this->id=id;
}
int funcionario::getid(){
    return this->id;
}
void funcionario::setdata_entrada(string data_entrada){
    this->data_entrada=data_entrada;
}
string funcionario::getdata_entrada(){
    return this->data_entrada;
}

void funcionario::setrg(string rg){
    this->rg=rg;
}
string funcionario::getrg(){
    return this->rg;
}

void funcionario::setaumento(double aumento){
    this->aumento=aumento;
}
double funcionario::getaumento(){
    return this->aumento;
}

void funcionario::settem_aumento(int tem_aumento){
    this->tem_aumento=tem_aumento;
}
int funcionario::gettem_aumento(){
    return this->tem_aumento;
}

void funcionario::recebeAumento(double salario, float aumento){
   float salario_aumento = salario + aumento;
   cout<<"\nSalario reajustado: R$"<<salario_aumento<<endl;
}

void funcionario::CalculaGanhoAnual(double salario){
    float total = salario * 13 + (salario / 3);
    cout<<"\nO ganho anual eh de: R$"<<total<<endl;
}

void funcionario::CalculaGanhoAnualAumento(double salario, float aumento){
    float total = ((salario + aumento) * 13) + ((salario + aumento) / 3);
    // cout<<salario<<endl;
    // cout<<aumento<<endl;
    cout<<"\nO ganho anual eh de: R$"<<total<<endl;
}

void funcionario::imprimir(int i){
    cout<<"\n||||DADOS DO FUNCIONARIO "<<i+1<<"||||";
    cout<<"\n-------------------------------------------";
    cout<<"\nIdentificador: "<<this->getid()<<endl;
    cout<<"\nDepartamento: "<<this->getdepartamento()<<endl;
    cout<<"\nNumero de RG: "<<this->getrg()<<endl;
    cout<<"\nSalario: R$"<<this->getsalario()<<endl;
    if(this->gettem_aumento() == 1){
        this->recebeAumento(this->getsalario(), this->getaumento());
        this->CalculaGanhoAnualAumento(this->getsalario(), this->getaumento());
    }
    else{
        this->CalculaGanhoAnual(this->getsalario());
    }
}