#include <stdio.h>

int main() {
    // Exibir título do programa
    printf("*** Super Trunfo - Comparação de Cartas ***\n\n");

    // Declaração das variáveis para a primeira carta (Bruxelas)
    char pais1[] = "Bélgica";
    char codigo1[] = "B01";
    char nomeCidade1[] = "Bruxelas";
    int populacao1 = 1190000;
    float area1 = 161.38;
    float pib1 = 543; // PIB em bilhões de euros
    int pontosTuristicos1 = 28;

    // Declaração das variáveis para a segunda carta (Buenos Aires)
    char pais2[] = "Argentina";
    char codigo2[] = "A02";
    char nomeCidade2[] = "Buenos Aires";
    int populacao2 = 3120000;
    float area2 = 202.0;
    float pib2 = 646.1; // PIB em bilhões de dólares
    int pontosTuristicos2 = 250;

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibir informações das cartas
    printf("Carta 1: %s (%s)\n", nomeCidade1, pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões\n", pibPerCapita1);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2: %s (%s)\n", nomeCidade2, pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões\n", pibPerCapita2);
    printf("Pontos turísticos: %d\n\n", pontosTuristicos2);

    // Escolher atributo para comparação (aqui escolhi "População")
    printf("*** Comparação de Cartas (Atributo: População) ***\n\n");
    printf("%s: %d habitantes\n", nomeCidade1, populacao1);
    printf("%s: %d habitantes\n\n", nomeCidade2, populacao2);

    // Comparação e determinação do vencedor
    if (populacao1 > populacao2) {
        printf("Vencedor: %s (%s)\n", nomeCidade1, pais1);
    } else if (populacao1 < populacao2) {
        printf("Vencedor: %s (%s)\n", nomeCidade2, pais2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
