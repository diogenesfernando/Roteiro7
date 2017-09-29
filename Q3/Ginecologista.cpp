#include "Ginecologista.h"

void Ginecologista::AtendimentoGinecologista(){
	cout << "\n\n***Fazendo consulta sobre vagina***\n\n";
}

void Ginecologista::SetNomeCurso(string nomeCurso){
	this->nomeCurso = nomeCurso;
}

string Ginecologista::GetNomeCurso(){
	return this->nomeCurso;
}
