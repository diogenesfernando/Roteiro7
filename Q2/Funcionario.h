#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

using namespace std;

class Funcionario{
	private:
	string matricula, nome;
	float salario;

	public:
	void SetFunc(string, string, float);
	string GetMatricula();
	string GetNome();
	virtual float GetSalario();
};

#endif
