#include <stdio.h>

int main() {

    printf("***Desafio Super Truco!***\n");
    
    // Declaração das variáveis para a primeira carta (Bruxelas)
    
    char estado1[5]= 'B'; // Representando Bélgica
    char codigo1[10] = "B01";
    char nomeCidade1[30] = "Bruxelas";
    int populacao1 = 1190000; // População estimada de Bruxelas
    float area1 = 161.38; // Área em km² de Bruxelas
    float pib1 = 543; // PIB em bilhões de euros
    int pontosTuristicos1 = 28; // Número aproximado de pontos turísticos

    // Declaração das variáveis para a segunda carta (Buenos Aires)
  
    char estado2 = 'A'; // Representando Argentina
    char codigo2[5] = "A02";
    char nomeCidade2[10] = "Buenos Aires";
    int populacao2 = 3120000; // População estimada de Buenos Aires
    float area2 = 202.0; // Área em km² de Buenos Aires
    float pib2 = 646.1; // PIB em bilhões de dólares
    int pontosTuristicos2 = 250; // Número aproximado de pontos turísticos

    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de euros\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     
    // Declaração das variáveis para duas carchar cidade1[3], cidade2[3];
    char cidade1[50], cidade2[50]
    int codigo1, codigo2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Entrada de dados para a primeira cidade
    printf("Informe o nome da primeira cidade: ");
    scanf("%s", &cidade1);
    printf("Informe o código da carta: ");
    scanf("%d", &codigo1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda cidade
    printf("Informe o nome da segunda cidade:");
    scanf("%s", &cidade2);
    printf("Informe o código da carta: ");
    scanf("%d", &codigo2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);                                                             
    
    // Cálculo da densidade populacional e do PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;
    
    // Exibição dos resultados
    printf("***CARTA***1\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("***CARTA 2***\n");
   
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    

    return 0;


 }