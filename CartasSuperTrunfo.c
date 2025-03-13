#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para armazenar informações das cartas
    char estado1, estado2; // Letras de A a H
    char carta1[4], carta2[4]; // Números de 01 a 04
    char cidade1[50], cidade2[50]; // Nomes das cidades
    int populacao1, populacao2; // População das cidades
    float area1, area2; // Área em km²
    float pib1, pib2; // PIB das cidades
    int pontoTuristicos1, pontoTuristicos2; // Pontos turísticos

    // Cadastro da primeira carta
    printf("Bem vindo ao Jogo Super trunfo\n");

    printf("\n");

    printf("Registre a carta 1\n");

    printf("\n");

    printf("Escolha uma Letra de (A a H): ");
    scanf("%c", &estado1); // Lê a letra do estado

    printf("Escolha um número de (01 a 04): ");
    scanf("%3s", carta1); // Lê o número da carta

    getchar(); // Remove o Enter que ficou no buffer

    printf("Digite uma cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha

    printf("População da cidade: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1); // Lê a área

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1); // Lê o PIB

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontoTuristicos1); // Lê a quantidade de pontos turísticos

    printf("\n");

    // Cadastro da segunda carta
    printf("Registre a carta 2\n");

    printf("\n");

    printf("Escolha uma Letra de (A a H): ");
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Escolha um número de (01 a 04): ");
    scanf("%3s", carta2); // Lê o número da carta

    getchar(); // Remove o Enter que ficou no buffer

    printf("Digite uma cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Lê o nome da cidade
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha

    printf("População da cidade: ");
    scanf("%d", &populacao2); // Lê a população

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2); // Lê a área

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2); // Lê o PIB

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontoTuristicos2); // Lê a quantidade de pontos turísticos

    printf("\n");

    // Exibe os resultados da primeira carta
    printf("Carta 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicos1);

    printf("\n");

    // Exibe os resultados da segunda carta
    printf("Carta 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicos2);

    return 0;
}
