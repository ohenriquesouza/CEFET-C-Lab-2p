#ifndef __CLASSES_HPP
#define __CLASSES_HPP
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class matematica{
    private:
        double num1;

    public:

        matematica();

        void setnum1(double num1);
        double getnum1();

        double calculaFatorial(double pote);

        double seno();

        double cosseno();
};
#endif