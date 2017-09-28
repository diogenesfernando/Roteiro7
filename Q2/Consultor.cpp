#include "Consultor.h"


float Consultor::GetSalario(){
	 return Funcionario::GetSalario()  * 1.1; 
}

float Consultor::GetSalario(float percentual){
	return Funcionario::GetSalario()  * (1+(percentual/100));
}
