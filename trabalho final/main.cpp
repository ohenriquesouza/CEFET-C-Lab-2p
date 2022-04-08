#include "Cliente.hpp"
#include "ListaCliente.hpp"
#include "Vendedor.hpp"
#include "ListaVendedor.hpp"
#include "Pessoa.hpp"
#include "Pedido.hpp"
#include "ListaPedido.hpp"
#include <iostream>
using namespace std;

int main(){
    ////////////////
    ListaVendedor Lista_Vendedor;
    ListaCliente Lista_Cliente;
    ListaPedido Lista_Pedido;
    Pessoa P;
    ///////////////
    Cliente Cliente_CL;
    Vendedor Vendedor_VD;
    Pedido Pedido_PD;
    ///////////////
    int inicializa_P=0,inicializa_C=0, inicializa_V=0,escolha_menu=0;
    string nome, endereco, dataNasc, dataPedido, observacao, nome_C, endereco_C, dataNasc_C;
    int nm_pedido, CPF, telefone, matricula, CPF_C, telefone_C;
    double limiteCredito;
    Pessoa contato;
    ////////////////
    do{
        cout<<"\n--MENU DE OPCOES--\n";
        cout<<"1- Cadastrar cliente."<<endl;
        cout<<"2- Excluir cliente."<<endl;
        cout<<"3- Cadastrar vendedor."<<endl;
        cout<<"4- Excluir vendedor."<<endl;
        cout<<"5- Realizar um pedido"<<endl;
        cout<<"6- Excluir um pedido."<<endl;
        cout<<"7- Imprimir lista de clientes."<<endl;
        cout<<"8- Imprimir pedidos de um determinado cliente."<<endl;
        cout<<"9- Imprimir lista de vendedores."<<endl;
        cout<<"10- Imprimir pedidos efetivados por um determinado vendedor."<<endl;
        cout<<" \n";
        cin>>escolha_menu;

        if(escolha_menu == 1){
            inicializa_C=1;
            cout<<"Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout<<"Endereco: ";
            getline(cin, endereco);
            cout<<"Data de nascimento: ";
            getline(cin, dataNasc);
            cout<<"CPF: ";
            cin>>CPF;
            cout<<"Telefone: ";
            cin>>telefone;
            cout<<"Limite de credito: ";
            cin>>limiteCredito;
            cout<<"////CONTATO////";
            cout<<"\nNome: ";
            cin.ignore();
            getline(cin, nome_C);
            cout<<"Endereco: ";
            getline(cin, endereco_C);
            cout<<"Data de nascimento: ";
            getline(cin, dataNasc_C);
            cout<<"Telefone: ";
            cin>>telefone_C;
            cout<<"CPF: ";
            cin>>CPF_C;
            P.setnome(nome_C);
            P.setendereco(endereco_C);
            P.setdataNasc(dataNasc_C);
            P.settelefone(telefone_C);
            P.setCPF(CPF_C);
            Cliente_CL.setcontato(P);
            Cliente_CL.setnome(nome);
            Cliente_CL.setendereco(endereco);
            Cliente_CL.setdataNasc(dataNasc);
            Cliente_CL.setCPF(CPF);
            Cliente_CL.settelefone(telefone);
            Cliente_CL.setlimiteCredito(limiteCredito);
            Lista_Cliente.Insierir_final(Cliente_CL);
        }
        if(escolha_menu == 2){
            if(inicializa_C != 1){
                cout<<"Cadastre pelo menos um cliente primeiro.\n";
            }else{
                cout<<"\nInsira o CPF que deseja remover: ";
                cin>>CPF;
                if(Lista_Cliente.Pesquisa(CPF)){
                    cout<<"\nRemovendo...";
                    Lista_Cliente.Remover_Pesquisa(CPF);
                    cout<<"\nRemocao concluida!";
                }else{
                    cout<<"\nO CPF pesquisado nao foi encontrado.";
                }
            }      
        }
        if(escolha_menu == 3){
            inicializa_V=1;
            cout<<"Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout<<"Endereco: ";
            getline(cin, endereco);
            cout<<"Data de nascimento: ";
            getline(cin, dataNasc);
            cout<<"CPF: ";
            cin>>CPF;
            cout<<"Telefone: ";
            cin>>telefone;
            cout<<"Matricula: ";
            cin>>matricula;
            Vendedor_VD.setnome(nome);
            Vendedor_VD.setendereco(endereco);
            Vendedor_VD.setdataNasc(dataNasc);
            Vendedor_VD.setCPF(CPF);
            Vendedor_VD.settelefone(telefone);
            Vendedor_VD.setmatricula(matricula);
            Lista_Vendedor.Insierir_final(Vendedor_VD); 
        }
        if(escolha_menu == 4){
            if(inicializa_V != 1){
                cout<<"Cadastre pelo menos um vendedor primeiro.\n";
            }else{
                cout<<"\nInsira a matricula que deseja remover: ";
                cin>>matricula;
                if(Lista_Vendedor.Pesquisa(matricula)){
                    cout<<"\nRemovendo...";
                    Lista_Vendedor.Remover_Pesquisa(matricula);
                    cout<<"\nRemocao concluida!";
                }else{
                    cout<<"\nA matricula pesquisada nao foi encontrada.";
                }
            } 
        }
        if(escolha_menu == 5){
            Cliente* CL = new Cliente;
            Vendedor* VD = new Vendedor;
            Pedido* PD = new Pedido;
            inicializa_P=1;
            cout<<"Insira o CPF do cliente: ";
            cin>>CPF;
            cout<<"Insira a MATRICULA do vendedor: ";
            cin>>matricula;
            cout<<"Insira a data que a venda esta sendo realizada: ";
            cin.ignore();
            getline(cin, dataPedido);
            cout<<"Insira o NUMERO do pedido: ";
            cin>>nm_pedido;
            cout<<"Insira a OBSERVACAO da compra: ";
            cin.ignore();
            getline(cin, observacao);
            Pedido_PD.setdataPedido(dataPedido);
            Pedido_PD.setnm_pedido(nm_pedido);
            Pedido_PD.setObservacoes(observacao);
            Lista_Pedido.Inserir_final(Pedido_PD);
            if(Lista_Cliente.Pesquisa(CPF)){
                if(Lista_Pedido.Pesquisa(nm_pedido)){
                    CL = Lista_Cliente.Obter_Cliente(CPF);
                    PD = Lista_Pedido.PesquisaPedido(nm_pedido);
                    CL->InserirPedidoNoCliente(PD);
                }else{
                    cout<<"\nO NUMERO do pedido eh invalido.";
                }
            }else{
                cout<<"\nO CPF pesquisado nao consta no sistema.";
            }
            if(Lista_Vendedor.Pesquisa(matricula)){
                if(Lista_Pedido.Pesquisa(nm_pedido)){
                    VD = Lista_Vendedor.Obter_Vendedor(matricula);
                    PD = Lista_Pedido.PesquisaPedido(nm_pedido);
                    VD->InserirPedidoNoVendedor(PD);
                }else{
                    cout<<"\nO NUMERO do pedido eh invalido.";
                }
            }else{
                cout<<"\nA MATRICULA de vendedor pesquisada nao consta no sistema.";
            }    
        }
        if(escolha_menu == 6){
            if(inicializa_P != 1){
                cout<<"Realize pelo menos um pedido primeiro.\n";
            }else{
                cout<<"Insira o NUMERO do pedido que deseja cancelar: ";
                cin>>nm_pedido;
                cout<<"\nRemovendo...";
                Lista_Pedido.Remover_Pesquisa(nm_pedido);
                cout<<"\nRemocao concluida!";
            }  
        }
        if(escolha_menu == 7){
           Lista_Cliente.MostrarTodos();
        }
        if(escolha_menu == 8){
            if(inicializa_C != 1){
                cout<<"Cadastre pelo menos um cliente primeiro.\n";
            }else{
                Cliente* CL = new Cliente;
                cout<<"Insira o CPF do cliente: ";
                cin>>CPF;
                if(Lista_Cliente.Pesquisa(CPF)){
                    cout<<"Pedidos realizados para este cliente: \n";
                    CL = Lista_Cliente.Obter_Cliente(CPF);
                    CL->MostrarPedidos();
                }else{
                    cout<<"\nO CPF pesquisado nao consta no sistema .";
                }
            }  
        }
        if(escolha_menu == 9){
            Lista_Vendedor.MostrarTodos();
        }
        if(escolha_menu == 10){
            if(inicializa_V != 1){
                cout<<"Cadastre pelo menos um vendedor primeiro.\n";
            }else{
                Vendedor* CL = new Vendedor;
                cout<<"Insira a matricula do Vendedor: ";
                cin>>matricula;
                if(Lista_Vendedor.Pesquisa(matricula)){
                    cout<<"Vendas realizadas por este Vendedor: \n";
                    CL = Lista_Vendedor.Obter_Vendedor(matricula);
                    CL->MostrarPedidos();
                }else{
                    cout<<"\nA MATRICULA pesquisada nao consta no sistema.";
                }
            } 
        }
    }while(escolha_menu <11);
}