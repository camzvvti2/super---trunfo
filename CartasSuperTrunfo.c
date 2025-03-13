#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int comparacao;
    // Definindo as variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Definindo as variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    // Leitura dos dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo das métricas para as cartas
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Escolha de atributo a ser comparado

    printf("\nEscolha um atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um número: ");
    scanf("%d", &comparacao);

    switch (comparacao)
    {
    case 1:
        printf("\nComparando População:\n");
        printf("\nCidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
        printf("População de %s: %lu\n", cidade1, populacao1);
        printf("População de %s: %lu\n", cidade2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("%s Ganhou!", cidade1);
        } else if (populacao1 < populacao2)
        {
            printf("%s Ganhou!", cidade2);
        } else if (populacao1 == populacao2)
        {
            printf("Empate");
        }
        break;

    case 2:
        printf("\nComparando PIB:\n");
        printf("\nCidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
        printf("Área de %s: %f\n", cidade1, area1);
        printf("Área de %s: %f\n", cidade2, area2);
        if (area1 > area2)
        {
            printf("%s Ganhou!", cidade1);
        } else if (area1 < area2)
        {
            printf("%s Ganhou!", cidade2);
        } else if (area1 == area2)
        {
            printf("Empate");
        }
        break;

    case 3:
        printf("\nComparando Área:\n");
        printf("\nCidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
        printf("PIB de %s: %f\n", cidade1, pib1);
        printf("PIB de %s: %f\n", cidade2, pib2);
        if (pib1 > pib2)
        {
            printf("%s Ganhou!", cidade1);
        } else if (pib1 < pib2)
        {
            printf("%s Ganhou!", cidade2);
        } else if (pib1 == pib2)
        {
            printf("Empate");
        }
        break;

    case 4:
        printf("\nComparando Pontos Turísticos:\n");
        printf("\nCidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
        printf("Pontos Turísticos de %s: %d\n", cidade1, pontosTuristicos1);
        printf("Pontos Turísticos de %s: %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("%s Ganhou!", cidade1);
        } else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("%s Ganhou!", cidade2);
        } else if (pontosTuristicos1 == pontosTuristicos2)
        {
            printf("Empate");
        }
        break;

    case 5:
        printf("\nComparando Densidade demográfica:\n");
        printf("\nCidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
        printf("Densidade demográfica de %s: %f\n", cidade1, densidadePopulacional1);
        printf("Densidade demográfica de %s: %f\n", cidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("%s Ganhou!", cidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("%s Ganhou!", cidade2);
        } else if (densidadePopulacional1 == densidadePopulacional2)
        {
            printf("Empate");
        }
        break;

    default:
        printf("Valor Inválido");
        break;
    }

    return 0;
}