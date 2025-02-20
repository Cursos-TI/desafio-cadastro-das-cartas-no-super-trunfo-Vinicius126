#include <stdio.h>

int main() {
  int populacao,pontosturisticos;
  float area,pib;
  char nome[50],estado[50],codigo [50];
 
  printf("digite a populacao: \n");
  scanf("%d", &populacao);

  printf("digite os pontos turisticos: \n");
  scanf("%d", &pontosturisticos);

  printf("digite a area: \n");
  scanf("%f", &area);

  printf("digite o pib: \n");
  scanf("%f", &pib);

  printf("digite a cidade: \n");
  scanf("%s", &nome);

  printf("digite o estado: \n");
  scanf("%s", &estado);

  printf("digite o codigo: \n");
  scanf("%s", &codigo);

  printf("populacao: %d - Pontos Turisticos: %d - Área: %f - Pib: %f\n", populacao, pontosturisticos, area);
  scanf("nome: %s - Estado: %s - Código: %s\n",nome, estado, codigo);


  return 0;
}
