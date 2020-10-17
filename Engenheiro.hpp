#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"
using namespace std;


class Engenheiro : public Empregado {

    private: 
	    int projetos;
    
    public:
        int getProjetos();
        void setProjetos( int qtdProjetos );

};//Fim da classe Engenheiro

#endif