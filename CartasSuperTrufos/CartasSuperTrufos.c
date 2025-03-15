#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, desin1, desin2, capita1, capita2, super1, super2;
    int pontos1, pontos2;
    int densidade_invertida1, densidade_invertida2;
    // Coletando dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    desin1 = (float)populacao1 / area1;
    capita1 = (float)pib1 / populacao1;
    densidade_invertida1 = area1 / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + capita1 + densidade_invertida1;

    // Coletando dados para a Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    desin2 = (float)populacao2 / area2;
    capita2 = (float)pib2 / populacao2;
    densidade_invertida2 = area2 / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + capita2 + densidade_invertida2;

    // Exibindo os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional (hab/km²): %.2f\n", desin1);
    printf("(PIB per Capita (reais): %.2f\n", capita1);

    // Exibindo os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional (hab/km²): %.2f\n", desin2);
    printf("(PIB per Capita (reais): %.2f\n", capita2);
    
    //Comparaçoes das cartas 1 e 2.
    printf("\nComparação de Cartas:\n");
    printf("População: %d Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: %.2f Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: %.2f Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d Carta 1 venceu %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %.2f Carta 1 venceu %d\n", desin1 < desin2);
    printf("PIB per Capita: %.2f Carta 1 venceu %d\n", capita1 > capita2);
    printf("Super Poder: %.2f Carta 1 venceu %d\n", super1 < super2);
    
}