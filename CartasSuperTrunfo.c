#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //definição de variáveis
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    //carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Estado (Letra de 'A' a 'H'): ");
    scanf("%s", estado1);
    printf("Código da cidade (01 a 04, ex: A01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //carta 2
    printf("Cadastro da segunda carta:\n");
    printf("Estado (Letra de 'A' a 'H'): ");
    scanf("%s", estado2);
    printf("Código da cidade (01 a 04, ex: A01): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
