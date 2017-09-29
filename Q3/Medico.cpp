#include "Medico.h"

void Medico::SetMed(string nome, float h, float peso){
	this->nome = nome;
	this->h = h;
	this->peso = peso;
}

string Medico::GetNome(){
	return this->nome;
}

float Medico::GetH(){
	return this->h;
}
		
float Medico::GetPeso(){
	return this->peso;
}
