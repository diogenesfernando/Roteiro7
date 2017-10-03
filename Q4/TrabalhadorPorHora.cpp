#include "TrabalhadorPorHora.h"

void TrabalhadorPorHora::CalcularPagamento (int horas){
	if(horas > 40)
		SetSalario((((horas-40)*1.5)+40)*10);
	else SetSalario(horas*10);
	cout << "Salário: " << GetSalario() << endl;
}
		
