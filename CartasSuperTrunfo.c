#include <stdio.h>

    int main(){
       
        // variaveis das cartas, entrada de dados  //
       
        char estado1;
        char estado2;
        char codigoCarta1 [4];
        char codigoCarta2 [4];
        char cidade1 [50], cidade2 [50];
        unsigned long int populacao1, populacao2;
        int area1, area2;
        unsigned long int pib1, pib2;
        int pontosTuristicos1, pontosTuristicos2;
        float densidadePopulacional1, densidadePopulacional2;
        float inversoDensidadePopulacional1, inversoDensidadePopulacional2;
        float pibPerCapita1, pibPerCapita2;
        float superPoder1, superPoder2;
       
        //     entrada de dados         //
       
        printf ("\n ===== Cadastro de Carta 1 =====\n");
       
        printf("Estado [A-H]: ");
        scanf (" %c", &estado1);
       
        printf ("Codigo da Carta: ");
        scanf ("%s", codigoCarta1);
       
        printf ("Nome da cidade: ");
        scanf ("%s", &cidade1);
       
        printf ("População: ");
        scanf ("%lu", &populacao1);
       
        printf ("Area em Km²: ");
        scanf ("%d", &area1);
       
        printf ("PIB: ");
        scanf ("%lu", &pib1);
       
        printf ("Pontos Turisticos: ");
        scanf ("%d", &pontosTuristicos1);
       
        // =================================== //
       
        printf ("\n ===== Cadastro de Carta 2 =====\n");
       
        printf("Estado [A-H]: ");
        scanf (" %c", &estado2);
       
        printf ("Codigo da Carta: ");
        scanf ("%s", codigoCarta2);
       
        printf ("Nome da cidade: ");
        scanf ("%s", &cidade2);
       
        printf ("População: ");
        scanf ("%lu", &populacao2);
       
        printf ("Area em Km²: ");
        scanf ("%d", &area2);
       
        printf ("PIB: ");
        scanf ("%lu", &pib2);
       
        printf ("Pontos Turisticos: ");
        scanf ("%d", &pontosTuristicos2);
       
        // Saída de dados   //
       
        printf ("\n===== Cartas cadastradas =====\n");
       
        printf ("\n.Carta 1 \n");
        printf ("\nEstado : %c\n", estado1);
        printf ("Codigo da carta: %s\n", codigoCarta1);
        printf ("Nome da cidade: %s\n", cidade1);
        printf ("População: %lu\n", populacao1);
        printf ("Area em Km²: %d\n", area1);
        printf ("PIB: %lu\n", pib1);
        printf ("Pontos Turisticos: %d\n", pontosTuristicos1);
       
            //    Densidade populacional + PIB per capta + super poder  //
           
        densidadePopulacional1 = (float) populacao1 / area1;
        pibPerCapita1 = (float) pib1 / populacao1;
        inversoDensidadePopulacional1 = area1 / populacao1;
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidadePopulacional1;

        printf ("Densidade Populacional %.2f \n", densidadePopulacional1);
        printf ("PIB Per Capita: %.2f\n", pibPerCapita1);
        printf ("Super Poder: %.2f\n", superPoder1);
       
        //  ==========================    //
       
        printf ("\n.Carta 2 \n");
        printf ("\nEstado : %c\n", estado2);
        printf ("Codigo da carta: %s\n", codigoCarta2);
        printf ("Nome da cidade: %s\n", cidade2);
        printf ("População: %lu\n", populacao2);
        printf ("Area em Km²: %lu\n", area2);
        printf ("PIB: %lu\n", pib2);
        printf ("Pontos Turisticos: %d\n", pontosTuristicos2);
       
        //    Densidade populacional + PIB per capta + super poder   //
       
        densidadePopulacional2 = (float) populacao2 / area2;
        printf ("Densidade Populacional %.2f \n", densidadePopulacional2);
       
        pibPerCapita2 = (float) pib2 / populacao2;
        printf ("PIB Per Capita: %.2f\n", pibPerCapita2);
       
        inversoDensidadePopulacional2 = area2 / populacao2;
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidadePopulacional2;
       printf ("Super Poder: %.2f\n", superPoder2);
       
               // comparação carta 1 vs carta 2 //

               printf ("\n===== Vencedor do Super Trunfo =====\n");

               printf ("\nPopulação: Carta 1 venceu %d\n", populacao1 > populacao2);
               printf ("Area em Km²: Carta 1 venceu %d\n", area1 > area2);
               printf ("PIB: Carta 1 venceu %d\n", pib1 > pib2);
               printf ("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
               printf ("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
               printf ("Super Poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);


        return 0;
    }
