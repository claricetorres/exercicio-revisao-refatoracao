#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"
#include <iostream>
#include <string>

class Vendedor : public Empregado {
  public:
	double quotaTotalAnual();
};

#endif