#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include <string>

using namespace std;

class Trabalhador{
	private:
		string nome;
		float salario;
	public:
		void SetNome(string);
		void SetSalario(float);
		string GetNome();
		float GetSalario();

};
#endif
