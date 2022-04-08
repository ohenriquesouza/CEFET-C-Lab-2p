#include "classes.hpp"
#include "classes.cpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    double num1, num2;
    char operacao;
    cout<<"Insira o primeiro algarismo: ";
    cin>>num1;
    cout<<"Insira o segundo algarismo: ";
    cin>>num2;
    cout<<"Qual operacao deseja realizar? (+, -, *, /): ";
    cin>>operacao;
    calculadora c(num1,num2,operacao);
    c.calcula();
}