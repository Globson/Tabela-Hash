#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef HASHING_H
#define HASHING_H

typedef struct{
  char *Palavra;
  int Numero;
  short unsigned Status; //Verificador de preenchimento//
}Item_Hash;

typedef struct{
  Item_Hash Tabela[7];
  int Peso[46];
}Tabela_Hash;

void Inicializa_Hash(Tabela_Hash* Tabela);
int Calcula_Peso(Item_Hash Item,int* Peso);
int Insere_Hash(Tabela_Hash* Tabela, Item_Hash Hash);
int Remove_Hash(Tabela_Hash* Tabela, Item_Hash Hash);
int Pesquisa_Hash(Tabela_Hash Tabela,Item_Hash Hash);

#endif
