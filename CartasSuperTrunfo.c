// Desafio: nível mestre

#include <stdio.h>

int main() {
    // Declaração de variáveis 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;

    // Declaração de variáveis 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Dados 1
    printf("Cadastro da 1ª carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);  // espaço antes do %c limpa o buffer

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // Dados 2
    printf("Cadastro da 2ª carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur2);

    // Cálculos

    // Calcular densidade populacional
    float densidade1 = populacao1 / area1;  // Densidade populacional da carta 1
    float densidade2 = populacao2 / area2;  // Densidade populacional da carta 2

    // Calcular PIB per capita
    // o PIB está em bilhões de reais. A notação 1e9 significa 1 × 10⁹ (ou seja, 1 bilhão)

    float pibPerCapita1 = pib1 * 1e9 / populacao1;  // PIB per capita da carta 1
    float pibPerCapita2 = pib2 * 1e9 / populacao2;  // PIB per capita da carta 2

    // Calcular super poder
    // O super poder é calculado com todos os valores números da carta, e o inverso da densidade populacional(Quanto menor a densidade, maior o poder.).
    // Armazenando o maior valor em uma variável chamada superPoder1 e o menor em superPoder2.
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontostur1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontostur2 + pibPerCapita2 + (1.0f / densidade2);

    // Mostrando as cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparações (1 = Carta 1 vence | 0 = Carta 2 vence ou empata):\n");
    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (pontostur1 > pontostur2) ? 1 : 0);
    printf("PIB per capita: %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2) ? 1 : 0);
    printf("Super Poder: %d\n", (superPoder1 > superPoder2) ? 1 : 0);

    // Placar final
    // O placar final é calculado somando os pontos da carta 1 e subtraindo de 7 para a carta 2.
    // O placar final é exibido com a quantidade de pontos de cada carta.
    int pontos1 = 0;
    pontos1 += (populacao1 > populacao2);
    pontos1 += (area1 > area2);
    pontos1 += (pib1 > pib2);
    pontos1 += (pontostur1 > pontostur2);
    pontos1 += (pibPerCapita1 > pibPerCapita2);
    pontos1 += (densidade1 < densidade2); // menor vence
    pontos1 += (superPoder1 > superPoder2);

    printf("\nPlacar final:\nCarta 1: %d pontos\nCarta 2: %d pontos\n", pontos1, 7 - pontos1);

    return 0;
}
