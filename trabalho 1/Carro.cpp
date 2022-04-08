#include "Carro.hpp"
Carro::Carro(int numPortas, int capacidadePortaMalas, string motorizacao, string combustivel, int capacidadeTanque):Veiculo(motorizacao, combustivel, capacidadeTanque){
    this->numPortas=numPortas;
    this->capacidadePortaMalas=capacidadeTanque;
}
Carro::Carro(){

}
void Carro::setnumPortas(int numPortas){
    this->numPortas=numPortas;
}
int Carro::getnumPortas(){
    return this->numPortas;
}
void Carro::setcapacidadePortaMalas(int capacidadePortaMalas){
    this->capacidadePortaMalas=capacidadePortaMalas;
}
int Carro::getcapacidadePortaMalas(){
    return this->capacidadePortaMalas;
}
void Carro::setdono(string nome){
    this->dono=nome;
}
void Carro::setdono2(string nome2){
    this->dono2=nome2;
}
string Carro::getdono(){
    return this->dono;
}
string Carro::getdono2(){
    return this->dono2;
}