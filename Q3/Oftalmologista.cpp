#include "Oftalmologista.h"

void Oftalmologista::AtendimentoOftalmologista(){
	cout << "\n\n***Fazendo consulta sobre os olhos***\n\n";
}

void Oftalmologista::SetNomeCurso(string nomeCurso){
	this->nomeCurso = nomeCurso;
}

string Oftalmologista::GetNomeCurso(){
	return this->nomeCurso;
}
