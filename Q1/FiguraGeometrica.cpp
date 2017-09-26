#include <iostream>
#include <string>
#include "FiguraGeometrica.h"

using namespace std;

void FiguraGeometrica::CalcularArea(){
	float x, y;

	if(this->nome == "triangulo"){
		cout << "Digite a base e a altura: ";
		cin >> x >> y;
		cout << "Área do triângulo: " << (x*y)/2 << endl;
	}
	else if(this->nome == "quadrado"){
		cout << "Digite a base e a altura: ";
		cin >> x >> y;
		cout << "Área do quadrado: " << (x*y) << endl;
	}
	else if(this->nome == "circulo"){
		cout << "Digite o raio: ";
		cin >> x;
		cout << "Área do circulo: " << 3.14*x*x << endl;
	}
}

