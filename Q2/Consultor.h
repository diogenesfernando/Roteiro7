#ifndef Consultor_H
#define Consultor_H
#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

class Consultor : public Funcionario{
	private: 
	
	public:
	virtual float GetSalario();
	float GetSalario(float percentual);
};

#endif
