// TEMA 2 - Super Trunfo em C: desenvolvendo a lógica do jogo
// Desafio: nível Aventureiro - Implementando menu interativo e comparação por atributo

#include <stdio.h>
#include <string.h> // Necessário para usar strcmp, se precisar comparar strings no futuro (embora os requisitos atuais não exijam)

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

    // Variável para a escolha do atributo no menu
    int escolha_atributo;

    // --- Cadastro das Cartas (Mantido do código anterior) ---

    printf("Cadastro da 1ª carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

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

    // Limpar o buffer do teclado após o último scanf antes de ler a próxima string
    while (getchar() != '\n');

    printf("\nCadastro da 2ª carta\n");

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

    // --- Cálculos Derivados (Mantido do código anterior) ---

    // Calcular densidade populacional
    float densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0; // Evita divisão por zero
    float densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0; // Evita divisão por zero

    // Calcular PIB per capita
    float pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1e9) / populacao1 : 0; // Evita divisão por zero
    float pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1e9) / populacao2 : 0; // Evita divisão por zero

    // --- Menu Interativo ---

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolha_atributo);

    // --- Comparação e Exibição do Resultado (Usando switch) ---

    printf("\n--- Resultado da Comparação ---\n");
    printf("Cidades: %s vs %s\n", nomeCidade1, nomeCidade2);

    switch (escolha_atributo) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("Valor %s: %d\n", nomeCidade1, populacao1);
            printf("Valor %s: %d\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("Valor %s: %.2f km²\n", nomeCidade1, area1);
            printf("Valor %s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area1 < area2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("Valor %s: %.2f bilhões de R$\n", nomeCidade1, pib1);
            printf("Valor %s: %.2f bilhões de R$\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib1 < pib2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Número de Pontos Turísticos
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("Valor %s: %d\n", nomeCidade1, pontostur1);
            printf("Valor %s: %d\n", nomeCidade2, pontostur2);
            if (pontostur1 > pontostur2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pontostur1 < pontostur2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("Valor %s: %.2f habitantes/km²\n", nomeCidade1, densidade1);
            printf("Valor %s: %.2f habitantes/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) { // Menor valor ganha para Densidade
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    // O código original calculava o Super Poder e fazia todas as comparações.
    // Removemos essa parte para seguir os requisitos de comparar apenas o atributo escolhido.
    // O placar final também foi removido, pois a comparação é de apenas um atributo por vez.

    return 0;
}
