#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <iostream>
#include <string>

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{
	private:
		
	public:
		void CalcularPagamento (int horas);
		

};
#endif
