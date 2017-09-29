#include "Otorrino.h"

void Otorrino::AtendimentoOtorrino(){
	cout << "\n\n***Fazendo consulta sobre o nariz***\n\n";
}

void Otorrino::SetNomeCurso(string nomeCurso){
	this->nomeCurso = nomeCurso;
}

string Otorrino::GetNomeCurso(){
	return this->nomeCurso;
}
