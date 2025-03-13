#include <stdio.h>

int main() {
    
    // Declaração primeira carta
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char cidade1[50] = "Minas Gerais"; 
    float populacao1 = 21292666;
    float area1 = 586522;
    float pib1 = 1172000; 

    // Declaração segunda carta
    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char cidade2[50] = "São Paulo";
    float populacao2 = 44035304;
    float area2 = 248209;
    float pib2 = 2039000;

    // Cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Imprimir primeira carta
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);

    // Imprimir segunda carta
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);

    
    // Imprimir PIB per capita
    printf("\n*** PIB per capita ***\n");
    printf("PIB per capita de %s: R$ %.2f\n", cidade1, pib_per_capita1);
    printf("PIB per capita de %s: R$ %.2f\n", cidade2, pib_per_capita2);

    // comparação das cartas
    if (populacao1 > populacao2) {
        printf("\nA população de %s é maior que a população de %s.\n", cidade1, cidade2);
    } else if (populacao1 < populacao2) {
        printf("\nA população de %s é menor que a população de %s.\n", cidade1, cidade2);
    } else {
        printf("\nA população de %s é igual à população de %s.\n", cidade1, cidade2);
    }
    printf("resultado da comparação: %d\n", populacao1 < populacao2);

    if (area1 > area2) {
        printf("\nA área de %s é maior que a área de %s.\n", cidade1, cidade2);
    } else if (area1 > area2) {
        printf("\nA área de %s é menor que a área de %s.\n", cidade1, cidade2);
    } else {
        printf("\nA área de %s é igual à área de %s.\n", cidade1, cidade2);
    }
    printf("resultado da comparação: %d\n", area1 < area2);
        if (pib1 > pib2) {
        printf("\nO PIB de %s é maior que o PIB de %s.\n", cidade1, cidade2);
    } else if (pib1 < pib2) {
        printf("\nO PIB de %s é menor que o PIB de %s.\n", cidade1, cidade2);
    } else {
        printf("\nO PIB de %s é igual ao PIB de %s.\n", cidade1, cidade2);
    }
    printf("resultado da comparação: %d\n", pib1 > pib2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("\nO PIB per capita de %s é maior que o PIB per capita de %s.\n", cidade1, cidade2);
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("\nO PIB per capita de %s é menor que o PIB per capita de %s.\n", cidade1, cidade2);
    } else {
        printf("\nO PIB per capita de %s é igual ao PIB per capita de %s.\n", cidade1, cidade2);
    }
    printf("resultado da comparação: %d\n", pib_per_capita1 > pib_per_capita2);

    if ( populacao2 > populacao1) {
        printf("\nA população de %s é maior que a população de %s.\n", cidade2, cidade1);
    } else if (populacao2 < populacao1) {
        printf("\nA população de %s é menor que a população de %s.\n", cidade2, cidade1);
    } else {
        printf("\nA população de %s é igual à população de %s.\n", cidade2, cidade1);
    }               
    printf("resultado da comparação: %d\n", populacao2 > populacao1);

    if (area2 > area1) {
        printf("\nA área de %s é maior que a área de %s.\n", cidade2, cidade1);
    } else if (area2 < area1) {
        printf("\nA área de %s é menor que a área de %s.\n", cidade2, cidade1);
    } else {
        printf("\nA área de %s é igual à área de %s.\n", cidade2, cidade1);
    }
    printf("resultado da comparação: %d\n", area2 > area1);

    if (pib2 < pib1) {
        printf("\nO PIB de %s é maior que o PIB de %s.\n", cidade2, cidade1);
    } else if (pib2 > pib1) {
        printf("\nO PIB de %s é menor que o PIB de %s.\n", cidade2, cidade1);
    } else {
        printf("\nO PIB de %s é igual ao PIB de %s.\n", cidade2, cidade1);
    }
    printf("resultado da comparação: %d\n", pib2 < pib1);

    return 0;

}   // Fim do programa