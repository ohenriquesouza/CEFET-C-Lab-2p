#include "paciente.hpp"
#include "consultorio.hpp"
#include "paciente.cpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    paciente p;
    consultorio c;
    char opcao;
    string nome_medico;
    string nome_consultorio, endereco_consultorio, telefone_consultorio;
    while(1){
        cout<<"--MENU DE OPCOES--\n";
        cout<<"1- Inserir informacoes do consultorio\n";
        cout<<"2- Cadastrar um paciente\n";
        cout<<"3- Remover um paciente\n";
        cout<<"4- Imprimir dados da consulta\n";
        cin>>opcao;
        if(opcao == '1'){
            cout<<"\nInforme o nome do consultorio: ";
            getline(cin, nome_consultorio);
            c.setnome(nome_consultorio);
            cout<<"\nInforme o  endereco:  ";
            getline(cin,endereco_consultorio);
            c.setendereco(endereco_consultorio);
            cout<<"\nInforme o telefone do consultorio: ";
            getline(cin, telefone_consultorio);
            c.settelefone(telefone_consultorio);
            cout<<"\nCom qual medico vai consultar?: ";
            getline(cin, nome_medico);
            p.setnome(nome_medico);
                       
            c.setmedico(p);

         }
        if(opcao == '2'){

        }
        if(opcao == '3'){

        }
        if(opcao == '4'){

        }
    };

}