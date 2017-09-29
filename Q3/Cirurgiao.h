#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

class Cirurgiao : public Medico{
	private:
		string nomeCurso;
	public: 
		void FazerCirurgia();
		void SetNomeCurso(string);
		string GetNomeCurso();
};
#endif
