#include <iostream>
#include "infos.hpp"
#include "infos.cpp"

using namespace std;

int main() {

    infos c;
    string nomeCarro, fabricante, nomeMotorista;
    string motor_forca;
    float calculo = 0;
    int km_inicial = 0;
    int km_final = 0;
     
    cout << "Informe a fabricante do carro: ";
    getline(cin,fabricante);
    c.setfabricante(fabricante);
    cout << "Informe o nome do carro (modelo): ";
    getline(cin,nomeCarro);
    c.setnomeCarro(nomeCarro);
    cout<< "Informe a motorizacao do carro: ";
    getline(cin,motor_forca);
    c.setmotor_forca(motor_forca);
    cout<< "Informe o nome do motorista: ";
    getline(cin,nomeMotorista);
    c.setnomeMotorista(nomeMotorista);
    cout<< "Insira a quilometragem inicial do carro: ";
    cin>> km_inicial; 
    c.setkm_inicial(km_inicial);
    cout<< "Insira a quilometragem final do carro: ";
    cin>> km_final;
    c.setkm_final(km_final);
    c.imprimir();
    cout<< "Preco corrida: R$"<<c.calculo()<<endl;
    return 0;
}