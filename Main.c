#include "Headers/Hashing.h"
//Hash com endereçamento fechado e uso de listas encadeadas.//
int main(int argc, char const *argv[]) {
  Tabela_Hash Tabela;
  Inicializa_Hash(&Tabela);
  Item_Hash Item1,Item2,Item3;
  Item1.Palavra = "Hello";
  Item1.Numero = 53;
  Item2.Palavra = "My";
  Item2.Numero = 65;
  Item3.Palavra = "Good";
  Item3.Numero = 32;
  Insere_Hash(&Tabela,Item1);
  Insere_Hash(&Tabela,Item2);
  Insere_Hash(&Tabela,Item3);
  printf("Buscando item2: %d\n",Pesquisa_Hash(Tabela,Item2));
  Remove_Hash(&Tabela,Item2);
  printf("Buscando item2 depois de remover: %d\n",Pesquisa_Hash(Tabela,Item2));
  return 0;
}
