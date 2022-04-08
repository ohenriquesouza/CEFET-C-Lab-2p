#include <iostream>
#include <math.h>
#include "classes.hpp"
using namespace std;

matematica::matematica(){
    this->num1=0;
}

void matematica::setnum1(double num1){
    this->num1=num1;
}
double matematica::getnum1(){
    return this->num1;
}

double matematica::calculaFatorial(double f){
    int i = 0;
    double fat = 1;
    for(i=f;i>1;i--){
        fat = fat * i;
    }
    return fat;
}

double matematica::seno(){
    int i = 0;
    double pot = 1, seno = 0, radiano = 0;
    radiano = num1 * M_PI / 180;
    for(i = 0; i < 10; i++){
        seno += pow(-1,i) * pow(radiano, pot) / calculaFatorial(pot);
        pot += 2;
    }
    return seno;
}

double matematica::cosseno(){
    int i = 0;
    double pot = 0, cosseno = 0, radiano = 0;
    radiano = num1 * M_PI / 180;
    for(i = 0; i < 10; i++){
        cosseno += pow(-1,i) * pow(radiano, pot) / calculaFatorial(pot);
        pot += 2;
    }
    return cosseno;
}