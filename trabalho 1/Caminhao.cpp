#include "Caminhao.hpp"
Caminhao::Caminhao(int numEixos, float cargaSuportada, string motorizacao, string combustivel, int capacidadeTanque):Veiculo(motorizacao, combustivel, capacidadeTanque){
    this->numEixos=numEixos;
    this->cargaSuportada=capacidadeTanque;
}
Caminhao::Caminhao(){

}
void Caminhao::setnumEixos(int numEixos){
    this->numEixos=numEixos;
}
int Caminhao::getnumEixos(){
    return this->numEixos;
}
void Caminhao::setcargaSuportada(float cargaSuportada){
    this->cargaSuportada=cargaSuportada;
}
float Caminhao::getcargaSuportada(){
    return this->cargaSuportada;
}
void Caminhao::setdono(string nome){
    this->dono=nome;
}
void Caminhao::setdono2(string nome2){
    this->dono2=nome2;
}
string Caminhao::getdono(){
    return this->dono;
}
string Caminhao::getdono2(){
    return this->dono2;
}