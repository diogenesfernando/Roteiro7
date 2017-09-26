#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"



class Triangulo : FiguraGeometrica{
		public: Triangulo(){
				nome = "triangulo";
				CalcularArea();
			}
};
#endif
