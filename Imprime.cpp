#include "Imprime.hpp"

#include <iostream>
#include <string>

void imprimeVend(Vendedor &tipo, double tempo){
    std::cout << "Nome: " << tipo.nome << std::endl;
    std::cout << "Salario Mes: " << tipo.pagamentoMes(tempo) << std::endl;
    std::cout << "Quota Vendas: " << tipo.quotaTotalAnual() << std::endl;
    std::cout << std::endl;
}
void imprimeEng(Engenheiro &tipo, double tempo){
    std::cout << "Nome: " << tipo.nome << std::endl;
    std::cout << "Salario Mes: " << tipo.pagamentoMes(tempo) << std::endl;
    std::cout << "Projetos: " << tipo.projetos << std::endl;
    std::cout << std::endl;
}