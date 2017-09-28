#include "Funcionario.h"


void Funcionario::SetFunc(string matricula, string nome, float salario){
	this->matricula = matricula;
	this->nome = nome;
	this->salario = salario; 
}

string Funcionario::GetMatricula(){
	return this->matricula;
}

string Funcionario::GetNome(){
	return this->nome;
}

float Funcionario::GetSalario(){
	return this->salario;
}
