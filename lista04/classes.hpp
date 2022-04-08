#include <iostream>
#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <string>
using namespace std;

class calculadora{
    private:
        double num1;
        double num2;
        char operacao;
    public:
        calculadora(double x, double y, char z);
        void setnum1(double num1);
        double getnum1();

        void setnum2(double num2);
        double getnum2();

        void setoperacao(char operacao);
        char getoperacao();
        
        void calcula();

};

#endif