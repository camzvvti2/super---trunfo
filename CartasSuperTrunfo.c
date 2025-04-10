#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[3]; 
    char cidade1[11];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

    // Dados da segunda carta
    char estado2[3];
    char cidade2[11];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    printf("** Cadastro da Primeira Carta **\n");

    printf("Uma letra de um Estado (ex: S): ");
    scanf("%2s", estado1);

    printf("Nome da Cidade (ex: osasco): ");
    scanf("%10s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("\n** Cadastro da Segunda Carta **\n");

    printf("Uma letra do Estado (ex: A): ");
    scanf("%2s", estado2);

    printf("Nome da Cidade (ex: barueri): ");
    scanf("%10s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n** Dados Cadastrados **\n");

    printf("\n-- Primeira Carta --\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\n-- Segunda Carta --\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0;
}