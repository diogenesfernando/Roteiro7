#include <iostream>
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main(){
	Cirurgiao ob;

	ob.SetMed("Diógenes", 1.76, 71.40);
	ob.SetNomeCurso("Curso de cirurgia");

	cout << ob.GetNome() << endl << ob.GetH() << endl << ob.GetPeso() << endl;
	cout << ob.GetNomeCurso() << endl;
	ob.FazerCirurgia();

	return 0;
}
