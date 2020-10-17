#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"
using namespace std;

class Vendedor : public Empregado {

    private:
        double quotaMensalVendas;
    
    public:
        double quotaTotalAnual();

        void setQuotaMensalVendas( double quotaMensal );
        double getQuotaMensalVendas();
};//Fim da classe vendedor

#endif