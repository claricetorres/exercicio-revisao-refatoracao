#include "Vendedor.hpp"
#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include "Atribuicoes.hpp"
#include "Imprime.hpp"

int main() { 
  Engenheiro eng1, eng2, eng3;
  Vendedor vend1, vend2, vend3;

  atribuiNomes("Joao Snow", 35, 3, eng1);
  atribuiNomes("Daniela Targaryen", 30, 1, eng2);
  atribuiNomes("Bruno Stark", 30, 2, eng3);
  atribuiNomesOne("Tonho Lannister", 20, 5000, vend1);
  atribuiNomesOne("Jose Mormont", 25, 3000, vend2);
  atribuiNomesOne("Sonia Stark", 30, 4000, vend3);

  imprimeEng(eng1, 9.5);
  imprimeEng(eng2, 8);
  imprimeEng(eng3, 8);
   
  imprimeVend(vend1, 6);
  imprimeVend(vend2, 8);
  imprimeVend(vend3, 8);

  return 0;	
}