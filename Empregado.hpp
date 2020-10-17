#ifndef EMPREGADO_H
#define EMPREGADO_H

#include<string>
using namespace std;

class Empregado {
	
  private:
    double salarioHora;  
    string nome;  

  public:
    double pagamentoMes(double horasTrabalhadas);
    	
    void setSalarioHora( double salario );
    double getSalarioHora();

    void setNome( string nomeSeted );
    string getNome();
};

#endif