#include <iostream>
#include "Veiculo.hpp"
#include "Cadastro.hpp"
#include "Carro.hpp"
#include "Caminhao.hpp"
#include "Proprietario.hpp"
using namespace std;
int main(){
    vector <Proprietario> vetDono;
    Proprietario p;
    Cadastro c;
    Carro ca;
    Caminhao cm;
    char opcao,donos;
    string nome, nome2, motorizacao, combustivel;
    int capacidadeTanque, numEixos, numPortas, capacidadePortaMala;
    float cargaMax;
    do{
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- CADASTRAR UM CAMINHAO;\n";
        cout<<"2- CADASTRAR UM CARRO;\n";
        cout<<"3- IMPRIMIR TODOS CARROS E CAMINHOES;\n";
        cout<<"4- LOCALIZAR E IMPRIMIR VEICULO POR PROPRIETARIO;";
        cout<<"\n";
        cin>>opcao;
        if(opcao=='1'){
            cout<<"Motorizacao: ";
            cin.ignore();
            getline(cin, motorizacao);
            cout<<"Capacidade do tanque: ";
            cin>>capacidadeTanque;
            cout<<"Combustivel: ";
            cin.ignore();
            getline(cin, combustivel);
            cout<<"Carga MAX. suportada: ";
            cin>>cargaMax;
            cout<<"Numero de eixos: ";
            cin>>numEixos;
            cout<<"Quantos proprietarios esse veiculo possui? (1 ou 2): ";
            cin>>donos;
            if(donos == '1'){
                cin.ignore();
                cout<<"Insira o nome do dono do caminhao: ";
                getline(cin, nome);
                cm.setdono(nome);
                p.setnome(nome);
                c.cadastraDono(p);
            }if(donos > '1'){
                cout<<"Insira o nome do primeiro proprietario: ";
                cin.ignore();
                getline(cin, nome);
                cm.setdono(nome);
                c.cadastraDono(p);
                cout<<"Nome do segundo proprietario: ";
                getline(cin, nome2);
                cm.setdono2(nome2);
                c.cadastraDono(p);
            }
            cm.setmotorizacao(motorizacao);
            cm.setcapacidadeTanque(capacidadeTanque);
            cm.setcombustivel(combustivel);
            cm.setcargaSuportada(cargaMax);
            cm.setnumEixos(numEixos);
            c.cadastraCaminhao(cm);
        }
        if(opcao=='2'){
            cout<<"Motorizacao: ";
            cin.ignore();
            getline(cin, motorizacao);
            cout<<"Capacidade do tanque: ";
            cin>>capacidadeTanque;
            cout<<"Combustivel: ";
            cin.ignore();
            getline(cin, combustivel);
            cout<<"Numero de portas do carro: ";
            cin>>numPortas;
            cout<<"Capacidade do porta malas: ";
            cin>>capacidadePortaMala;
            cout<<"Quantos proprietarios esse veiculo possui? (1 ou 2): ";
            cin>>donos;
            if(donos == '1'){
                cout<<"Insira o nome do dono do carro: ";
                cin.ignore();
                getline(cin, nome);
                ca.setdono(nome);
                p.setnome(nome);
                c.cadastraDono(p);
            }if(donos > '1'){
                cout<<"Insira o nome do primeiro proprietario: ";
                cin.ignore();
                getline(cin, nome);
                ca.setdono(nome);
                c.cadastraDono(p);
                cout<<"Nome do segundo proprietario: ";
                getline(cin, nome2);
                ca.setdono2(nome2);
                c.cadastraDono(p);
            }
            ca.setmotorizacao(motorizacao);
            ca.setcapacidadeTanque(capacidadeTanque);
            ca.setcombustivel(combustivel);
            ca.setnumPortas(numPortas);
            ca.setcapacidadePortaMalas(capacidadePortaMala);
            c.cadastraCarro(ca);
        }
        if(opcao=='3'){
            c.imprimir();
        }
        if(opcao=='4'){
            Proprietario p;
            cout<<"\nInsira o nome do proprietario do veiculo: ";
            cin.ignore();
            getline(cin, nome);
            c.pesquisaDono(nome, p);
        }
        if(opcao > '4'){
            cout<<"\nPrograma finalizado.";
            break;
        }
    }while(opcao <= '4');
}