#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  int populacao_1, numero_de_pontos_turisticos_1;
  float area_1, densidade_populacional_1;
  double PIB_1, PIB_per_capita_1;
  char estado_1[20], codigo_da_carta_1[4], nome_da_cidade_1[20];

  int populacao_2, numero_de_pontos_turisticos_2;
  float area_2, densidade_populacional_2;
  double PIB_2, PIB_per_capita_2;
  char estado_2[20], codigo_da_carta_2[4], nome_da_cidade_2[20];

  // Área para entrada de dados - carta 01

  printf("Digite o estado: \n");
  scanf("%s", estado_1);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo_da_carta_1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade_1);
  
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao_1);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area_1);
  
  printf("Digite o PIB em bilhões (ex: 55.24): \n");
  scanf("%lf", &PIB_1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numero_de_pontos_turisticos_1);
  
  // Área para exibição dos dados da cidade - carta 01
  
  densidade_populacional_1 = (double) populacao_1 / area_1;
  PIB_per_capita_1 = (PIB_1 * 1000000000.0) / populacao_1;

  printf("\n Carta 01: \n");
  printf("Estado: %s\n", estado_1);
  printf("Código: %s\n", codigo_da_carta_1);
  printf("Nome da Cidade: %s\n", nome_da_cidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", PIB_1);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB Per Capita: %.2f reais\n", PIB_per_capita_1);

  // Área para entrada de dados - carta 02

  printf("Digite o estado: \n");
  scanf("%s", estado_2);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo_da_carta_2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade_2);
  
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao_2);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area_2);
  
  printf("Digite o PIB em bilhões (ex: 55.24): \n");
  scanf("%lf", &PIB_2);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numero_de_pontos_turisticos_2);

  // Área para exibição dos dados da cidade - carta 02
  
  densidade_populacional_2 = (double) populacao_2 / area_2;
  PIB_per_capita_2 = (PIB_2 * 1000000000.0) / populacao_2;

  printf("\n Carta 02: \n");
  printf("Estado: %s\n", estado_2);
  printf("Código: %s\n", codigo_da_carta_2);
  printf("Nome da Cidade: %s\n", nome_da_cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", PIB_2);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB Per Capita: %.2f reais\n", PIB_per_capita_2);

return 0;
} 