#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <iostream>
#include <string>

using namespace std;

class TrabalhadorPorHora : public Trabalhador{
	private:
		
	public:
		void CalcularPagamento (int horas);
		

};
#endif
