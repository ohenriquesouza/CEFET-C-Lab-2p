#include "classes.hpp"
#include <iostream>
#include <string>
using namespace std;

calculadora::calculadora(double x, double y, char z){
    this->num1=x;
    this->num2=y;
    this->operacao=z;
}
double calculadora::getnum1(){
    return this->num1;
}
double calculadora::getnum2(){
    return this->num2;
}
char calculadora::getoperacao(){
   return this->operacao;
}


void calculadora::calcula()
{
     if(getoperacao() =='+'){
            cout<<"Resultado: "<<num1+num2<<endl;
    }
    if(getoperacao() == '-'){
            cout<<"Resultado: "<<num1-num2<<endl;
    }
    if(getoperacao() == '*'){
            cout<<"Resultado: "<<num1*num2<<endl;
    }
    if(getoperacao() == '/'){
            if(num2 == 0){
                cout<<"Valor de denominador invalido.";
            }
            else{
                cout<<"Resultado: "<<num1/num2<<endl;
            }
    }
}