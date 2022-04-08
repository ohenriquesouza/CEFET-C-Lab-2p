#include "consultorio.hpp"
#include <iostream>
using namespace std;

consultorio::consultorio(){}
void consultorio::setnome(string nome){
    this->nome=nome;
}
string consultorio::getnome(){
    return this->nome;
}
void consultorio::setendereco(string endereco){
    this->endereco=endereco;
}
string consultorio::getendereco(){
    return this->endereco;
}
void consultorio::settelefone(string telefone){
    this->telefone=telefone;
}
string consultorio::gettelefone(){
    return this->telefone;
}
void consultorio::setmedico(paciente medico){
    this->medico=medico;
}
paciente consultorio::getmedico(){
    return this->medico;
}
void consultorio::setvetPacientes(vector <consultorio> vetPacientes) {
    this->vetPacientes = vetPacientes;
}
void consultorio::cadastraPaciente(paciente p){
    
}
bool  consultorio::removerPaciente(int cpf){

}
void consultorio::imprimirListaDeTodosPacientes(){

}
