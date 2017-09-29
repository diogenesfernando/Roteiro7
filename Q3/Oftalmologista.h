#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Oftalmologista : public Medico{
	private:
		string nomeCurso;
	public: 
		void AtendimentoOftalmologista();
		void SetNomeCurso(string);
		string GetNomeCurso();
};
#endif
