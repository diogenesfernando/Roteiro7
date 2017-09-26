#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"



class Quadrado : FiguraGeometrica{
		public: Quadrado(){
				nome = "quadrado";
				CalcularArea();
			}
};
#endif
