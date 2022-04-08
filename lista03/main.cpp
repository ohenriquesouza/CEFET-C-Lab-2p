#include <iostream>
#include <math.h>
#include "classes.hpp"
#include "classes.cpp"
using namespace std;

int main(){
    matematica m;
    double n1;
    cout<<"Insira um numero: ";
    cin>>n1;
    m.setnum1(n1);
    cout<<"Seno = "<<m.seno()<<endl;
    cout<<"Cosseno = "<<m.cosseno()<<endl;
}