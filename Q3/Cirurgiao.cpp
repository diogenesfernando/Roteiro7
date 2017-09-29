#include "Cirurgiao.h"

void Cirurgiao::FazerCirurgia(){
	cout << "\n\n***Fazendo a cirurgia***\n\n";
}

void Cirurgiao::SetNomeCurso(string nomeCurso){
	this->nomeCurso = nomeCurso;
}

string Cirurgiao::GetNomeCurso(){
	return this->nomeCurso;
}
