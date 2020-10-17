#include <string>
#include "Vendedor.hpp"
using namespace std;

const int TOTAL_MESES_ANO = 12;

double Vendedor::quotaTotalAnual() {

	return this->getQuotaMensalVendas() * TOTAL_MESES_ANO;
}//Fim de quotaTotalAnual


void Vendedor::setQuotaMensalVendas( double quotaMensal ){

	this->quotaMensalVendas = quotaMensal;
}//Fim de setQuotaMensal


double Vendedor::getQuotaMensalVendas(){

    return this->quotaMensalVendas;
}//Fim de getQuotaMensalVendas
