#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigoCarta1 [4];
    char cidade1 [50];
    int populacao1;
    int area1;
    int pib1;
    int pontosTuristicos1;

    // ======================================= //

    char estado2;
    char codigoCarta2 [4];
    char cidade2 [50];
    int populacao2;
    int area2;
    int pib2;
    int pontosTuristicos2;
  // Área para entrada de dados
    printf ("\n====== Cadastro de Carta 1 =====\n");

    printf ("Estado [A-H]: ");
    scanf (" %c", &estado1);

    printf ("Codigo da carta: ");
    scanf ("%s", codigoCarta1);

    printf ("Nome da cidade: ");
    scanf ("%s", cidade1);

    printf ("População: ");
    scanf ("%d", &populacao1);

    printf ("Area em KM²: ");
    scanf ("%d", &area1);

    printf ("PIB: ");
    scanf ("%d", &pib1);

    printf ("Numero de pontos turisticos: ");
    scanf ("%i", &pontosTuristicos1);

    // ========================================= //

    printf ("\n====== Cadastro de carta 2 ======\n");

    printf ("Estado [A-H]: ");
    scanf (" %c", &estado2);

    printf ("Codigo da carta: ");
    scanf ("%s", codigoCarta2);

    printf ("Nome da cidade: ");
    scanf (" %s", cidade2);

    printf ("População: ");
    scanf ("%d", &populacao2);

    printf ("Area em KM²: ");
    scanf ("%d", &area2);

    printf ("PIB: ");
    scanf ("%d", &pib2);

    printf ("Numero de pontos turisticos: ");
    scanf ("%i", &pontosTuristicos2);
  // Área para exibição dos dados da cidade
  printf ("====== Cartas Cadastradas ======\n");

  printf ("Carta 1:\n");
  printf ("Estado: %c\n", estado1);
  printf ("Codigo: %s\n", codigoCarta1);
  printf ("Cidade: %s\n", cidade1);
  printf ("População: %d\n", populacao1);
  printf ("Area em Km²: %d\n", area1);
  printf ("PIB: %d\n", pib1);
  printf ("Numero de pontos turisticos %i\n", pontosTuristicos1);

  // ================================================================ //

  printf ("\nCarta 2:\n");
  printf ("Estado: %c\n", estado2);
  printf ("Codigo: %s\n", codigoCarta2);
  printf ("Cidade: %s\n", cidade2);
  printf ("População: %d\n", populacao2);
  printf ("Area em Km²: %d\n", area2);
  printf ("PIB: %d\n", pib2);
  printf ("Numero de pontos turisticos %i\n", pontosTuristicos2);
return 0;
} 
