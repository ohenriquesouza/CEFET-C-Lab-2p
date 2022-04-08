#ifndef __PROPRIETARIO_HPP
#define __PROPRIETARIO_HPP
#include <string>
using namespace std;
class Proprietario{
    private:
        string nome;
    public:
        Proprietario();
        void setnome(string nome);
        string getnome();
};
#endif