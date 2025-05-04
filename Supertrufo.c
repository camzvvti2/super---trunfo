#include <stdio.h>

int main() {

        //Dados da Carta 1

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Dados da Carta 2

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Entrada de Dados da carta 1

    printf("Cadastro de Carta 1 \n");

    printf("Estado (Letra A a H) ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); //Lê até espaço e nova linha

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // Entrada de Dados da Carta 2

    printf("Cadastro de Carta 2\n");

    printf("Estado (Letra A a H) ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); //Lê até espaço e nova linha

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição da Carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);

    // Exibição da Carta 2

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}