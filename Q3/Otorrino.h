#ifndef OTORRIN_H
#define OTORRINO_H
#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Otorrino : public Medico{
	private:
		string nomeCurso;
	public: 
		void AtendimentoOtorrino();
		void SetNomeCurso(string);
		string GetNomeCurso();
};
#endif
