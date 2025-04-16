#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    printf("* Bem-Vido(a) ao Jogo Super Trunfo *");

    // Variáveis da CARTA 1 
    char estado1; 
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;


    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // Entrada dos dados da carta 1
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Lê uma letra (A-H)

    printf("Código (Ex: A01): ");
    scanf("%3s", codigo1);   // Lê 3 caracteres (ex: A01)

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê o nome (com espaços)

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;  // Convertendo PIB para reais (bilhões -> unidades) 

    // Entrada dos dados da Carta 2 
    printf("\n== Cadastro da Segunda Carta ==\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (Ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2); 

    // Cálculos para Carta 1
    densidade1 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1e9) / populacao2;

    // Exibição das Cartas
    printf("\n--- Dados das Cartas ---\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;

}
