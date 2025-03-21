#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro de Cidades

int main() {
    // Declaração de variáveis para a primeira cidade
    char codigo1[4] = "A01";
    char nome1[50] = "Manaus";
    char estado1[20] = "Amazonas";
    int populacao1 = 4281209;
    float area1 = 1571000.0;
    float pib1 = 42968.0;
    int pontos_turisticos1 = 10;

    // Declaração de variáveis para a segunda cidade
    char codigo2[4]= "A02";
    char nome2[50]= "Goiania";
    char estado2[20]= "Goiás";
    int populacao2= 7350483;
    float area2= 340.086;
    float pib2= 55247.45;
    int pontos_turisticos2= 8;

    
    // Exibição dos dados da primeira cidade
    printf("Cidade 1 cadastrada:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    printf("A densidade populacional da cidade 1 é: %.2f habitantes/km²\n", densidade1);

    // Cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    printf("O PIB per capita da cidade 1 é: %.2f bilhões por habitante\n", pib_per_capita1);

    // Exibição dos dados da segunda cidade
    printf("\nCidade 2 cadastrada:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    // Cálculo da densidade populacional

    float densidade2 = populacao2 / area2;
    printf("A densidade populacional da cidade 2 é: %.2f habitantes/km²\n", densidade2);

    // Cálculo do PIB per capita
    float pib_per_capita2 = pib2 / populacao2;
    printf("O PIB per capita da cidade 2 é: %.2f bilhões por habitante\n", pib_per_capita2);

    

    return 0;
}

