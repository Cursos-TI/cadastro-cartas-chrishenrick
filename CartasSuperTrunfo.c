#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo_carta1[4];
    char cidade1[25];
    unsigned long int populacao1;
    float area_km1;
    float pib1;
    int pontos_turisticos1;
    float densidadep1;
    float pibpercapita1;
    float superpoder1;


    char estado2;
    char codigo_carta2[4];
    char cidade2[25];
    unsigned long int populacao2;
    float area_km2;
    float pib2;
    int pontos_turisticos2;
    float densidadep2;
    float pibpercapita2;
    float superpoder2;

  // Área para entrada de dados
  //---------------------------------------------- CADASTRO DA CARTA NÚMERO 1 ---------------------------------------------------
    
  printf("Cadastro da Carta 1\n");
    
    printf("Estado (Uma Letra de A-H): \n");
    scanf(" %c", &estado1);

    printf("Código (ex: A01, B03): \n");
    scanf(" %s", codigo_carta1);

    printf("Nome da Cidade: \n");
    scanf(" %s", cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área(km²): \n");
    scanf("%f", &area_km1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos1);

    // -----------------------------------------------CADASTRO DA CARTA NÚMERO 2 -----------------------------------------------------

    printf("Cadastro da Carta 2\n");
    
    printf("Estado (Uma Letra de A-H): \n");
    scanf(" %c", &estado2);

    printf("Código (ex: A01, B03): \n");
    scanf(" %s", codigo_carta2);

    printf("Nome da Cidade: \n");
    scanf(" %s", cidade2);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área(km²): \n");
    scanf("%f", &area_km2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos2);
    densidadep1 = populacao1 / area_km1;
    densidadep2 = populacao2 / area_km2;
    pibpercapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;

    superpoder1 = (float)populacao1 + area_km1 + pib1 + (float)pontos_turisticos1 + pibpercapita1 + (1.0f / densidadep1);
    superpoder2 = (float)populacao2 + area_km2 + pib2 + (float)pontos_turisticos2 + pibpercapita2 + (1.0f / densidadep2);

  // Área para exibição dos dados da cidade

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area_km1);
    printf("PIB: %.2f Bilhões de Dólares\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f Bilhões de Dólares\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB Per Capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

// ---------------------------------------------------Área para comparação das cartas-------------------------------------------------------------------------------------------

    printf("\nComparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n\n", cidade2, estado2, populacao2);

// Lógica de comparação
if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}
    return 0;
} 
