#include <iostream>
#include "infos.hpp"
using namespace std;

void infos::setnomeCarro(string nomeCarro){
    this->nomeCarro = nomeCarro;
}
string infos::getnomeCarro(){
    return this->nomeCarro;
}

void infos::setfabricante(string fabricante){
    this->fabricante = fabricante;
}
string infos::getfabricante(){
    return  this->fabricante;
}

void infos::setnomeMotorista(string nomeMotorista){
    this->nomeMotorista = nomeMotorista;
}
string infos::getnomeMotorista(){
    return  this->nomeMotorista;
}

void infos::setmotor_forca(string motor_forca){
    this->motor_forca = motor_forca;
}
string infos::getmotor_forca(){
    return this->motor_forca;
}

void infos::setkm_inicial(int km_inicial){
    this->km_inicial = km_inicial;
}
int infos::getkm_inicial(){
    return  this->km_inicial;
}
void infos::setkm_final(int km_final){
    this->km_final = km_final;
}
int infos::getkm_final(){
    return  this->km_final;
}

float infos::calculo(){
    float calculo;
    calculo = (this->km_final - this->km_inicial) * 3.75;
    return  calculo;
}

void infos::imprimir(){
    cout<< "\n\t---Informacoes coletadas---\n";
    cout<< "\nFabricante do carro: "<<getfabricante()<<endl;
    cout<< "Modelo do carro: "<<getnomeCarro()<<endl;
    cout<< "Motorizacao do carro: "<<getmotor_forca()<<endl;
    cout<< "Motorista: "<<getnomeMotorista()<<endl;
}