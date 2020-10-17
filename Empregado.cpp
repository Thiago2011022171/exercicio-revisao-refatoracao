#include "Empregado.hpp"
#include <iostream>
#include <string>
using namespace std;

const int HORAS_REGULARES = 8;

void Empregado::setNome( string nomeSeted ){

    this->nome = nomeSeted;
}//Fim de setNome


string Empregado::getNome(){

    return this->nome;
}//Fim de getNome


void Empregado::setSalarioHora( double salario ){

    this->salarioHora = salario;
}//Fim de setSalarioHora


double Empregado::getSalarioHora(){

    return this->salarioHora;
}//Fim de getSalarioHora


//Cálculo de hora extra (+50% se horasTrabalhadas > HORAS_REGULARES)
double calcularHoraExtra( double horasTrabalhadas ){

    double horaAjustada = horasTrabalhadas;

    if (horasTrabalhadas > HORAS_REGULARES) {
        double x = horasTrabalhadas - HORAS_REGULARES;
        horaAjustada += x / 2;
    }//Fim do if

    return horaAjustada;
}//Fim de calcularHoraExtra


double Empregado::pagamentoMes(double horasTrabalhadas){

    double t = calcularHoraExtra( horasTrabalhadas );

    return t * getSalarioHora();
}//Fim de pagamentoMes

