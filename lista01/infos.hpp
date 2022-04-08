#ifndef __INFOS_HPP
#define __INFOS_HPP
#include <string>
#include <iostream>
using namespace std;

class infos{
    private:

        string nomeCarro;

        string fabricante;

        string nomeMotorista;

        string motor_forca;

        int km_inicial;

        int km_final;

    public:

        void setnomeCarro(string nomeCarro);
        string getnomeCarro();

        void setfabricante(string fabricante);
        string getfabricante();

        void setnomeMotorista(string nomeMotorista);
        string getnomeMotorista();

        void setmotor_forca(string motor_forca);
        string getmotor_forca();

        void setkm_inicial(int km_inicial);
        int getkm_inicial();

        void setkm_final(int km_final);
        int getkm_final();

        float calculo();
        
        void imprimir();
 };
 #endif
