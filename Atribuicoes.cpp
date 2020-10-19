#include "Atribuicoes.hpp"


void atribuiNomes(std::string nome, double salarioH, int projetos, Engenheiro &tipo){
    tipo.nome = nome;
    tipo.salarioHora = salarioH;
    tipo.projetos = projetos;
}
void atribuiNomesOne(std::string nome, double salarioH, double quotaM, Vendedor &tipo){
    tipo.nome = nome;
    tipo.salarioHora = salarioH;
    tipo.quotaMensalVendas = quotaM;
}

