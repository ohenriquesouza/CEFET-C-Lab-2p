#include "Cadastro.hpp"
#include <iostream>
void Cadastro::setvetCarro(vector<Carro>vetCarro){
    vetCarro=vetCarro;
}
void Cadastro::setvetCaminhao(vector<Caminhao>vetCaminhao){
    vetCaminhao=vetCaminhao;
}
void Cadastro::setvetDono(vector <Proprietario> vetDono){
    vetDono=vetDono;
}
void Cadastro::cadastraDono(Proprietario p){
    vetDono.push_back(p);
}
void Cadastro::cadastraCaminhao(Caminhao cm){
    vetCaminhao.push_back(cm);
}
void Cadastro::cadastraCarro(Carro ca){
    vetCarro.push_back(ca);
}
void Cadastro::imprimir(){
    int i=0;
    if(vetCaminhao.size() == 0 && vetCarro.size() == 0){
        cout<<"\nNenhum veiculo encontrado no registro.";
    }else{
        cout<<"\nLista de todos veiculos cadastrados: ";
        for(i=0; i<vetCaminhao.size();i++){
            cout<<"\n--CAMINHOES--\n";
            cout<<"Motorizacao: "<<vetCaminhao[i].getmotorizacao()<<endl;
            cout<<"Capacidade do tanque: "<<vetCaminhao[i].getcapacidadeTanque()<<"L"<<endl;
            cout<<"Combustivel: "<<vetCaminhao[i].getcombustivel()<<endl;
            cout<<"Carga suportada: "<<vetCaminhao[i].getcargaSuportada()<<"Kg"<<endl;
            cout<<"Numero de eixos: "<<vetCaminhao[i].getnumEixos()<<endl;
        }
        for(i=0;i<vetCarro.size();i++){
            cout<<"\n--CARROS--\n";
            cout<<"Motorizacao: "<<vetCarro[i].getmotorizacao()<<endl;
            cout<<"Capacidade do tanque: "<<vetCarro[i].getcapacidadeTanque()<<"L"<<endl;
            cout<<"Combustivel: "<<vetCarro[i].getcombustivel()<<endl;
            cout<<"Numero de portas: "<<vetCarro[i].getnumPortas()<<endl;
            cout<<"Capacidade do porta malas: "<<vetCarro[i].getcapacidadePortaMalas()<<"L"<<endl;
        }
    }
}
void Cadastro::pesquisaDono(string nome, Proprietario p){
   for(vector<Caminhao>::iterator it=vetCaminhao.begin();it!=vetCaminhao.end();++it){
       if(nome==it->getdono() || nome==it->getdono2()){
            cout<<"Motorizacao: "<<it->getmotorizacao()<<endl;
            cout<<"Capacidade do tanque: "<<it->getcapacidadeTanque()<<"L"<<endl;
            cout<<"Combustivel: "<<it->getcombustivel()<<endl;
            cout<<"Carga suportada: "<<it->getcargaSuportada()<<"Kg"<<endl;
            cout<<"Numero de eixos: "<<it->getnumEixos()<<endl;
       }
   }
   for(vector<Carro>::iterator it=vetCarro.begin();it!=vetCarro.end();++it){
       if(nome==it->getdono()|| nome==it->getdono2()){
            cout<<"Motorizacao: "<<it->getmotorizacao()<<endl;
            cout<<"Capacidade do tanque: "<<it->getcapacidadeTanque()<<"L"<<endl;
            cout<<"Combustivel: "<<it->getcombustivel()<<endl;
            cout<<"Numero de portas: "<<it->getnumPortas()<<endl;
            cout<<"Capacidade do porta malas: "<<it->getcapacidadePortaMalas()<<"L"<<endl;
       }
   }
}