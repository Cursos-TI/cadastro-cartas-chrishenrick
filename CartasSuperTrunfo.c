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

int opcao;

printf("\n=== MENU DE COMPARAÇÃO ===\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("Opção: ");
scanf("%d", &opcao);

printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

switch(opcao){

case 1:
    printf("Atributo escolhido: População\n\n");
    printf("%s: %lu habitantes\n", cidade1, populacao1);
    printf("%s: %lu habitantes\n\n", cidade2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: %s venceu!\n", cidade1);
    }
    else if(populacao2 > populacao1){
        printf("Resultado: %s venceu!\n", cidade2);
    }
    else{
        printf("Empate!\n");
    }
break;

case 2:
    printf("Atributo escolhido: Área\n\n");
    printf("%s: %.2f km²\n", cidade1, area_km1);
    printf("%s: %.2f km²\n\n", cidade2, area_km2);

    if(area_km1 > area_km2){
        printf("Resultado: %s venceu!\n", cidade1);
    }
    else if(area_km2 > area_km1){
        printf("Resultado: %s venceu!\n", cidade2);
    }
    else{
        printf("Empate!\n");
    }
break;

case 3:
    printf("Atributo escolhido: PIB\n\n");
    printf("%s: %.2f bilhões\n", cidade1, pib1);
    printf("%s: %.2f bilhões\n\n", cidade2, pib2);

    if(pib1 > pib2){
        printf("Resultado: %s venceu!\n", cidade1);
    }
    else if(pib2 > pib1){
        printf("Resultado: %s venceu!\n", cidade2);
    }
    else{
        printf("Empate!\n");
    }
break;

case 4:
    printf("Atributo escolhido: Pontos Turísticos\n\n");
    printf("%s: %d\n", cidade1, pontos_turisticos1);
    printf("%s: %d\n\n", cidade2, pontos_turisticos2);

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("Resultado: %s venceu!\n", cidade1);
    }
    else if(pontos_turisticos2 > pontos_turisticos1){
        printf("Resultado: %s venceu!\n", cidade2);
    }
    else{
        printf("Empate!\n");
    }
break;

case 5:
    printf("Atributo escolhido: Densidade Demográfica\n\n");
    printf("%s: %.2f hab/km²\n", cidade1, densidadep1);
    printf("%s: %.2f hab/km²\n\n", cidade2, densidadep2);

    // REGRA INVERTIDA
    if(densidadep1 < densidadep2){
        printf("Resultado: %s venceu!\n", cidade1);
    }
    else if(densidadep2 < densidadep1){
        printf("Resultado: %s venceu!\n", cidade2);
    }
    else{
        printf("Empate!\n");
    }
break;

default:
    printf("Opção inválida!\n");

return 0;

}