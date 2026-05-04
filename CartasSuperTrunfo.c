#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigoCarta1 [4];
    char cidade1 [50];
    int população1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ======================================= //

    char estado2;
    char codigoCarta2 [4];
    char cidade2 [50];
    int população2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  // Área para entrada de dados
    printf ("====== Cadastro de Carta 1 =====/n");

    printf ("Estado [A-H]: ");
    scanf ("%c", &estado1);

    printf ("Codigo da carta: ");
    scanf ("%s", codigoCarta1);

    printf ("Nome da cidade: ");
    scanf ("[^/n]", cidade1);

    printf ("População: ");
    scanf ("%d", &população1);

    printf ("Area em KM²: ");
    scanf ("%f", &area1);

    printf ("PIB: ");
    scanf ("%f", &pib1);

    printf ("Numero de pontos turisticos: ");
    scanf ("%i", &pontosTuristicos1);

    // ========================================= //

    printf ("====== Cadastro de carta 2 ======/n");

    printf ("Estado [A-H]: ");
    scanf ("%c", &estado2);

    printf ("Codigo da carta: ");
    scanf ("%s", codigoCarta2);

    printf ("Nome da cidade: ");
    scanf ("[^/n]", cidade2);

    printf ("População: ");
    scanf ("%d", &população2);

    printf ("Area em KM²: ");
    scanf ("%f", &area2);

    printf ("PIB: ");
    scanf ("%f", &pib2);

    printf ("Numero de pontos turisticos: ");
    scanf ("%i", &pontosTuristicos2);
  // Área para exibição dos dados da cidade
  printf ("====== Cartas Cadastradas ======");

  printf ("/nCarta 1:/n");
  printf ("Estado: %c/n", estado1);
  printf ("Codigo: %s/n", codigoCarta1);
  printf ("Cidade: %s/n", cidade1);
  printf ("População: %d/n", população1);
  printf ("Area em Km²: %f/n", area1);
  printf ("PIB: %f/n", pib1);
  printf ("Numero de pontos turisticos %i/n", pontosTuristicos1);

  // ================================================================ //

  printf ("/nCarta 2:/n");
  printf ("Estado: %c/n", estado2);
  printf ("Codigo: %s/n", codigoCarta2);
  printf ("Cidade: %s/n", cidade2);
  printf ("População: %d/n", população2);
  printf ("Area em Km²: %f/n", area2);
  printf ("PIB: %f/n", pib2);
  printf ("Numero de pontos turisticos %i/n", pontosTuristicos2);
return 0;
} 
