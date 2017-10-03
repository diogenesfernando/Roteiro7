#include "Trabalhador.h"
int CustoPorHora=10;

void Trabalhador::SetNome(string nome){
	this->nome = nome;
}

void Trabalhador::SetSalario(float salario){
	this->salario = salario;
}

string Trabalhador::GetNome(){
	return this->nome;}

float Trabalhador::GetSalario(){return this->salario;}

		
