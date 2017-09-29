#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Ginecologista : public Medico{
	private:
		string nomeCurso;
	public: 
		void AtendimentoGinecologista();
		void SetNomeCurso(string);
		string GetNomeCurso();
};
#endif
