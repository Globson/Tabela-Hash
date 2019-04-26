#include "../Headers/Hashing.h"

void Inicializa_Hash(Tabela_Hash* Tabela){
  int P = 3;
  for(int i=0;i<5;i++){
    Tabela->Peso[i]=P;
    P = P + 2;
  }
  printf("->> Peso:");
  for(int k=0;k<5;k++){
    printf("%d\n",Tabela->Peso[k]);
  }
  for(int j=0;j<7;j++){
    Tabela->Tabela[j].Palavra = (char*)malloc(sizeof(char));
    Tabela->Tabela[j].Status = 0;
  }
}
int Calcula_Peso(Item_Hash Item,int* Peso){
  int x=strlen(Item.Palavra),soma;
  for(int i=0;i<x;i++){
    soma=soma+(Item.Palavra[i]*Peso[i]);
  }
  printf("\t->>CalculoPeso: %d\n",soma);
  return soma;
}
int Insere_Hash(Tabela_Hash* Tabela, Item_Hash Item){
  int mod;
  mod = Calcula_Peso(Item,Tabela->Peso)%7;
  if(Tabela->Tabela[mod].Status == 0){
    Tabela->Tabela[mod].Numero=Item.Numero;
    strcpy(Tabela->Tabela[mod].Palavra,Item.Palavra);
    Tabela->Tabela[mod].Status=1;
    printf("Inserido com sucesso na posição %d\n",mod);
    return 1;
  }else{
    return 0;
  }
}
int Remove_Hash(Tabela_Hash* Tabela, Item_Hash Item){
  int mod;
  mod = Calcula_Peso(Item,Tabela->Peso)%7;
  printf("Mod remove: %d\n",mod);
  if(Pesquisa_Hash(*Tabela,Item)){
    Tabela->Tabela[mod].Status = 0;
    return 1;
  }else{
    return 0;
  }
}
int Pesquisa_Hash(Tabela_Hash Tabela,Item_Hash Item){
  int mod;
  mod = Calcula_Peso(Item,Tabela.Peso)%7;
  printf("Mod Procura %d\n",mod);
  if(!strcmp(Tabela.Tabela[mod].Palavra,Item.Palavra) && Tabela.Tabela[mod].Status == 1){
    return 1;
  }else{
    return 0;
  }
}
