#include "Veiculo.hpp"
Veiculo::Veiculo(string motorizacao, string combustivel, int capacidadeTanque){
    this->motorizacao=motorizacao;
    this->combustivel=combustivel;
    this->capacidadeTanque=capacidadeTanque;
}
Veiculo::Veiculo(){
    
}
void Veiculo::setmotorizacao(string motorizacao){
    this->motorizacao=motorizacao;
}
string Veiculo::getmotorizacao(){
    return this->motorizacao;
}
void Veiculo::setcapacidadeTanque(int capacidadeTanque){
    this->capacidadeTanque=capacidadeTanque;
}
int Veiculo::getcapacidadeTanque(){
    return this->capacidadeTanque;
}
void Veiculo::setcombustivel(string combustivel){
    this->combustivel=combustivel;
}
string Veiculo::getcombustivel(){
    return this->combustivel;
}