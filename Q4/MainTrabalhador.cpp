#include <iostream>
#include <string>
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
	TrabalhadorAssalariado t1;
	TrabalhadorPorHora t2;

	t1.CalcularPagamento(10);
	t2.CalcularPagamento(50);


	return 0;
}
