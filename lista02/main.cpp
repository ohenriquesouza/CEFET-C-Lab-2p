#include <iostream>
#include <vector>
#include "classes.hpp"
#include "classes.cpp"
using namespace std;

int main() {

    vector <funcionario> vet;
    string departamento, data_entrada, rg;
    char opcao;
    float aumento=0, calculoAumento=0;
    double salario=0;
    int i=0,id=0, nmFunf=0;
    cout<<"Insira quantos funcionarios vao ser cadastrados: ";
    cin>>nmFunf;
    for(i=0;i<nmFunf;i++){
        funcionario f;
        cout<<"\n|||COLETA DE DADOS|||";
        cout<<"\n-------------------------------------------";
        cout<<"\nInsira seu departamento: ";
        cin.ignore();
        cin>>departamento;
        f.setdepartamento(departamento);
        cout<<"\nInsira a data de entrada: ";
        cin.ignore();
        cin>>data_entrada;
        f.setdata_entrada(data_entrada);
        cout<<"\nInsira o numero do rg: ";
        cin.ignore();
        cin>>rg;
        f.setrg(rg);
        cout<<"\nInsira o salario: R$";
        cin>> salario;
        f.setsalario(salario);
        cout<<"\nInsira o identificador: ";
        cin>> id;
        f.setid(id);
        cout<<"\nO funcionario tera um aumento no salario? (S/N): ";
        cin>>opcao;
        if(tolower(opcao) == 's'){
            cout<<"\nQuanto sera o aumento?: R$";
            cin>>aumento;
            f.settem_aumento(1);
            f.setaumento(aumento);         
        }
        vet.push_back(f);
        cout<<"\n|||FUNCIONARIO '"<<i+1<<"' CADASTRADO COM SUCESSO|||\n";
        cout<<"-------------------------------------------\n\n";
    }
    for(i=0;i<nmFunf;i++){
        vet[i].imprimir(i);
    }
}