#ifndef ATRIBUI_H
#define ATRIBUI_H

#include "Vendedor.hpp"
#include "Engenheiro.hpp"
#include "Empregado.hpp"
#include <iostream>
#include <string>

void atribuiNomes(std::string nome, double salarioH, int projetos, Engenheiro &tipo);
void atribuiNomesOne(std::string nome, double salarioH, double quotaM, Vendedor &tipo);

#endif