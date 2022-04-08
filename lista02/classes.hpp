#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class funcionario{
    private:

        string departamento;

        string data_entrada;
    
        string rg;

        double salario;

        double aumento;

        int tem_aumento=0;
    
        int id;

    public:
        void setdepartamento(string departamento);
        string getdepartamento();

        void settem_aumento(int tem_aumento);
        int gettem_aumento();

        void setaumento(double aumento);
        double getaumento();

        void setsalario(double salario);
        double getsalario();

        void setid(int id);
        int getid();

        void setdata_entrada(string data_entrada);
        string getdata_entrada();

        void setrg(string rg);
        string getrg();

        void recebeAumento(double salario, float aumento);

        void CalculaGanhoAnual(double salario);

        void CalculaGanhoAnualAumento(double salario, float aumento);

        void imprimir(int i);
};
#endif