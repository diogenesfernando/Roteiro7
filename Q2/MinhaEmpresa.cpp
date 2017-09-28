#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
	Funcionario x;
	Consultor y;
	
	x.SetFunc("123456", "Diógenes Fernando", 100);

	
	cout << "Matricula: " << x.GetMatricula() << endl;
	cout << "Nome: " << x.GetNome() << endl;
	cout << "Salário: " << x.GetSalario() << endl;

	cout << "\n\n\n***Funcionário sendo CONSULTOR***\n\n\n";

	y.SetFunc("123456", "Diógenes Fernando", 100);

	cout << "Matricula: " << y.GetMatricula() << endl;
	cout << "Nome: " << y.GetNome() << endl;
	cout << "Salário: " << y.GetSalario(50) << endl;


	return 0;
}
