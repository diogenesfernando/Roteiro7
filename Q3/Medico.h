#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>
#include <string>

using namespace std;

class Medico{
	private:
		string nome;
		float h, peso;
	public: 
		void SetMed(string, float, float);
		string GetNome();
		float GetH();
		float GetPeso();

};
#endif
